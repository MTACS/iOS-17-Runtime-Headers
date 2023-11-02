
@interface MAXpcManager : NSObject {
    NSObject<OS_dispatch_queue> * _callbackQueue;
    unsigned long long  _connectionRetryCount;
    MAXpcConnection * _maConnection;
    NSMutableArray * _postConnectionRetryCallbacks;
    NSMutableDictionary * _progressHandlers;
    NSObject<OS_dispatch_queue> * _progressQueue;
    NSString * _serviceName;
    NSObject<OS_dispatch_queue> * _stateQueue;
}

- (void).cxx_destruct;
- (void)attachProgressHandler:(id)arg1 assetId:(id)arg2 callBack:(id /* block */)arg3 withPurpose:(id)arg4;
- (void)clearConnection:(id)arg1;
- (void)ensureConnection;
- (id)initWithServiceName:(id)arg1 callbackQueue:(id)arg2;
- (void)notifyClientsOfProgress:(id)arg1;
- (void)sendAsync:(id)arg1 clientHandler:(id /* block */)arg2 taskDescriptor:(id)arg3;
- (void)sendAsync:(id)arg1 clientHandler:(id /* block */)arg2 taskDescriptor:(id)arg3 withRetry:(bool)arg4;
- (void)sendAsync:(id)arg1 clientHandler:(id /* block */)arg2 taskDescriptor:(id)arg3 withRetry:(bool)arg4 retryInitialReconnectionCount:(unsigned long long)arg5;
- (id)sendSync:(id)arg1 gettingResponseCode:(long long*)arg2 codeForXpcError:(long long)arg3 loggingName:(id)arg4;
- (void)setClientConnectionHandler;
- (void)setClientName:(id)arg1;

@end
