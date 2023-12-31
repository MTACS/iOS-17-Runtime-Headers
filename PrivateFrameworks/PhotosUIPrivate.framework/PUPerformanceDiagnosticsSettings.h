
@interface PUPerformanceDiagnosticsSettings : PXSettings {
    double  _scrollTestCPUSustainDuration;
    double  _scrollTestCPUWarmupDuration;
    double  _scrollTestRampUpDuration;
    bool  _shouldTracePerformance;
}

@property (nonatomic) double scrollTestCPUSustainDuration;
@property (nonatomic) double scrollTestCPUWarmupDuration;
@property (nonatomic) double scrollTestRampUpDuration;
@property (nonatomic) bool shouldTracePerformance;

+ (id)settingsControllerModule;
+ (id)sharedInstance;

- (id)parentSettings;
- (double)scrollTestCPUSustainDuration;
- (double)scrollTestCPUWarmupDuration;
- (double)scrollTestRampUpDuration;
- (void)setDefaultValues;
- (void)setScrollTestCPUSustainDuration:(double)arg1;
- (void)setScrollTestCPUWarmupDuration:(double)arg1;
- (void)setScrollTestRampUpDuration:(double)arg1;
- (void)setShouldTracePerformance:(bool)arg1;
- (bool)shouldTracePerformance;

@end
