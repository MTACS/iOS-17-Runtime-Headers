
@interface SSDistributedNotificationCenter : NSObject {
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    NSMutableArray * _observers;
    NSString * _portName;
    SSXPCServer * _server;
}

@property (readonly) NSString *namedPort;

- (void)_distributedNotificationMessage:(id)arg1 connection:(id)arg2;
- (void)_sendRegistrationMessage:(long long)arg1 name:(id)arg2;
- (id)addObserverForName:(id)arg1 queue:(id)arg2 usingBlock:(id /* block */)arg3;
- (void)dealloc;
- (id)init;
- (id)initWithNamedPort:(id)arg1;
- (id)namedPort;
- (void)removeObserver:(id)arg1;

@end
