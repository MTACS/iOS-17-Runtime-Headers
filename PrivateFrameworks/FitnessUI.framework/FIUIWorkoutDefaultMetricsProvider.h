
@interface FIUIWorkoutDefaultMetricsProvider : NSObject {
    long long  _activityMoveMode;
    FIUIWorkoutActivityType * _activityType;
    NSArray * _defaultEnabledMetrics;
    NSArray * _defaultSecondPlatterMetrics;
    long long  _metricsVersion;
    NSArray * _supportedMetrics;
    bool  _supportsElevationMetrics;
    bool  _supportsGroundElevationMetrics;
}

@property (nonatomic, readonly, copy) NSArray *defaultEnabledMetrics;
@property (nonatomic, readonly, copy) NSArray *defaultSecondPlatterMetrics;
@property (nonatomic, readonly) long long metricsVersion;
@property (nonatomic, readonly, copy) NSArray *supportedMetrics;

- (void).cxx_destruct;
- (id)_defaultEnabledMetricsForActivityType:(id)arg1 metricsVersion:(long long)arg2;
- (id)_defaultEnabledMetricsForSwimmingWithLocationType:(long long)arg1 metricsVersion:(long long)arg2;
- (id)_defaultEnabledSecondPlatterMetricsForActivityType:(id)arg1 metricsVersion:(long long)arg2;
- (id)_defaultGloryIndoorEnabledMetricsForActivityType:(unsigned long long)arg1;
- (id)_defaultGloryOutdoorEnabledMetricsForActivityType:(unsigned long long)arg1 supportsElevationMetrics:(bool)arg2;
- (id)_defaultOutdoorEnabledMetricsForActivityType:(unsigned long long)arg1 metricsVersion:(long long)arg2 supportsElevationMetrics:(bool)arg3;
- (id)_defaultPreGloryIndoorEnabledMetricsForActivityType:(unsigned long long)arg1;
- (id)_defaultPreGloryOutdoorEnabledMetricsForActivityType:(unsigned long long)arg1;
- (id)_indoorDefaultEnabledMetricsForActivityType:(unsigned long long)arg1 metricsVersion:(long long)arg2;
- (id)_machineProvidedMetricsForActivityType:(id)arg1;
- (id)_supportedMetricsForActivityType:(id)arg1 metricsVersion:(long long)arg2;
- (void)_updateSupportedMetrics;
- (id)appendMachineMetricsToMetrics:(id)arg1 maxNumMetrics:(long long)arg2 activityType:(id)arg3;
- (void)dealloc;
- (id)defaultEnabledMetrics;
- (id)defaultSecondPlatterMetrics;
- (id)initWithMetricsVersion:(long long)arg1 activityType:(id)arg2 activityMoveMode:(long long)arg3 deviceSupportsElevationMetrics:(bool)arg4 deviceSupportsGroundElevationMetrics:(bool)arg5;
- (bool)isMetricTypeSupported:(unsigned long long)arg1 isMachineWorkout:(bool)arg2 activityType:(id)arg3;
- (long long)metricsVersion;
- (id)removeUnsupportedFitnessJuniorMetricsFrom:(id)arg1;
- (id)supportedMetrics;
- (id)supportedMetricsWithIsMachineWorkout:(bool)arg1 activityType:(id)arg2;

@end
