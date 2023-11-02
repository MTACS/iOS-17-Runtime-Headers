
@interface BMComputeSourceServerConnection : NSObject <BMComputeSourceServer> {
    BMAccessControlPolicy * _accessControlPolicy;
    BMProcess * _clientProcess;
    BMComputeSourceServer * _server;
}

@property (nonatomic, readonly) BMAccessControlPolicy *accessControlPolicy;
@property (nonatomic, readonly) BMProcess *clientProcess;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) BMComputeSourceServer *server;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)accessControlPolicy;
- (id)clientProcess;
- (id)description;
- (void)eventsPrunedWithStreamIdentifier:(id)arg1 reason:(unsigned long long)arg2;
- (id)initWithServer:(id)arg1 clientProcess:(id)arg2;
- (void)sendEventWithStreamIdentifier:(id)arg1 timestamp:(id)arg2 signpostID:(unsigned long long)arg3 eventData:(id)arg4;
- (id)server;

@end
