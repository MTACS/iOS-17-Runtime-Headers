
@interface SDXPCClientConnection : CSXPCConnection {
    NSObject<OS_dispatch_queue> * _clientQueue;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *clientQueue;

- (void).cxx_destruct;
- (id)clientQueue;
- (void)handleError:(id)arg1;
- (id)initWithServiceName:(id)arg1 clientType:(long long)arg2;
- (void)invalidationHandler;

@end
