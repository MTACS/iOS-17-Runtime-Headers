
@interface ATXPartialIntentHandlingContext : NSObject <NSSecureCoding> {
    NSString * _currentApp;
    NSDate * _currentAppSessionStartDate;
    NSMutableArray * _feedbackResults;
    ATXAction * _matchingAppSessionDonatedAction;
    NSDate * _matchingAppSessionDonationDate;
    ATXAction * _partiallyExecutedAction;
    NSDate * _partiallyExecutedActionStartDate;
    ATXAction * _shortcutsRuntimeDonatedAction;
    NSDate * _shortcutsRuntimeDonationDate;
}

@property (nonatomic, readonly) NSString *currentApp;
@property (nonatomic, readonly) NSDate *currentAppSessionStartDate;
@property (nonatomic, readonly) NSArray *feedbackResults;
@property (nonatomic, readonly) ATXAction *matchingAppSessionDonatedAction;
@property (nonatomic, readonly) NSDate *matchingAppSessionDonationDate;
@property (nonatomic, readonly) ATXAction *partiallyExecutedAction;
@property (nonatomic, readonly) NSDate *partiallyExecutedActionStartDate;
@property (nonatomic, readonly) ATXAction *shortcutsRuntimeDonatedAction;
@property (nonatomic, readonly) NSDate *shortcutsRuntimeDonationDate;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_isCompleteEngagementForATXAction:(id)arg1 withMatchingDonatedAction:(id)arg2;
- (bool)_isPartialEngagementForATXAction:(id)arg1 withMatchingDonatedAction:(id)arg2;
- (id)_partiallyExecutedSuggestionFromFeedbackResult:(id)arg1;
- (void)_resetInternalState;
- (void)_tryUpdateMatchingAppSessionDonatedAction:(id)arg1 eventDate:(id)arg2;
- (void)_tryUpdatePartialIntentSessionState;
- (void)_tryUpdateShortcutsRuntimeDonatedAction:(id)arg1 eventDate:(id)arg2;
- (id)atxActionFromIntentEvent:(id)arg1;
- (id)currentApp;
- (id)currentAppSessionStartDate;
- (void)encodeWithCoder:(id)arg1;
- (id)feedbackResults;
- (id)handleAppLaunchAndReturnCompletedResults:(id)arg1;
- (id)handleNewFeedbackResultAndReturnCompletedResults:(id)arg1;
- (id)handleNewIntentEventAndReturnCompletedResults:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFeedbackResults:(id)arg1 partiallyExecutedAction:(id)arg2 partiallyExecutedActionStartDate:(id)arg3 currentApp:(id)arg4 currentAppSessionStartDate:(id)arg5 shortcutsRuntimeDonatedAction:(id)arg6 shortcutsRuntimeDonationDate:(id)arg7 matchingAppSessionDonatedAction:(id)arg8 matchingAppSessionDonationDate:(id)arg9;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToATXPartialIntentHandlingContext:(id)arg1;
- (id)matchingAppSessionDonatedAction;
- (id)matchingAppSessionDonationDate;
- (id)partiallyExecutedAction;
- (id)partiallyExecutedActionStartDate;
- (id)shortcutsRuntimeDonatedAction;
- (id)shortcutsRuntimeDonationDate;

@end
