
@interface SSXPCServer : NSObject {
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    NSString * _entitlementName;
    NSObject<OS_xpc_object> * _listener;
    NSObject<OS_dispatch_queue> * _observerQueue;
    NSMutableDictionary * _observers;
    NSString * _serviceName;
    NSMutableSet * _xpcRequestsCache;
}

+ (id)mainServer;

- (void)_dispatchMessage:(id)arg1 connection:(id)arg2;
- (void)_recordCoreAnalyticsEventForClient:(id)arg1 andSelector:(id)arg2;
- (void)addObserver:(id)arg1 selector:(SEL)arg2 forMessage:(long long)arg3;
- (void)dealloc;
- (id)init;
- (id)initWithServiceName:(id)arg1;
- (id)initWithServiceName:(id)arg1 entitlement:(id)arg2 queue:(id)arg3;
- (void)removeObserver:(id)arg1 selector:(SEL)arg2 forMessage:(long long)arg3;
- (void)start;

@end
