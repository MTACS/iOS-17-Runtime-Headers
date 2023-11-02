
@interface ATXProactiveSuggestionWidgetRotationFeedbackSession : NSObject <NSSecureCoding> {
    NSDate * _dwellStartDate;
    NSMutableArray * _engagementHistory;
    long long  _engagementType;
    double  _longestDwell;
    ATXProactiveSuggestionWidgetRotationFeedbackSessionMetadata * _metadata;
    NSDate * _sessionEndDate;
    NSDate * _sessionStartDate;
    ATXSuggestionLayout * _systemSuggestSuggestionLayout;
}

@property (nonatomic, readonly) NSDate *dwellStartDate;
@property (nonatomic, readonly) NSMutableArray *engagementHistory;
@property (nonatomic, readonly) long long engagementType;
@property (nonatomic, readonly) double longestDwell;
@property (nonatomic, readonly) ATXProactiveSuggestionWidgetRotationFeedbackSessionMetadata *metadata;
@property (nonatomic, readonly) NSDate *sessionEndDate;
@property (nonatomic, readonly) NSDate *sessionStartDate;
@property (nonatomic, readonly) ATXSuggestionLayout *systemSuggestSuggestionLayout;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)checkAndReportDecodingFailureIfNeededForNSInteger:(long long)arg1 key:(id)arg2 coder:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5;
- (bool)checkAndReportDecodingFailureIfNeededFordouble:(double)arg1 key:(id)arg2 coder:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5;
- (id)description;
- (id)dwellStartDate;
- (void)encodeWithCoder:(id)arg1;
- (id)engagementHistory;
- (long long)engagementType;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithEngagementType:(long long)arg1 metadata:(id)arg2 engagementHistory:(id)arg3 systemSuggestSuggestionLayout:(id)arg4 sessionStartDate:(id)arg5 sessionEndDate:(id)arg6 dwellStartDate:(id)arg7 longestDwell:(double)arg8;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToATXProactiveSuggestionWidgetRotationFeedbackSession:(id)arg1;
- (double)longestDwell;
- (void)markRotationSessionEndedAtDate:(id)arg1 wasUserScroll:(bool)arg2;
- (void)markRotationSessionStartedAtDate:(id)arg1;
- (void)markStackHiddenAtDate:(id)arg1;
- (void)markStackShownAtDate:(id)arg1;
- (void)markStackTapped;
- (id)metadata;
- (id)sessionEndDate;
- (id)sessionStartDate;
- (id)systemSuggestSuggestionLayout;
- (void)tryUpdateStackRotationEngagementType:(long long)arg1;
- (void)updateSessionMetadata:(id)arg1;
- (void)updateWithSystemSuggestSuggestionLayout:(id)arg1;

@end
