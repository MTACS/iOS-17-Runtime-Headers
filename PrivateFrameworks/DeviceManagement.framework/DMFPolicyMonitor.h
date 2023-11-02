
@interface DMFPolicyMonitor : NSObject {
    NSObject<OS_dispatch_queue> * _firstUnlockQueue;
    int  _firstUnlockToken;
    NSMutableDictionary * _notificationTokensByPolicyMonitorIdentifier;
    NSMutableArray * _pendingRequests;
    NSObject<OS_dispatch_queue> * _registrationCallbackQueue;
    NSXPCConnection * _xpcConnection;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *firstUnlockQueue;
@property (nonatomic, readonly) int firstUnlockToken;
@property (nonatomic, readonly) NSMutableDictionary *notificationTokensByPolicyMonitorIdentifier;
@property (nonatomic, readonly) NSMutableArray *pendingRequests;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *registrationCallbackQueue;
@property (nonatomic, readonly) NSXPCConnection *xpcConnection;

+ (bool)hasFirstUnlocked;
+ (const char *)mobileKeyBagFirstUnlockNotificationName;
+ (id)policyMonitor;
+ (id)remoteInterface;

- (void).cxx_destruct;
- (void)_dispatchRequest:(id /* block */)arg1;
- (void)addRegistration:(id)arg1 forPolicyMonitorIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)dealloc;
- (id)firstUnlockQueue;
- (int)firstUnlockToken;
- (id)init;
- (id)initWithXPCConnection:(id)arg1;
- (void)invalidatePolicyMonitor:(id)arg1;
- (id)notificationTokensByPolicyMonitorIdentifier;
- (id)pendingRequests;
- (id)registrationCallbackQueue;
- (void)requestPoliciesForTypes:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)requestPoliciesForTypes:(id)arg1 withError:(id*)arg2;
- (id)xpcConnection;

@end
