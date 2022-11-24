#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "PusherClientPlugin.h"

FOUNDATION_EXPORT double pusher_clientVersionNumber;
FOUNDATION_EXPORT const unsigned char pusher_clientVersionString[];

