
@interface PRSharingSession : NSObject <PRBeaconDelegate, PRProximityEstimatorDelegate> {
    PRProximityEstimator * _btProxEstimator;
    <PRSharingSessionDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    NSObject<OS_os_log> * _logger;
    PRBeacon * _nearbyDaemonSession;
    bool  _needToRestart;
    id /* block */  _reportWatchdog;
    bool  _scoresReported;
    PRSharingChoice * _sharingChoiceEstimator;
    NSMutableDictionary * _trackedBTPeers;
    NSMutableDictionary * _trackedBTPeersDevice;
}

@property (readonly, copy) NSString *debugDescription;
@property <PRSharingSessionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)addRssiSample:(double)arg1 channel:(unsigned int)arg2 forPeer:(id)arg3 peerDeviceModel:(id)arg4 withError:(id*)arg5;
- (void)beacon:(id)arg1 didChangeState:(unsigned long long)arg2;
- (void)beacon:(id)arg1 didFailWithError:(id)arg2;
- (void)beacon:(id)arg1 didOutputRangeResults:(id)arg2;
- (id)delegate;
- (void)didFailWithError:(id)arg1;
- (void)estimator:(id)arg1 didEstimateProximity:(long long)arg2 toPeer:(id)arg3;
- (id)init;
- (id)initWithDelegate:(id)arg1 delegateQueue:(id)arg2;
- (void)invokeDelegateBlock:(id /* block */)arg1;
- (void)logScores:(id)arg1;
- (void)onNewSharingChoiceScores:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)startInitiating;
- (void)startWatchDogWithDuration:(long long)arg1;
- (void)stopInitiating;
- (void)stopProx;
- (bool)trackNewBTPeer:(id)arg1 withDviceModel:(id)arg2 error:(id*)arg3;
- (void)watchDogTimedOut;

@end
