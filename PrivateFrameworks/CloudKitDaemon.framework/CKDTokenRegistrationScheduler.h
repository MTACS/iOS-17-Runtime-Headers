
@interface CKDTokenRegistrationScheduler : NSObject {
    NSMutableDictionary * _callbackBlocks;
    NSMutableDictionary * _callbackTimers;
    CKDLogicalDeviceContext * _deviceContext;
    NSMutableSet * _operations;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableDictionary * _unitTestingPushTokens;
}

@property (nonatomic, readonly) NSMutableDictionary *callbackBlocks;
@property (nonatomic, readonly) NSMutableDictionary *callbackTimers;
@property (nonatomic, readonly) CKDLogicalDeviceContext *deviceContext;
@property (nonatomic, readonly) NSMutableSet *operations;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) NSMutableDictionary *unitTestingPushTokens;

- (void).cxx_destruct;
- (void)_handlePushToken:(id)arg1 forContainer:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)_refreshApsToken:(id)arg1 container:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)_removeApsToken:(id)arg1 appContainerAccountTuple:(id)arg2 completionBlock:(id /* block */)arg3;
- (id)callbackBlocks;
- (id)callbackTimers;
- (void)dealloc;
- (id)deviceContext;
- (void)forceTokenRefreshForAllClients;
- (void)handlePublicPushTokenDidUpdate:(id)arg1;
- (id)initWithDeviceContext:(id)arg1;
- (id)operations;
- (id)queue;
- (void)refreshAllClientsNow:(bool)arg1;
- (void)registerTokenForAdopterContainer:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)registerTokenRefreshActivity;
- (void)tokenRefreshChanged;
- (id)unitTestingPushTokens;
- (void)unregisterAllTokensForAccountID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)unregisterTokenForAppContainerAccountTuple:(id)arg1;

@end
