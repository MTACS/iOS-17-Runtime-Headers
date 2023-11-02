
@interface TRIRolloutTaskSupport : NSObject <TRIMetricsProviding> {
    _PASLock * _lock;
    TRIRolloutDeployment * _rolloutDeployment;
}

@property (nonatomic, readonly) TRIRolloutDeployment *rolloutDeployment;

- (void).cxx_destruct;
- (void)addDimension:(id)arg1;
- (void)addMetric:(id)arg1;
- (id)dimensions;
- (id)initWithRolloutDeployment:(id)arg1;
- (void)mergeTelemetry:(id)arg1;
- (id)metrics;
- (id)rolloutDeployment;
- (id)tags;
- (id)trialSystemTelemetry;

@end
