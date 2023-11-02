
@interface SNConnection : NSObject <SNConnectionDelegateInternal, SNConnectionProtocol> {
    SNConnectionInfo * _connectionInfo;
    <SNConnectionDelegate> * _delegate;
    SNConnectionInternal * _underlyingConnection;
}

@property (nonatomic, retain) SNConnectionInfo *connectionInfo;
@property (nonatomic) <SNConnectionDelegate> *delegate;
@property (nonatomic, retain) SNConnectionInternal *underlyingConnection;

- (void).cxx_destruct;
- (void)cancelSynchronously:(bool)arg1 isOnConnectionQueue:(bool)arg2 completion:(id /* block */)arg3;
- (id)connectionInfo;
- (id)delegate;
- (void)didCloseConnection:(id)arg1;
- (void)didEncounterError:(id)arg1 error:(id)arg2;
- (void)didEncounterIntermediateError:(id)arg1 error:(id)arg2;
- (void)didOpenConnectionType:(id)arg1 type:(id)arg2 routeId:(id)arg3 delay:(double)arg4 method:(id)arg5;
- (void)didReceiveAceObject:(id)arg1 object:(id)arg2;
- (void)didReceiveObject:(id)arg1 object:(id)arg2;
- (void)getSNConnectionMetrics:(bool)arg1 completion:(id /* block */)arg2;
- (id)init;
- (id)initWithConnectionInfo:(id)arg1 connectionQueue:(id)arg2;
- (void)sendData:(id)arg1;
- (void)setConnectionInfo:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setSendPings:(bool)arg1;
- (void)setUnderlyingConnection:(id)arg1;
- (id)start;
- (id)underlyingConnection;
- (void)willStartConnection:(id)arg1 type:(id)arg2;
- (void)willStartConnection:(id)arg1 with:(id)arg2;

@end
