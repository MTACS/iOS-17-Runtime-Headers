
@interface ATXUserEducationSuggestionFeedbackMetric : _ATXCoreAnalyticsMetric {
    ATXUserEducationSuggestionFeedback * _feedback;
}

@property (nonatomic, readonly) ATXUserEducationSuggestionFeedback *feedback;

- (void).cxx_destruct;
- (id)coreAnalyticsDictionary;
- (id)feedback;
- (id)initWithFeedback:(id)arg1;

@end
