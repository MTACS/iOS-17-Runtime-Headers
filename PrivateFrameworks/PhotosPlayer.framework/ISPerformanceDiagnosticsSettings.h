
@interface ISPerformanceDiagnosticsSettings : ISSettings {
    bool  _shouldTracePerformance;
}

@property (nonatomic) bool shouldTracePerformance;

+ (id)settingsControllerModule;
+ (id)sharedInstance;

- (void)setDefaultValues;
- (void)setShouldTracePerformance:(bool)arg1;
- (bool)shouldTracePerformance;

@end
