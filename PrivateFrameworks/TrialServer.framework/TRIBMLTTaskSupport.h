
@interface TRIBMLTTaskSupport : NSObject <TRIMetricsProviding> {
    TRIBMLTDeployment * _bmltDeployment;
    _PASLock * _lock;
}

@property (nonatomic, readonly) TRIBMLTDeployment *bmltDeployment;

- (void).cxx_destruct;
- (void)addDimension:(id)arg1;
- (void)addMetric:(id)arg1;
- (id)bmltDeployment;
- (id)dimensions;
- (id)initWithBMLTDeployment:(id)arg1;
- (void)mergeTelemetry:(id)arg1;
- (id)metrics;
- (id)tags;
- (id)trialSystemTelemetry;

@end
