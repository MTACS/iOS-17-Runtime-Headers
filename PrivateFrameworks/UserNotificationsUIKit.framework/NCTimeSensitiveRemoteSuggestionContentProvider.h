
@interface NCTimeSensitiveRemoteSuggestionContentProvider : NCRemoteSuggestionContentProvider

- (id)auxiliaryOptionActions;
- (void)handleLeaveOnButtonAction:(id)arg1;
- (void)handleTurnOffMenuButtonAction:(id)arg1;
- (id)initWithNotificationRequest:(id)arg1 bundleDisplayName:(id)arg2 managementDelegate:(id)arg3 suggestionDelegate:(id)arg4 uuid:(id)arg5;
- (void)logSuggestionEvent:(long long)arg1;

@end
