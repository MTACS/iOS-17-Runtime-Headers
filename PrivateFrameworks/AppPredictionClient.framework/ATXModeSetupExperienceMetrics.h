
@interface ATXModeSetupExperienceMetrics : NSObject {
    NSString * _modeSemanticType;
    long long  _onboardingOutcome;
}

@property (nonatomic, copy) NSString *modeSemanticType;
@property (nonatomic) long long onboardingOutcome;

- (void).cxx_destruct;
- (id)coreAnalyticsDictionary;
- (id)description;
- (id)metricName;
- (id)modeSemanticType;
- (long long)onboardingOutcome;
- (id)outcomeToString:(long long)arg1;
- (void)sendToCoreAnalytics;
- (void)setModeSemanticType:(id)arg1;
- (void)setOnboardingOutcome:(long long)arg1;

@end
