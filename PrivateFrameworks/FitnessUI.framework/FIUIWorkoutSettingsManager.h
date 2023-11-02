
@interface FIUIWorkoutSettingsManager : NSObject {
    long long  _activityMoveMode;
    FIUIWorkoutDefaultMetricsProvider * _defaultMetricsProvider;
    NSMutableArray * _enabledMetrics;
    NPSDomainAccessor * _lazy_domainAccessor;
    NPSManager * _lazy_syncManager;
    NSMutableDictionary * _settingOverridesByMetric;
    NSMutableDictionary * _settingsByActivityType;
    FIUIWorkoutActivityType * _workoutActivityType;
}

@property (nonatomic, readonly) FIUIWorkoutDefaultMetricsProvider *defaultMetricsProvider;
@property (nonatomic, retain) NPSDomainAccessor *domainAccessor;
@property (nonatomic, retain) NPSManager *syncManager;
@property (nonatomic, readonly) FIUIWorkoutActivityType *workoutActivityType;

+ (void)obliterateUserConfiguredWorkoutMetrics;
+ (long long)readWorkoutMetricsActivityMoveMode;

- (void).cxx_destruct;
- (void)_clearOldMetricsIfNeeded;
- (bool)_enabledMetricsAreDefaultAfterPaceMigration:(id)arg1 workoutActivityType:(id)arg2;
- (bool)_hasUserMadeMetricChangesToWorkoutType:(id)arg1 enabledMetrics:(id)arg2 settingOverridesByMetric:(id)arg3 metricFormatVersion:(id)arg4;
- (void)_migratePaceViewSettingIfNeeded;
- (void)_readFromDomain;
- (bool)_useUserConfiguredWorkoutMetricsForMetricsActivityMoveMode:(long long)arg1 activityMoveMode:(long long)arg2;
- (void)_writeToDomainWithShouldUpdateVersion:(bool)arg1;
- (void)assignMetricType:(unsigned long long)arg1 toSlotIndex:(long long)arg2;
- (id)defaultMetricsProvider;
- (long long)disabledIndexForMetricType:(unsigned long long)arg1;
- (id)domainAccessor;
- (id)init;
- (id)initWithWorkoutActivityType:(id)arg1 activityMoveMode:(long long)arg2;
- (bool)isMetricEnabled:(unsigned long long)arg1;
- (void)moveMetricType:(unsigned long long)arg1 toEnabledIndex:(long long)arg2;
- (id)orderedDisabledMetrics;
- (id)orderedEnabledAndSupportedMetrics;
- (id)orderedEnabledMetrics;
- (id)orderedSupportedMetrics;
- (void)reloadMetrics;
- (void)setDomainAccessor:(id)arg1;
- (void)setEnabled:(bool)arg1 forMetricType:(unsigned long long)arg2 didChange:(bool*)arg3;
- (void)setSyncManager:(id)arg1;
- (id)supportedMetrics;
- (id)syncManager;
- (id)workoutActivityType;

@end
