
@interface ATXActivitySuggestionsFeedbackProcessor : NSObject {
    ATXActivitySuggestionsFeedbackHistogramHelper * _feedbackHistogramHelper;
    ATXActivitySuggestionFeedbackStream * _feedbackStream;
}

+ (id)queue;

- (void).cxx_destruct;
- (id)_activitySuggestionsFeedbackBookmark;
- (id)init;
- (id)initWithFeedbackStream:(id)arg1 feedbackHistogramHelper:(id)arg2;
- (void)processFeedbackWithXPCActivity:(id)arg1;

@end
