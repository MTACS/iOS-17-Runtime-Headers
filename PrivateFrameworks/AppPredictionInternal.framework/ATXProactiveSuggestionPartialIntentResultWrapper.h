
@interface ATXProactiveSuggestionPartialIntentResultWrapper : ATXProactiveSuggestionUIFeedbackResult {
    ATXAction * _matchingIntentDonatedAction;
    NSDate * _matchingIntentDonationDate;
    NSNumber * _partialEngagementWasCompleteMatch;
    ATXAction * _partiallyExecutedAction;
    NSDate * _partiallyExecutedActionStartDate;
    NSUUID * _partiallyExecutedUUID;
}

@property (nonatomic, readonly) ATXAction *matchingIntentDonatedAction;
@property (nonatomic, readonly) NSDate *matchingIntentDonationDate;
@property (nonatomic, readonly) NSNumber *partialEngagementWasCompleteMatch;
@property (nonatomic, readonly) ATXAction *partiallyExecutedAction;
@property (nonatomic, readonly) NSDate *partiallyExecutedActionStartDate;
@property (nonatomic, readonly) NSUUID *partiallyExecutedUUID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithUIFeedbackResult:(id)arg1;
- (id)initWithUIFeedbackResult:(id)arg1 partiallyExecutedUUID:(id)arg2 partiallyExecutedAction:(id)arg3 partiallyExecutedActionStartDate:(id)arg4 matchingIntentDonatedAction:(id)arg5 matchingIntentDonationDate:(id)arg6 partialEngagementWasCompleteMatch:(id)arg7;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToATXProactiveSuggestionPartialIntentResultWrapper:(id)arg1;
- (void)markPartiallyExecutedSuggestionAsAbandoned;
- (void)markPartiallyExecutedSuggestionAsCompleteMatchWithDonatedAction:(id)arg1 donationDate:(id)arg2;
- (void)markPartiallyExecutedSuggestionAsPartialMatchWithDonatedAction:(id)arg1 donationDate:(id)arg2;
- (id)matchingIntentDonatedAction;
- (id)matchingIntentDonationDate;
- (id)partialEngagementWasCompleteMatch;
- (id)partiallyExecutedAction;
- (id)partiallyExecutedActionStartDate;
- (id)partiallyExecutedUUID;
- (void)updatePartiallyExecutedActionWithProactiveSuggestion:(id)arg1;

@end
