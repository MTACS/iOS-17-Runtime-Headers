
@interface NCDigestRemoteSuggestionContentProvider : NCRemoteSuggestionContentProvider

- (id)auxiliaryOptionActions;
- (void)handleAcceptAction:(id)arg1;
- (void)handleRejectAction:(id)arg1;
- (id)initWithNotificationRequest:(id)arg1 bundleDisplayName:(id)arg2 managementDelegate:(id)arg3 suggestionDelegate:(id)arg4 uuid:(id)arg5;

@end
