
@interface PRGenericRangingSession : PRRangingDevice <PRRangingClientProtocol> {
    NSXPCConnection * _connection;
    <PRGenericRangingSessionDelegate> * _delegate;
    NSObject<OS_os_log> * _logger;
    NSObject<OS_dispatch_queue> * _sessionQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PRGenericRangingSessionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)configureForP2PRanging:(id)arg1 options:(id)arg2;
- (void)connectToDaemon;
- (id)delegate;
- (void)didFailWithError:(id)arg1;
- (void)didReceiveNewSolutions:(id)arg1;
- (void)handleInterruption;
- (void)handleInvalidation;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2;
- (void)invalidate;
- (void)rangingRequestDidUpdateStatus:(unsigned long long)arg1;
- (void)rangingServiceDidUpdateState:(unsigned long long)arg1 cause:(long long)arg2;
- (void)remoteDevice:(id)arg1 didChangeState:(long long)arg2;
- (id)remoteObject;
- (void)setDelegate:(id)arg1;
- (bool)startP2PRanging:(id)arg1 error:(id*)arg2;
- (bool)stopP2PRanging:(id)arg1 error:(id*)arg2;
- (id)synchronousRemoteObject;

@end
