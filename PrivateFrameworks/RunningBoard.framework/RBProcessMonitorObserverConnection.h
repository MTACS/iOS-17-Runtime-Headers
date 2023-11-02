
@interface RBProcessMonitorObserverConnection : NSObject <RBProcessMonitorObserverConnection> {
    NSObject<OS_xpc_object> * _connection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)description;
- (id)initWithConnection:(id)arg1;
- (void)sendMessage:(id)arg1 replyQueue:(id)arg2 completion:(id /* block */)arg3;

@end
