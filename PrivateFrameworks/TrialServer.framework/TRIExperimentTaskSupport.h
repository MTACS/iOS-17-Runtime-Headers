
@interface TRIExperimentTaskSupport : NSObject <TRIMetricsProviding> {
    TRIExperimentDeployment * _experimentDeployment;
    _PASLock * _lock;
}

@property (nonatomic, readonly) TRIExperimentDeployment *experimentDeployment;

- (void).cxx_destruct;
- (void)addDimension:(id)arg1;
- (void)addMetric:(id)arg1;
- (id)dimensions;
- (id)experimentDeployment;
- (id)initWithExperimentDeployment:(id)arg1;
- (void)mergeTelemetry:(id)arg1;
- (id)metrics;
- (void)setIdentifyTelemetryAsV1Rollout:(bool)arg1;
- (id)tags;
- (id)trialSystemTelemetry;

@end
