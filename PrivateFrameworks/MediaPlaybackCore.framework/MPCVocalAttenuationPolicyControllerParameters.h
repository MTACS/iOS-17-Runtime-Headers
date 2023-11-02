
@interface MPCVocalAttenuationPolicyControllerParameters : NSObject {
    NSProcessInfo * _lowPowerModeMonitor;
    double  _renderingTimeLimit;
    ICEnvironmentMonitor * _thermalMonitor;
}

@property (nonatomic, retain) NSProcessInfo *lowPowerModeMonitor;
@property (nonatomic) double renderingTimeLimit;
@property (nonatomic, retain) ICEnvironmentMonitor *thermalMonitor;

- (void).cxx_destruct;
- (id)lowPowerModeMonitor;
- (double)renderingTimeLimit;
- (void)setLowPowerModeMonitor:(id)arg1;
- (void)setRenderingTimeLimit:(double)arg1;
- (void)setThermalMonitor:(id)arg1;
- (id)thermalMonitor;

@end
