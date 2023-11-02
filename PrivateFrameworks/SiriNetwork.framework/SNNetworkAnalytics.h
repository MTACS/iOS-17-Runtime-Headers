
@interface SNNetworkAnalytics : NSObject {
    SNNetworkAnalyticsInternal * _underlyingNetworkAnalytics;
}

@property (nonatomic, retain) SNNetworkAnalyticsInternal *underlyingNetworkAnalytics;

+ (id)sharedSNNetworkAnalytics;

- (void).cxx_destruct;
- (id)_init;
- (id)getNetId;
- (id)getOrchestratorRequestId;
- (unsigned int)getSequenceNumber;
- (void)increaseSequenceNumber;
- (id)init;
- (bool)isConnectionActive;
- (bool)isNetIdAvailable;
- (void)logDebugNetworkConnectionStatePreparationSnapshotCaptured:(id)arg1;
- (void)logDebugNetworkConnectionStateReadySnapshotCaptured:(id)arg1;
- (void)logDebugSessionConnectionSnapshotCaptured:(id)arg1;
- (void)logNetworkConnectionStatePreparationSnapshotCaptured:(id)arg1;
- (void)logNetworkConnectionStateReadySnapshotCaptured:(id)arg1;
- (void)logPeerConnectionFailed:(id)arg1;
- (void)logRequestLinkBetweenOrchestratorAndNetworkComponent;
- (void)logSessionConnectionFailed:(id)arg1;
- (void)logSessionConnectionHttpHeaderCreated:(id)arg1;
- (void)logSessionConnectionSnapshotCaptured:(id)arg1;
- (void)reset;
- (void)resetNetId;
- (void)resetSequenceNumber;
- (void)setIsConnectionActive:(bool)arg1;
- (void)setNetId:(id)arg1;
- (void)setNetIdAvailable:(bool)arg1;
- (void)setOrchestratorRequestId:(id)arg1;
- (void)setUnderlyingNetworkAnalytics:(id)arg1;
- (id)underlyingNetworkAnalytics;

@end
