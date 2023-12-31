
@interface WBSCyclerServiceProxy : NSObject <WBSCyclerServiceProtocol> {
    id /* block */  _errorHandler;
    NSXPCConnection * _xpcConnection;
}

@property (nonatomic, copy) id /* block */ connectionInvalidationHandler;
@property (nonatomic, copy) id /* block */ errorHandler;

- (void).cxx_destruct;
- (id)_cyclerProxy;
- (id /* block */)connectionInvalidationHandler;
- (void)dealloc;
- (id /* block */)errorHandler;
- (void)fetchLastErrorWithReply:(id /* block */)arg1;
- (void)fetchLogsWithReply:(id /* block */)arg1;
- (void)fetchStatusWithReply:(id /* block */)arg1;
- (id)init;
- (void)sendRequestToTestSuite:(id)arg1 reply:(id /* block */)arg2;
- (void)setConnectionInvalidationHandler:(id /* block */)arg1;
- (void)setErrorHandler:(id /* block */)arg1;
- (void)setTestTargetEndpoint:(id)arg1 reply:(id /* block */)arg2;
- (void)setValue:(id)arg1 forConfigurationKey:(id)arg2 reply:(id /* block */)arg3;
- (void)startCyclingFromBeginning:(bool)arg1 reply:(id /* block */)arg2;
- (void)stopCyclingWithReply:(id /* block */)arg1;

@end
