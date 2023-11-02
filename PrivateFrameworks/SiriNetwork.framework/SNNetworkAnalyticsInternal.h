
@interface SNNetworkAnalyticsInternal : NSObject {
    void debugPreparationSnapshotEvent;
    void debugReadySnapshotEvent;
    void debugSessionConnectionSnapthotEvent;
    void httpHeaderEvent;
    void isConnectionActive;
    void netId;
    void netIdAvailable;
    void netIdForRequestLink;
    void orchestratorRequestId;
    void peerConnectionFailedEvent;
    void preparationSnapshotEvent;
    void queue;
    void readySnapshotEvent;
    void sequenceNumber;
    void sessionConnectionFailedEvent;
    void sessionConnectionSnapthotEvent;
    void siriAnalyticsMessageStream;
}

+ (id)sharedNetworkAnalytics;

- (void).cxx_destruct;
- (bool)emitLogDebug;
- (bool)getIsConnectionActive;
- (id)getNetId;
- (id)getOrchestratorRequestId;
- (unsigned int)getSequenceNumber;
- (void)increaseSequenceNumber;
- (id)init;
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
- (void)setOrchestatorRequestId:(id)arg1;

@end
