
@interface ATXModeEntityModelTrainer : NSObject {
    NSString * _cacheBasePath;
    ATXGlobalAppModeAffinityModel * _globalAppModeAffinityModel;
    ATXGlobalInterruptingAppModel * _globalInterruptingAppModel;
    ATXGlobalWidgetPopularityModel * _globalWidgetPopularityModel;
    ATXModeEntityStore * _modeEntityStore;
}

+ (id)eventProviderForMode:(unsigned long long)arg1;
+ (id)eventProviderForScorableTime:(id)arg1;
+ (double)maxScoreWithThresholdGivenModeEntityScores:(id)arg1;
+ (double)scoreThresholdGivenModeEntityScores:(id)arg1 modeEntityTypeIdentifier:(id)arg2;
+ (id)thresholdedModeEntityScores:(id)arg1 modeEntityTypeIdentifier:(id)arg2 threshold:(double)arg3;

- (void).cxx_destruct;
- (id)init;
- (id)initWithCacheBasePath:(id)arg1 modeEntityStore:(id)arg2 globalAppModeAffinityModel:(id)arg3 globalInterruptingAppModel:(id)arg4 globalWidgetPopularityModel:(id)arg5;
- (id)pathForModeEntityTypeIdentifier:(id)arg1 modeIdentifier:(id)arg2 modeConfigurationType:(long long)arg3;
- (bool)persistModeEntityScores:(id)arg1 modeEntityTypeIdentifier:(id)arg2 modeIdentifier:(id)arg3 modeConfigurationType:(long long)arg4;
- (bool)shouldDeferTrainingDueToRestoredBackup;
- (bool)shouldDeferTrainingDueToUpgrade;
- (void)train;
- (void)trainWithShouldDeferTrainingOnBackupRestoreOrUpgrade:(bool)arg1;
- (void)trainWithXPCActivity:(id)arg1;
- (void)trainWithXPCActivity:(id)arg1 shouldSkipRetrainingIfTrainedRecently:(bool)arg2 shouldDeferTrainingOnRestoreOrUpgrade:(bool)arg3;

@end
