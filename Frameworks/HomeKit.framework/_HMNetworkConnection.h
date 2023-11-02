
@interface _HMNetworkConnection : NSObject <_HMNetworkConnection> {
    NSObject<OS_nw_connection> * _nwConnection;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_nw_connection> *nwConnection;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)cancel;
- (id)initWithEndpoint:(id)arg1 parameters:(id)arg2;
- (id)nwConnection;
- (id)queue;
- (void)receiveMessageWithCompletion:(id /* block */)arg1;
- (void)sendData:(id)arg1 context:(id)arg2 isComplete:(bool)arg3 completion:(id /* block */)arg4;
- (void)setPathChangedHandler:(id /* block */)arg1;
- (void)setQueue:(id)arg1;
- (void)setStateChangedHandler:(id /* block */)arg1;
- (void)setViabilityChangedHandler:(id /* block */)arg1;
- (void)start;

@end
