
@interface NSInvocation : NSObject <EFLoggable> {
    NSMutableArray * _container;
    void * _frame;
    unsigned int  _magic;
    unsigned long long  _pac_signature;
    bool * _replacedByPointerBacking;
    unsigned char  _retainedArgs;
    void * _retdata;
    NSMethodSignature * _signature;
    unsigned char  _stackAllocated;
}

@property (readonly) bool argumentsRetained;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, retain) NSMethodSignature *methodSignature;
@property SEL selector;
@property (readonly) Class superclass;
@property id target;

// Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation

+ (id)_invocationWithMethodSignature:(id)arg1 frame:(void*)arg2;
+ (id)invocationWithMethodSignature:(id)arg1;

- (void)_addAttachedObject:(id)arg1;
- (bool)argumentsRetained;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)getArgument:(void*)arg1 atIndex:(long long)arg2;
- (void)getReturnValue:(void*)arg1;
- (id)init;
- (void)invoke;
- (void)invokeUsingIMP:(int (*)arg1;
- (void)invokeWithTarget:(id)arg1;
- (id)methodSignature;
- (void)retainArguments;
- (SEL)selector;
- (void)setArgument:(void*)arg1 atIndex:(long long)arg2;
- (void)setReturnValue:(void*)arg1;
- (void)setSelector:(SEL)arg1;
- (void)setTarget:(id)arg1;
- (id)target;

// Image: /System/Library/Frameworks/CloudKit.framework/CloudKit

+ (id)invocationToFinishOperationWithInfo:(id)arg1 withError:(id)arg2;

- (void)CKInvokeAndNilOutReplyBlockWithError:(id)arg1 forProtocol:(id)arg2;
- (void)CKIterateArgumentsForIndexRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 primitiveTypeBlock:(id /* block */)arg2 objectBlock:(id /* block */)arg3 blockBlock:(id /* block */)arg4;

// Image: /System/Library/Frameworks/FileProvider.framework/FileProvider

- (id)fp_copy;
- (void)fp_sanitizeError;
- (void)fp_transformArgumentAtIndex:(unsigned long long)arg1 withBlock:(id /* block */)arg2;
- (void)fp_zeroOutReplyBlockArgumentsWithError:(id)arg1;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

- (bool)_hasBlockArgument;
- (id)debugDescription;
- (void)setUserInfo:(id)arg1;
- (id)userInfo;

// Image: /System/Library/Frameworks/MapKit.framework/MapKit

+ (id)_mapkit_invocationWithSelector:(SEL)arg1 target:(id)arg2;
+ (id)_mapkit_invocationWithSelector:(SEL)arg1 target:(id)arg2 arguments:(char *)arg3;

// Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation

+ (id)_gkInvocationWithBlock:(id)arg1;

- (void)_gkCallbackWithError:(id)arg1 queue:(id)arg2;
- (void)_gkClearCopiedArguments;
- (void)_gkClearTarget;
- (void)_gkCopyArguments;
- (bool)_gkHasReplyBlock;
- (void)_gkInvokeOnce;
- (void)_gkInvokeOnceWithTarget:(id)arg1;
- (void)_gkPrepareForCallWithError:(id)arg1;
- (id)_gkReplyHandlerInvocation;

// Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation

- (bool)wantsReturnValue;

// Image: /System/Library/PrivateFrameworks/Message.framework/Message

+ (id)log;
+ (id)mf_invocationWithSelector:(SEL)arg1 target:(id)arg2;
+ (id)mf_invocationWithSelector:(SEL)arg1 target:(id)arg2 object1:(id)arg3 object2:(id)arg4;
+ (id)mf_invocationWithSelector:(SEL)arg1 target:(id)arg2 object:(id)arg3;

- (bool)mf_shouldLogInvocation;

// Image: /System/Library/PrivateFrameworks/MessageLegacy.framework/MessageLegacy

+ (id)mf_invocationWithSelector:(SEL)arg1 target:(id)arg2;
+ (id)mf_invocationWithSelector:(SEL)arg1 target:(id)arg2 object1:(id)arg3 object2:(id)arg4;
+ (id)mf_invocationWithSelector:(SEL)arg1 target:(id)arg2 object:(id)arg3;

- (bool)mf_shouldLogInvocation;

// Image: /System/Library/PrivateFrameworks/NetAppsUtilities.framework/NetAppsUtilities

- (id)na_argumentDescriptionsWithObjectFormatter:(id /* block */)arg1;
- (id)na_argumentsAsObjects;

// Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport

+ (void)tsu_executeBlock:(id /* block */)arg1;
+ (id)tsu_invocationWithBlock:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility

+ (void)tsu_executeBlock:(id /* block */)arg1;
+ (id)tsu_invocationWithBlock:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/VisualVoicemail.framework/IMAP.framework/IMAP

+ (id)mf_invocationWithSelector:(SEL)arg1 target:(id)arg2;
+ (id)mf_invocationWithSelector:(SEL)arg1 target:(id)arg2 object1:(id)arg3 object2:(id)arg4;
+ (id)mf_invocationWithSelector:(SEL)arg1 target:(id)arg2 object:(id)arg3;

- (bool)mf_shouldLogInvocation;

// Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy

- (void)_webkit_invokeAndHandleException:(id)arg1;

@end
