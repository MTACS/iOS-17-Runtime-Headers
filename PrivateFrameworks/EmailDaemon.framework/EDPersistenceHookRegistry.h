
@interface EDPersistenceHookRegistry : NSObject <EFLoggable> {
    struct __CFDictionary { } * _hookRespondersBySelector;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    struct __CFDictionary { } * _methodSignaturesBySelector;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_proxiedProtocols;
+ (id)log;

- (id)_copyRespondersForSelector:(SEL)arg1;
- (void)_forwardStackInvocation:(id)arg1;
- (void)_initializeMethodSignatures;
- (void)_messageRespondersWithInvocation:(id)arg1;
- (void)_registerHookResponder:(id)arg1 protocol:(id)arg2;
- (void)_registerHookResponder:(id)arg1 withMethodDescription:(struct objc_method_description { SEL x1; char *x2; })arg2;
- (void)_registerSelector:(struct objc_method_description { SEL x1; char *x2; })arg1;
- (void)dealloc;
- (void)forwardInvocation:(id)arg1;
- (id)init;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)registerAccountChangeHookResponder:(id)arg1;
- (void)registerActivityHookResponder:(id)arg1;
- (void)registerBrandIndicatorChangeHookResponder:(id)arg1;
- (void)registerCloudStorageChangeHookResponder:(id)arg1;
- (void)registerDatabaseChangeHookResponder:(id)arg1;
- (void)registerMailboxChangeHookResponder:(id)arg1;
- (void)registerMessageChangeHookResponder:(id)arg1;
- (void)registerMessageDeliveryHookResponder:(id)arg1;
- (void)registerMessageReadHookResponder:(id)arg1;
- (void)registerOneTimeCodeChangeHookResponder:(id)arg1;
- (void)registerProtectedDataReconciliationHookResponder:(id)arg1;
- (void)registerSearchableIndexHookResponder:(id)arg1;
- (void)registerSenderBucketChangeHookResponder:(id)arg1;
- (void)registerThreadChangeHookResponder:(id)arg1;
- (bool)respondsToSelector:(SEL)arg1;
- (void)unregisterAllHookResponders;
- (void)unregisterHookResponder:(id)arg1;

@end
