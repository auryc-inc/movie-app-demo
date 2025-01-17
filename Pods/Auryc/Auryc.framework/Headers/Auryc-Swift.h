// Generated by Apple Swift version 4.1 effective-3.3 (swiftlang-902.0.48 clang-902.0.37.1)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR __attribute__((enum_extensibility(open)))
# else
#  define SWIFT_ENUM_ATTR
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name) enum _name : _type _name; enum SWIFT_ENUM_ATTR SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) SWIFT_ENUM(_type, _name)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if __has_feature(modules)
@import ObjectiveC;
@import Foundation;
@import UIKit;
@import CoreGraphics;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="Auryc",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

@class UIView;

/// TODO - Documentation (Possibly the only interface exposed to App)
SWIFT_CLASS("_TtC5Auryc5Auryc")
@interface Auryc : NSObject
@property (nonatomic) BOOL isSDKInitialized;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) Auryc * _Nullable mainInstance;)
+ (Auryc * _Nullable)mainInstance SWIFT_WARN_UNUSED_RESULT;
/// Private initializer for Singleton object.
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
/// Initialize the SDK with client token and appId
+ (void)initialize:(NSString * _Nonnull)token siteId:(NSString * _Nonnull)siteId;
/// Initialize the SDK for react native app with client token and appId
+ (void)initializeRN:(NSString * _Nonnull)token siteId:(NSString * _Nonnull)siteId;
/// Pauses video recording if it is underway. Session tracking is continued.
- (void)pause;
/// Resumes video recording if pauseVideoRecording() was called to paused the recording. Calling this API without prevously pausing the recording will not have nay effect.
- (void)resume;
/// Stops the video recording if it is underway. Session tracking is continued.
- (void)stop;
- (void)forceNewSession;
- (void)uploadSession;
/// testing purpose
- (void)track:(NSString * _Nonnull)event properties:(NSDictionary<NSString *, id> * _Nonnull)properties;
- (void)track:(NSString * _Nonnull)event;
///
- (void)addSessionProperties:(NSDictionary<NSString *, id> * _Nonnull)properties;
- (void)addUserProperties:(NSDictionary<NSString *, id> * _Nonnull)properties;
///
- (void)identify:(NSString * _Nonnull)identity;
- (void)markViewAsSensitiveInformation:(UIView * _Nonnull)view;
- (void)unMarkViewAsSensitiveInformation:(UIView * _Nonnull)view;
- (void)markViewsAsSensitiveInformation:(NSArray<UIView *> * _Nonnull)views;
- (void)unMarkViewsAsSensitiveInformation:(NSArray<UIView *> * _Nonnull)views;
- (void)markALLTextFieldsAsSensitiveInformation:(BOOL)value;
- (void)markScreenAsSensitive:(BOOL)value;
@end

@class AurycCrashModel;

@interface Auryc (SWIFT_EXTENSION(Auryc))
- (void)AurycCrashHandlerDidCatchCrashWith:(AurycCrashModel * _Nonnull)model;
@end


SWIFT_CLASS("_TtC5Auryc17AurycCrashHandler")
@interface AurycCrashHandler : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) BOOL isOpen;)
+ (BOOL)isOpen SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC5Auryc15AurycCrashModel")
@interface AurycCrashModel : NSObject
@property (nonatomic, copy) NSString * _Null_unspecified name;
@property (nonatomic, copy) NSString * _Null_unspecified reason;
@property (nonatomic, copy) NSString * _Null_unspecified appinfo;
@property (nonatomic, copy) NSString * _Null_unspecified callStack;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end

@class NSCoder;

/// TODO - Change to Struct (Any benefit?)
SWIFT_CLASS_NAMED("BaseConfig")
@interface BaseConfig : NSObject <NSCoding>
- (nonnull instancetype)initWithCoder:(NSCoder * _Nonnull)decoder;
- (void)encodeWithCoder:(NSCoder * _Nonnull)coder;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC5Auryc12EventMessage")
@interface EventMessage : NSObject <NSCoding>
- (nonnull instancetype)initWithSiteId:(NSString * _Nonnull)siteId userId:(NSString * _Nonnull)userId sessionId:(NSString * _Nonnull)sessionId OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithCoder:(NSCoder * _Nonnull)decoder;
- (void)encodeWithCoder:(NSCoder * _Nonnull)coder;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end





@class VideoQueue;

/// Defines a session.
SWIFT_CLASS("_TtC5Auryc7Session")
@interface Session : NSObject <NSCoding>
@property (nonatomic, copy) NSString * _Nonnull sessionId;
@property (nonatomic, copy) NSString * _Nonnull userId;
/// TODO - Replace with a suitable DS.
/// Data structure to hold all the videoAssets of a session.
/// Stored from the earliest to newest in a Q.
@property (nonatomic, strong) VideoQueue * _Nonnull videoQueue;
@property (nonatomic, strong) EventMessage * _Nonnull eventMessage;
@property (nonatomic, copy) NSArray<EventMessage *> * _Nonnull eventMessages;
- (nonnull instancetype)initWithCoder:(NSCoder * _Nonnull)decoder;
- (void)encodeWithCoder:(NSCoder * _Nonnull)coder;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end

