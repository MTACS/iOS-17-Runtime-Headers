
@interface ATXModeSetupPredictionTrainer : NSObject {
    NSString * _cacheBasePath;
    bool  _modeIsEligibleForSetupPrediction;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithCacheBasePath:(id)arg1;
- (bool)modeIsCurrentlyCreated:(unsigned long long)arg1;
- (bool)modeIsEligibleForSetupPrediction:(unsigned long long)arg1;
- (id)pathForModeEntityTypeIdentifier:(id)arg1 modeIdentifier:(id)arg2;
- (id)pathForModeSetupPredictionCacheWithDirectory:(id)arg1;
- (void)persistPredictionScores:(id)arg1;
- (void)train;
- (bool)trainSetupPredictionIfModeAffinityWasTrainedRecentlyForMode:(unsigned long long)arg1;
- (void)trainWithXPCActivity:(id)arg1;
- (void)trainWithXPCActivity:(id)arg1 shouldSkipRetrainingIfTrainedRecently:(bool)arg2 shouldSkipEligiblilityCheckForSetupPrediction:(bool)arg3;

@end
