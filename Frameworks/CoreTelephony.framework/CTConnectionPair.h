
@interface CTConnectionPair : NSObject {
    NSObject<OS_nw_connection> * fConnection1;
    NSObject<OS_nw_connection> * fConnection2;
    long long  fConnectionPairState;
    int  fConnectionState1;
    int  fConnectionState2;
    <CTConnectionPairDelegate> * fDelegate;
    NSObject<OS_nw_endpoint> * fEndpoint1;
    NSObject<OS_nw_endpoint> * fEndpoint2;
    NSObject<OS_nw_parameters> * fParameters1;
    NSObject<OS_nw_parameters> * fParameters2;
    NSObject<OS_dispatch_queue> * fQueue;
    bool  fStarted;
}

- (void).cxx_destruct;
- (void)connectionStateChanged:(int)arg1 connectionId:(long long)arg2;
- (void)dealloc;
- (id)initWithQueue:(id)arg1 delegate:(id)arg2 endpoint1:(id)arg3 parameters1:(id)arg4 endpoint2:(id)arg5 parameter2:(id)arg6;
- (void)receiveData:(long long)arg1;
- (bool)sendData:(id)arg1 usingConnection:(long long)arg2 completion:(id /* block */)arg3;
- (bool)start;
- (void)updatePairState:(long long)arg1;

@end
