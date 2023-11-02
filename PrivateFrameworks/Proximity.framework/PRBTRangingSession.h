
@interface PRBTRangingSession : PRRangingDevice <PRBTRangingClientProtocol> {
    NSXPCConnection * _connection;
    <PRBTRangingSessionDelegate> * _delegate;
    NSObject<OS_os_log> * _logger;
    NSObject<OS_dispatch_queue> * _sessionQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PRBTRangingSessionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)connectToDaemon;
- (id)delegate;
- (void)didConnectDevice:(id)arg1 error:(id)arg2;
- (void)didFailWithError:(id)arg1;
- (void)didFetchTxPower:(id)arg1 fromDevice:(id)arg2 withError:(id)arg3;
- (void)didReceiveNewBTRSSI:(id)arg1;
- (void)didStartRangingOnDevice:(id)arg1 withError:(id)arg2;
- (void)didStopOwnerRangingOnDevice:(id)arg1 withError:(id)arg2;
- (void)fetchTxPower:(id)arg1 isUT:(id)arg2;
- (void)handleInterruption;
- (void)handleInvalidation;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2;
- (void)invalidate;
- (id)remoteObject;
- (void)setDelegate:(id)arg1;
- (void)startOwnerRanging:(id)arg1;
- (void)startUTRanging:(id)arg1;
- (void)stopOwnerRanging:(id)arg1;
- (void)stopUTRanging:(id)arg1;
- (id)synchronousRemoteObject;

@end
