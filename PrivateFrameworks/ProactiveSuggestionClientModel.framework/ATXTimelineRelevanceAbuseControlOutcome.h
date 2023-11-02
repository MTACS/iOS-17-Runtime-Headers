
@interface ATXTimelineRelevanceAbuseControlOutcome : NSObject {
    long long  _abuseControlOutcome;
    ATXInfoSuggestion * _suggestion;
    NSString * _suggestionId;
    double  _timestamp;
}

@property (nonatomic, readonly) long long abuseControlOutcome;
@property (nonatomic, readonly) ATXInfoSuggestion *suggestion;
@property (nonatomic, readonly) NSString *suggestionId;
@property (nonatomic, readonly) double timestamp;

+ (id)descriptionForOutcome:(long long)arg1;
+ (id)outcomeWithSuggestion:(id)arg1 timestamp:(double)arg2 abuseControlOutcome:(long long)arg3;
+ (id)outcomeWithSuggestionId:(id)arg1 timestamp:(double)arg2 abuseControlOutcome:(long long)arg3;

- (void).cxx_destruct;
- (long long)abuseControlOutcome;
- (id)init;
- (id)initWithSuggestion:(id)arg1 suggestionId:(id)arg2 timestamp:(double)arg3 abuseControlOutcome:(long long)arg4;
- (id)initWithSuggestion:(id)arg1 timestamp:(double)arg2 abuseControlOutcome:(long long)arg3;
- (id)suggestion;
- (id)suggestionId;
- (double)timestamp;

@end
