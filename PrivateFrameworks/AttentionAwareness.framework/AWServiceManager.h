
@interface AWServiceManager : NSObject {
    NSXPCConnection * _connection;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableSet * _serviceObservers;
}

+ (void)addObserver:(id)arg1;
+ (id)invokeWithService:(id /* block */)arg1;
+ (void)removeObserver:(id)arg1;
+ (id)sharedManager;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (id)init;
- (id)invokeWithService:(id /* block */)arg1;
- (void)removeObserver:(id)arg1;

@end
