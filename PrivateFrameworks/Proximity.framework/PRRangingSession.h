
@interface PRRangingSession : NSObject <PRAidedRangingClientProtocol> {
    NSXPCConnection * _connection;
    <PRRangingSessionDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    bool  _isReady;
    PRPeer * _localPeer;
    NSObject<OS_os_log> * _logger;
    PRPeer * _rangedPeer;
    PRRangingDevice * _rangingDevice;
    NSMutableSet * _sessionParticipants;
    bool  _valid;
}

@property (readonly, copy) NSString *debugDescription;
@property <PRRangingSessionDelegate> *delegate;
@property (retain) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property bool isReady;
@property (readonly, copy) PRPeer *localPeer;
@property (retain) PRPeer *rangedPeer;
@property (retain) NSMutableSet *sessionParticipants;
@property (readonly) Class superclass;
@property (getter=isValid) bool valid;

+ (unsigned long long)computeLocalDeviceIndex:(id)arg1 sessionParticipants:(id)arg2;

- (void).cxx_destruct;
- (void)connectToDaemon;
- (id)delegate;
- (id)delegateQueue;
- (void)didFailWithError:(id)arg1;
- (void)didReceiveNewSolutions:(id)arg1;
- (void)handleInterruption;
- (void)handleInvalidation;
- (id)init;
- (void)invalidate;
- (void)invokeDelegateBlock:(id /* block */)arg1;
- (bool)isReady;
- (bool)isValid;
- (id)localPeer;
- (void)pushCollaborationData:(id)arg1;
- (id)rangedPeer;
- (id)rangingConfigurationWithDeviceIndex:(unsigned long long)arg1;
- (void)rangingRequestDidUpdateStatus:(unsigned long long)arg1;
- (void)rangingServiceDidUpdateState:(unsigned long long)arg1 cause:(long long)arg2;
- (id)remoteObject;
- (void)requestInitialCollaborationDataWithCompletionHandler:(id /* block */)arg1;
- (void)sendDataToPeers:(id)arg1;
- (id)sessionParticipants;
- (void)setDelegate:(id)arg1;
- (void)setDelegateQueue:(id)arg1;
- (void)setIsReady:(bool)arg1;
- (void)setRangedPeer:(id)arg1;
- (void)setSessionParticipants:(id)arg1;
- (void)setValid:(bool)arg1;
- (void)startRangingWithPeer:(id)arg1;
- (void)stopRangingWithPeer:(id)arg1;

@end
