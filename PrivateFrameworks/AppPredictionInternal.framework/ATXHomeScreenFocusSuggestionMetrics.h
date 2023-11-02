
@interface ATXHomeScreenFocusSuggestionMetrics : _ATXCoreAnalyticsMetric {
    NSString * _modeSemanticType;
    long long  _outcome;
}

@property (nonatomic, copy) NSString *modeSemanticType;
@property (nonatomic) long long outcome;

- (void).cxx_destruct;
- (unsigned long long)cappedForPrivacyWithValue:(long long)arg1;
- (id)coreAnalyticsDictionary;
- (id)description;
- (id)metricName;
- (id)modeSemanticType;
- (long long)outcome;
- (id)outcomeToString:(long long)arg1;
- (void)setModeSemanticType:(id)arg1;
- (void)setOutcome:(long long)arg1;

@end
