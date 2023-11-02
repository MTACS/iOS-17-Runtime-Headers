
@interface ATXProactiveSuggestionSingleSuggestionFeedbackResult : ATXProactiveSuggestionFeedbackResult {
    long long  _engagementType;
    ATXProactiveSuggestion * _suggestion;
}

@property (nonatomic, readonly) long long engagementType;
@property (nonatomic, readonly) ATXProactiveSuggestion *suggestion;

- (void).cxx_destruct;
- (long long)engagementType;
- (id)initWithEngagementType:(long long)arg1 suggestion:(id)arg2 consumerSubType:(unsigned char)arg3 clientCacheUpdate:(id)arg4 uiCacheUpdate:(id)arg5 context:(id)arg6;
- (id)suggestion;

@end
