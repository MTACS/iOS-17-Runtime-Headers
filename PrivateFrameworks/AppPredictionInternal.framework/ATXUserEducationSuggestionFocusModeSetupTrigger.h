
@interface ATXUserEducationSuggestionFocusModeSetupTrigger : NSObject {
    BMBiomeScheduler * _inferredModeScheduler;
    BPSSink * _inferredModeStreamSink;
    NSHashTable * _observers;
    NSObject<OS_dispatch_queue> * _queue;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (bool)modeHasPassedPastInferenceTest:(unsigned long long)arg1;
- (bool)modeIsEligibleForSetupPrediction:(unsigned long long)arg1;
- (void)processNewInferredModeEvent:(id)arg1;
- (void)registerObserver:(id)arg1;
- (void)resetUserDefaultsIfNecessaryForDNDSemanticType:(long long)arg1;
- (void)resetUserDefaultsIfNecessaryForMode:(unsigned long long)arg1;
- (void)unregisterObserver:(id)arg1;

@end
