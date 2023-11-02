
@interface GKOnboardingMetricsHandler : NSObject {
    double  _analyticsStartTime;
    NSString * _refApp;
    GKReporter * _reporter;
}

@property (nonatomic) double analyticsStartTime;
@property (nonatomic, copy) NSString *refApp;
@property (nonatomic, retain) GKReporter *reporter;

- (void).cxx_destruct;
- (double)analyticsStartTime;
- (id)initWithReporter:(id)arg1 refApp:(id)arg2;
- (void)onboardingDidBegin;
- (void)onboardingDidEnd;
- (id)refApp;
- (void)reportEventForOnboardingFlowAction:(unsigned long long)arg1;
- (id)reporter;
- (void)setAnalyticsStartTime:(double)arg1;
- (void)setRefApp:(id)arg1;
- (void)setReporter:(id)arg1;

@end
