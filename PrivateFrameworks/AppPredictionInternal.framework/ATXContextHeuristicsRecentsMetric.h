
@interface ATXContextHeuristicsRecentsMetric : _ATXCoreAnalyticsMetric {
    unsigned long long  _numEngaged;
    unsigned long long  _numSearched;
    unsigned long long  _recentAge;
    NSString * _recentType;
    NSString * _trialDeploymentId;
    NSString * _trialExperimentId;
    NSString * _trialTreatmentId;
}

@property (nonatomic) unsigned long long numEngaged;
@property (nonatomic) unsigned long long numSearched;
@property (nonatomic) unsigned long long recentAge;
@property (nonatomic, copy) NSString *recentType;
@property (nonatomic, copy) NSString *trialDeploymentId;
@property (nonatomic, copy) NSString *trialExperimentId;
@property (nonatomic, copy) NSString *trialTreatmentId;

- (void).cxx_destruct;
- (id)coreAnalyticsDictionary;
- (id)metricName;
- (unsigned long long)numEngaged;
- (unsigned long long)numSearched;
- (unsigned long long)recentAge;
- (id)recentType;
- (void)setNumEngaged:(unsigned long long)arg1;
- (void)setNumSearched:(unsigned long long)arg1;
- (void)setRecentAge:(unsigned long long)arg1;
- (void)setRecentType:(id)arg1;
- (void)setTrialDeploymentId:(id)arg1;
- (void)setTrialExperimentId:(id)arg1;
- (void)setTrialTreatmentId:(id)arg1;
- (id)trialDeploymentId;
- (id)trialExperimentId;
- (id)trialTreatmentId;

@end
