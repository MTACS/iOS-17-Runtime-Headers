
@interface TRIExperimentBaseTask : TRIBaseTask <TRIMetricsProviding> {
    TRIExperimentDeployment * _experiment;
    _PASLock * _lock;
}

@property (nonatomic, readonly) TRIExperimentDeployment *experiment;

- (void).cxx_destruct;
- (void)addDimension:(id)arg1;
- (void)addMetric:(id)arg1;
- (id)containerForFirstNamespaceInExperimentWithContext:(id)arg1;
- (id)description;
- (id)dimensions;
- (id)experiment;
- (unsigned long long)hash;
- (id)initWithExperiment:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)logAsRollout:(bool)arg1;
- (void)mergeTelemetry:(id)arg1;
- (id)metrics;
- (id)nextTasksForRunStatus:(int)arg1;
- (id)tags;
- (id)trialSystemTelemetry;

@end
