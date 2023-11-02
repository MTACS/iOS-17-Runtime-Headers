
@interface ATXProactiveSuggestionWidgetRotationFeedbackResult : ATXProactiveSuggestionFeedbackResult {
    long long  _engagementType;
    ATXProactiveSuggestion * _rotationSuggestion;
}

@property (nonatomic, readonly) long long engagementType;
@property (nonatomic, readonly) ATXProactiveSuggestion *rotationSuggestion;

- (void).cxx_destruct;
- (long long)engagementType;
- (id)initWithEngagementType:(long long)arg1 rotationSuggestion:(id)arg2 consumerSubType:(unsigned char)arg3 clientCacheUpdate:(id)arg4 uiCacheUpdate:(id)arg5 context:(id)arg6;
- (id)rotationSuggestion;

@end
