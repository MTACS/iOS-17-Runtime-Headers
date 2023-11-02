
@interface ATXNotificationSuggestionFeedbackHistoryQueryResult : NSObject {
    NSDate * _createdTimestamp;
    NSString * _feedbackKey;
    long long  _latestOutcome;
}

@property (nonatomic, retain) NSDate *createdTimestamp;
@property (nonatomic, retain) NSString *feedbackKey;
@property (nonatomic) long long latestOutcome;

- (void).cxx_destruct;
- (id)createdTimestamp;
- (id)feedbackKey;
- (id)init;
- (id)initWithFeedbackKey:(id)arg1 latestOutcome:(long long)arg2 createdTimestamp:(id)arg3;
- (long long)latestOutcome;
- (void)setCreatedTimestamp:(id)arg1;
- (void)setFeedbackKey:(id)arg1;
- (void)setLatestOutcome:(long long)arg1;

@end
