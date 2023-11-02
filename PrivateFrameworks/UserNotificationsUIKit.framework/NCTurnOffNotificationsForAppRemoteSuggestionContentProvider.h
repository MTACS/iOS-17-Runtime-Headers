
@interface NCTurnOffNotificationsForAppRemoteSuggestionContentProvider : NCRemoteSuggestionContentProvider

- (id)auxiliaryOptionActions;
- (void)handleKeepAction:(id)arg1;
- (void)handleOffAction:(id)arg1;
- (id)initWithNotificationRequest:(id)arg1 bundleDisplayName:(id)arg2 managementDelegate:(id)arg3 suggestionDelegate:(id)arg4 uuid:(id)arg5;
- (void)logSuggestionEvent:(long long)arg1;

@end