@class UIImage;

SWIFT_CLASS("_TtC5Auryc9TouchView")
@interface TouchView : UIImageView
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithImage:(UIImage * _Nullable)image SWIFT_UNAVAILABLE;
- (nonnull instancetype)initWithImage:(UIImage * _Nullable)image highlightedImage:(UIImage * _Nullable)highlightedImage SWIFT_UNAVAILABLE;
@end


@interface UIAlertView (SWIFT_EXTENSION(Auryc))
- (void)layoutSubviews;
@end










@interface UIImageView (SWIFT_EXTENSION(Auryc))
- (void)layoutSubviews;
@end

@class UIWindow;

@interface UILabel (SWIFT_EXTENSION(Auryc))
- (void)willMoveToWindow:(UIWindow * _Nullable)newWindow;
- (void)layoutSubviews;
@end








@interface UIPickerView (SWIFT_EXTENSION(Auryc))
- (void)layoutSubviews;
@end


@interface UISearchBar (SWIFT_EXTENSION(Auryc))
- (void)layoutSubviews;
@end


@interface UISegmentedControl (SWIFT_EXTENSION(Auryc))
- (void)layoutSubviews;
@end


@interface UISlider (SWIFT_EXTENSION(Auryc))
- (void)layoutSubviews;
@end


@interface UISwitch (SWIFT_EXTENSION(Auryc))
- (void)layoutSubviews;
@end




@interface UITextField (SWIFT_EXTENSION(Auryc))
- (void)drawRect:(CGRect)rect;
- (void)didMoveToWindow;
- (void)layoutSubviews;
@end


@interface UITextView (SWIFT_EXTENSION(Auryc))
- (void)drawRect:(CGRect)rect;
- (void)didMoveToWindow;
- (void)layoutSubviews;
@end

@class CALayer;

@interface UIView (SWIFT_EXTENSION(Auryc))
+ (void)initialize;
- (void)draw:(CALayer * _Nonnull)layer in:(CGContextRef _Nonnull)ctx;
@end


@interface UIViewController (SWIFT_EXTENSION(Auryc))
+ (void)initialize;
@end

@class UIEvent;

@interface UIWindow (SWIFT_EXTENSION(Auryc))
- (void)motionEnded:(UIEventSubtype)motion withEvent:(UIEvent * _Nullable)event;
@end

@class UIGestureRecognizer;
@class UITouch;

SWIFT_AVAILABILITY(ios,introduced=8.0)
@interface UIWindow (SWIFT_EXTENSION(Auryc)) <UIGestureRecognizerDelegate>
- (void)swizzle;
- (void)swizzledSendEvent:(UIEvent * _Nonnull)event;
- (void)addGestures;
- (BOOL)gestureRecognizer:(UIGestureRecognizer * _Nonnull)gestureRecognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(UIGestureRecognizer * _Nonnull)otherGestureRecognizer SWIFT_WARN_UNUSED_RESULT;
- (BOOL)gestureRecognizer:(UIGestureRecognizer * _Nonnull)gestureRecognizer shouldBeRequiredToFailByGestureRecognizer:(UIGestureRecognizer * _Nonnull)otherGestureRecognizer SWIFT_WARN_UNUSED_RESULT;
- (BOOL)gestureRecognizer:(UIGestureRecognizer * _Nonnull)gestureRecognizer shouldReceiveTouch:(UITouch * _Nonnull)touch SWIFT_WARN_UNUSED_RESULT;
@end


/// Defines a video asset
SWIFT_CLASS("_TtC5Auryc10VideoAsset")
@interface VideoAsset : NSObject <NSCoding>
/// File name
@property (nonatomic, copy) NSString * _Nonnull fileName;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithFileName:(NSString * _Nonnull)fileName startTime:(NSString * _Nonnull)startTime endTime:(NSString * _Nonnull)endTime fileURL:(NSURL * _Nonnull)fileURL fileSaved:(BOOL)fileSaved uploaded:(BOOL)uploaded OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithCoder:(NSCoder * _Nonnull)decoder;
- (void)encodeWithCoder:(NSCoder * _Nonnull)coder;
@end


/// Handles VideoQueue in concurrent way.
SWIFT_CLASS("_TtC5Auryc10VideoQueue")
@interface VideoQueue : NSObject <NSCoding>
@property (nonatomic, copy) NSDictionary<NSString *, VideoAsset *> * _Nonnull videoAssets;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
- (nonnull instancetype)initWithCoder:(NSCoder * _Nonnull)decoder;
- (void)encodeWithCoder:(NSCoder * _Nonnull)coder;
- (NSArray<VideoAsset *> * _Nonnull)getVideoAssets SWIFT_WARN_UNUSED_RESULT;
@end


SWIFT_CLASS("_TtC5Auryc10Visualizer")
@interface Visualizer : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) Visualizer * _Nonnull sharedInstance;)
+ (Visualizer * _Nonnull)sharedInstance SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end




@interface Visualizer (SWIFT_EXTENSION(Auryc))
+ (BOOL)isEnabled SWIFT_WARN_UNUSED_RESULT;
@end

#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
