
@interface ATXModeClassifier : NSObject <ATXModeClassifierClientModelDelegate> {
    ATXModeAnchorModelSuggestionServer * _anchorModelSuggestionServer;
    ATXModeHeuristicClassifier * _heuristicModeClassifier;
    BMInferredModeStream * _inferredModeStream;
    CLLocationManager * _locationManager;
    _PASQueueLock * _lock;
    ATXMicrolocationRecordingTrigger * _microlocationRecordingTrigger;
    _PASSimpleCoalescingTimer * _modeExpirationTimer;
    ATXConfiguredModeService * _modeService;
    NSObject<OS_dispatch_queue> * _queue;
}

+ (void)provideModeClassifierWhenReadyWithDuetHelper:(id)arg1 block:(id /* block */)arg2;
+ (id)updateModeWithUUID:(id)arg1 userModeName:(id)arg2 modeType:(unsigned long long)arg3 modeOrigin:(long long)arg4 originAnchorType:(id)arg5 originBundleId:(id)arg6 uiLocation:(unsigned long long)arg7 confidenceScore:(double)arg8 serializedTriggers:(id)arg9 allowsSmartEntry:(bool)arg10 shouldSuggestTriggers:(bool)arg11 currentMode:(id)arg12 stream:(id)arg13;

- (void).cxx_destruct;
- (void)_expireMode;
- (bool)_isModeType:(unsigned long long)arg1 uuid:(id)arg2 sameAsModeFromEvent:(id)arg3;
- (void)_setUpModeExpirationTimerIfNeededWithModeOrigin:(long long)arg1;
- (bool)_shouldUpdateMode:(long long)arg1 currentModeScore:(id)arg2 newModeOrigin:(long long)arg3 newModeScore:(id)arg4;
- (void)_updateWithGuardedData:(id)arg1 newModeUUID:(id)arg2 userModeName:(id)arg3 modeType:(unsigned long long)arg4 modeOrigin:(long long)arg5 originBundleId:(id)arg6 originAnchorType:(id)arg7 uiLocation:(unsigned long long)arg8 confidenceScore:(double)arg9 serializedTriggers:(id)arg10 allowsSmartEntry:(bool)arg11 shouldSuggestTriggers:(bool)arg12;
- (void)_updateWithNewModeUUID:(id)arg1 userModeName:(id)arg2 modeType:(unsigned long long)arg3 modeOrigin:(long long)arg4 originBundleId:(id)arg5 originAnchorType:(id)arg6 uiLocation:(unsigned long long)arg7 confidenceScore:(double)arg8 serializedTriggers:(id)arg9 allowsSmartEntry:(bool)arg10 shouldSuggestTriggers:(bool)arg11;
- (void)_updateWithNewModeUUIDIfNeeded:(id)arg1 userModeName:(id)arg2 modeType:(unsigned long long)arg3 modeOrigin:(long long)arg4 originBundleId:(id)arg5 originAnchorType:(id)arg6 confidenceScore:(double)arg7 serializedTriggers:(id)arg8;
- (bool)allowSmartEntryWithModeUUID:(id)arg1;
- (void)clientModel:(id)arg1 didUpdatePredictionWithUUID:(id)arg2 userModeName:(id)arg3 modeType:(unsigned long long)arg4 confidenceScore:(double)arg5 modeOrigin:(long long)arg6 originBundleId:(id)arg7 originAnchorType:(id)arg8 serializedTriggers:(id)arg9;
- (id)currentMode;
- (id)init;
- (id)initWithDuetHelper:(id)arg1;

@end
