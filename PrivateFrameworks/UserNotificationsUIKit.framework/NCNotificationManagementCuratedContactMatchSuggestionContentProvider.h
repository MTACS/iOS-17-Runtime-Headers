
@interface NCNotificationManagementCuratedContactMatchSuggestionContentProvider : NCNotificationManagementSuggestionContentProvider

- (id)auxiliaryOptionActions;
- (void)handleConfirmAction:(id)arg1;
- (void)handleRejectAction:(id)arg1;
- (id)initWithNotificationRequest:(id)arg1 bundleDisplayName:(id)arg2 managementDelegate:(id)arg3 suggestionDelegate:(id)arg4 contactName:(id)arg5;

@end
