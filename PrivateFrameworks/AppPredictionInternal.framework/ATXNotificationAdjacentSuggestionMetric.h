
@interface ATXNotificationAdjacentSuggestionMetric : _ATXCoreAnalyticsMetric {
    NSString * _bundleId;
    bool  _isAddToMode;
    double  _suggestionCompletionTimestamp;
    NSString * _suggestionOutcome;
    NSString * _suggestionScope;
    NSString * _suggestionType;
    NSString * _targetMode;
    double  _timeToOutcome;
}

@property (nonatomic, retain) NSString *bundleId;
@property (nonatomic) bool isAddToMode;
@property (nonatomic) double suggestionCompletionTimestamp;
@property (nonatomic, retain) NSString *suggestionOutcome;
@property (nonatomic, retain) NSString *suggestionScope;
@property (nonatomic, retain) NSString *suggestionType;
@property (nonatomic, retain) NSString *targetMode;
@property (nonatomic) double timeToOutcome;

- (void).cxx_destruct;
- (id)bundleId;
- (id)coreAnalyticsDictionary;
- (bool)isAddToMode;
- (id)metricName;
- (void)setBundleId:(id)arg1;
- (void)setIsAddToMode:(bool)arg1;
- (void)setSuggestionCompletionTimestamp:(double)arg1;
- (void)setSuggestionOutcome:(id)arg1;
- (void)setSuggestionScope:(id)arg1;
- (void)setSuggestionType:(id)arg1;
- (void)setTargetMode:(id)arg1;
- (void)setTimeToOutcome:(double)arg1;
- (double)suggestionCompletionTimestamp;
- (id)suggestionOutcome;
- (id)suggestionScope;
- (id)suggestionType;
- (id)targetMode;
- (double)timeToOutcome;

@end
