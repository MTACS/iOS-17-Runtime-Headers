
@interface ATXMicrolocationRecordingTrigger : NSObject {
    _PASSimpleCoalescingTimer * _coalescingTimerForHistoricalLabelDonations;
    _PASSimpleCoalescingTimer * _coalescingTimerForRecordingScans;
    BMBiomeScheduler * _inferredModeScheduler;
    BMInferredModeStream * _inferredModeStream;
    BPSSink * _inferredModeStreamSink;
    CLLocationManager * _locationManager;
    NSObject<OS_dispatch_queue> * _queue;
    double  _timeBuffer;
    BMBiomeScheduler * _userComputedModeScheduler;
    BPSSink * _userComputedModeStreamSink;
    BMUserFocusComputedModeStream * _userFocusComputedModeStream;
}

- (void).cxx_destruct;
- (void)_donateTruthLabelForTriggerUUID:(id)arg1 truthLabel:(id)arg2;
- (bool)_isInferredModeEventEligibleForHistoricalLabelDonations:(id)arg1;
- (bool)_isInferredModeEventEligibleForMicrolocationRecording:(id)arg1;
- (bool)_isUserFocusComputedModeEventEligibleForHistoricalLabelDonations:(id)arg1;
- (bool)_isUserFocusComputedModeEventEligibleForMicrolocationRecording:(id)arg1;
- (id)_schedulerForStreamName:(id)arg1;
- (void)_subscribeToModeChanges;
- (void)_subscribeToStreamWithPublisher:(id)arg1 scheduler:(id)arg2 sink:(id)arg3;
- (void)_triggerHistoricalLabelDonationAtModeEndWithStoreEvent:(id)arg1;
- (void)_triggerMicroLocationHistoricalLabelDonationWithStartDate:(id)arg1 endDate:(id)arg2;
- (id)_triggerMicroLocationRecordingScan;
- (void)_triggerMicrolocationRecordingAtModeStartWithStoreEvent:(id)arg1;
- (id)_truthLabelForMode:(unsigned long long)arg1;
- (void)_userDidEnterModeOrModeWasPredicted;
- (void)_userDidExitModeOrModeWasNoLongerPredicted;
- (void)dealloc;
- (id)initWithInferredModeStream:(id)arg1 locationManager:(id)arg2;

@end
