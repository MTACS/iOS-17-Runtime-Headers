
@interface CPAnalyticsTrialLoggingDestination : NSObject <CPAnalyticsDestination> {
    bool  _forceEnabledForTesting;
    NSSet * _metricEvents;
    TRIClient * _trialClient;
    NSString * _trialExperimentId;
    NSString * _trialNamespace;
    int  _trialProjectId;
    NSString * _trialTreatmentId;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool disabled;
@property (nonatomic, readonly) bool forceEnabledForTesting;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSSet *metricEvents;
@property (readonly) Class superclass;
@property (nonatomic, retain) TRIClient *trialClient;
@property (nonatomic, retain) NSString *trialExperimentId;
@property (nonatomic, readonly) NSString *trialNamespace;
@property (nonatomic, readonly) int trialProjectId;
@property (nonatomic, retain) NSString *trialTreatmentId;

- (void).cxx_destruct;
- (bool)disabled;
- (bool)forceEnabledForTesting;
- (id)initWithConfig:(id)arg1 cpAnalyticsInstance:(id)arg2;
- (void)logTrialCounterMetricWithCPAnalyticsEvent:(id)arg1;
- (id)metricEvents;
- (void)processEvent:(id)arg1;
- (void)setTrialClient:(id)arg1;
- (void)setTrialExperimentId:(id)arg1;
- (void)setTrialTreatmentId:(id)arg1;
- (id)trialClient;
- (id)trialExperimentId;
- (id)trialNamespace;
- (int)trialProjectId;
- (id)trialTreatmentId;
- (void)updateWithConfig:(id)arg1;

@end
