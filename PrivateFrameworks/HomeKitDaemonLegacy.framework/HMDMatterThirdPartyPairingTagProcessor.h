
@interface HMDMatterThirdPartyPairingTagProcessor : HMMLogEventTagProcessor {
    HMDMatterThirdPartyPairingLogEvent * _logEvent;
    long long  _startTime;
    HMMStateTracker * _stateTracker;
}

@property (nonatomic, readonly) HMDMatterThirdPartyPairingLogEvent *logEvent;
@property (nonatomic) long long startTime;
@property (nonatomic, retain) HMMStateTracker *stateTracker;

- (void).cxx_destruct;
- (void)closeSessionWithEvent:(id)arg1;
- (id)initWithSubmitter:(id)arg1;
- (id)logEvent;
- (void)processAccessoryInfoEvent:(id)arg1;
- (void)processAccessoryTransport:(id)arg1;
- (void)processCASESanityCheckEvent:(id)arg1;
- (void)processCredentialsToClientEvent:(id)arg1;
- (void)processFirmwareVersionEvent:(id)arg1;
- (void)processLongestPairingState:(id)arg1;
- (void)processPairingErrorCancelledEvent:(id)arg1;
- (void)processPairingErrorEvent:(id)arg1;
- (void)processPairingEventWindowOpenedSetupDuration:(id)arg1;
- (void)processPairingStartEvent:(id)arg1;
- (void)processPairingSuccessEvent:(id)arg1;
- (void)processStateChange:(id)arg1;
- (void)processThreadScanResultsEvent:(id)arg1;
- (void)processThreadSetupDuration:(id)arg1;
- (void)processWiFiScanResultsEvent:(id)arg1;
- (void)setLogEventCloseReason:(unsigned long long)arg1;
- (void)setStartTime:(long long)arg1;
- (void)setStateTracker:(id)arg1;
- (long long)startTime;
- (id)stateTracker;
- (id)tagProcessingBlocks;

@end
