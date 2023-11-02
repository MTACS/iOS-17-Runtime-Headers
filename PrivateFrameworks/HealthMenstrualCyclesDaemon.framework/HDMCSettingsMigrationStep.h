
@interface HDMCSettingsMigrationStep : NSObject {
    id /* block */  _block;
    long long  _version;
}

@property (nonatomic, readonly) long long version;

+ (id)dawnMoveAlgorithmicProjectionsToFeatureSettings;
+ (id)dawnMoveHiddenCycleChartRowsSettings;
+ (id)dawnMoveHiddenLoggingRowsSettings;
+ (id)dawnMoveOnboardingTileDismissalDateToKeyValueStorage;
+ (id)dawnMoveToDeviationDetectionFeatureSettings;

- (void).cxx_destruct;
- (id)description;
- (bool)performStepWithUserDefaults:(id)arg1 profile:(id)arg2 error:(id*)arg3;
- (long long)version;

@end
