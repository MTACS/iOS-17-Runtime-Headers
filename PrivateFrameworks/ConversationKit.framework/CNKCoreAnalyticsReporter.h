
@interface CNKCoreAnalyticsReporter : NSObject

- (id)init;
- (void)reportCanceledSOSCountdownToCall:(double)arg1;
- (void)reportCanceledSOSCountdownToNotify:(double)arg1;
- (void)reportIncompatibilityTypeInvalidWithRecipientCount:(long long)arg1 reason:(long long)arg2;
- (void)reportIncompatibilityTypeLegacyWithRecipientCount:(long long)arg1 reason:(long long)arg2;
- (void)reportIncompatibilityTypeNoneWithRecipientCount:(long long)arg1 reason:(long long)arg2;
- (void)reportIncompatibilityTypeWebWithRecipientCount:(long long)arg1 reason:(long long)arg2;
- (void)reportMultipleCallsWaitingUIAction:(long long)arg1;

@end
