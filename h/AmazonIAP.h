/*
 * (C) 2001-2012 Marmalade. All Rights Reserved.
 *
 * This document is protected by copyright, and contains information
 * proprietary to Marmalade.
 *
 * This file consists of source code released by Marmalade under
 * the terms of the accompanying End User License Agreement (EULA).
 * Please do not use this program/source code before you have read the
 * EULA and have agreed to be bound by its terms.
 */
/*
 * WARNING: this is an autogenerated file and will be overwritten by
 * the extension interface script.
 */
#ifndef S3E_EXT_AMAZONIAP_H
#define S3E_EXT_AMAZONIAP_H

#include <s3eTypes.h>

// Callbacks available for registering
enum AmazonIAPCallback
{
  AMAZONIAP_PURCHASE_SUCCESSFUL,
  AMAZONIAP_PURCHASE_FAILED,
  AMAZONIAP_CALLBACK_MAX
};
// \cond HIDDEN_DEFINES
S3E_BEGIN_C_DECL
// \endcond

/**
 * Returns S3E_TRUE if the AmazonIAP extension is available.
 */
s3eBool AmazonIAPAvailable();

/**
 * Registers a callback to be called for an operating system event.
 *
 * The available callback types are listed in @ref AmazonIAPCallback.
 * @param cbid ID of the event for which to register.
 * @param fn callback function.
 * @param userdata Value to pass to the @e userdata parameter of @e NotifyFunc.
 * @return
 *  - @ref S3E_RESULT_SUCCESS if no error occurred.
 *  - @ref S3E_RESULT_ERROR if the operation failed.\n
 *
 * @see AmazonIAPUnRegister
 * @note For more information on the system data passed as a parameter to the callback
 * registered using this function, see the @ref AmazonIAPCallback enum.
 */
s3eResult AmazonIAPRegister(AmazonIAPCallback cbid, s3eCallback fn, void* userData);

/**
 * Unregister a callback for a given event.
 * @param cbid ID of the callback for which to register.
 * @param fn Callback Function.
 * @return
 * - @ref S3E_RESULT_SUCCESS if no error occurred.
 * - @ref S3E_RESULT_ERROR if the operation failed.\n
 * @note For more information on the systemData passed as a parameter to the callback
 * registered using this function, see the AmazonIAPCallback enum.
 * @note It is not necessary to define a return value for any registered callback.
 * @see AmazonIAPRegister
 */
s3eResult AmazonIAPUnRegister(AmazonIAPCallback cbid, s3eCallback fn);

s3eResult AmazonIAPStartPurchase(const char* productID);

S3E_END_C_DECL

#endif /* !S3E_EXT_AMAZONIAP_H */