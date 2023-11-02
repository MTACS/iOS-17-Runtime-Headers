
@interface ATXProactiveSuggestionUIFeedbackResult : ATXProactiveSuggestionFeedbackResult <NSSecureCoding> {
    NSArray * _engagedSuggestions;
    long long  _engagementType;
    NSArray * _rejectedSuggestions;
    ATXProactiveSuggestionUIFeedbackSession * _session;
    NSArray * _shownSuggestions;
}

@property (nonatomic, readonly) NSArray *engagedSuggestions;
@property (nonatomic, readonly) long long engagementType;
@property (nonatomic, readonly) NSArray *rejectedSuggestions;
@property (nonatomic, readonly) ATXProactiveSuggestionUIFeedbackSession *session;
@property (nonatomic, readonly) NSArray *shownSuggestions;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)engagedSuggestions;
- (long long)engagementType;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithEngagementType:(long long)arg1 shownSuggestions:(id)arg2 engagedSuggestions:(id)arg3 rejectedSuggestions:(id)arg4 session:(id)arg5 consumerSubType:(unsigned char)arg6 clientCacheUpdate:(id)arg7 uiCacheUpdate:(id)arg8 context:(id)arg9;
- (id)initWithShownSuggestions:(id)arg1 engagedSuggestions:(id)arg2 rejectedSuggestions:(id)arg3 session:(id)arg4 consumerSubType:(unsigned char)arg5 clientCacheUpdate:(id)arg6 uiCacheUpdate:(id)arg7 context:(id)arg8;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToATXProactiveSuggestionUIFeedbackResult:(id)arg1;
- (id)rejectedSuggestions;
- (id)session;
- (id)shownSuggestions;
- (id)suggestionExecutableObjectListFromSuggestions:(id)arg1;
- (long long)uiEngagementTypeFromShownSuggestions:(id)arg1 engagedSuggestions:(id)arg2 rejectedSuggestions:(id)arg3;

@end
