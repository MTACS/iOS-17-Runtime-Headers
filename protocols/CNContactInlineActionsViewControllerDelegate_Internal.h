
@protocol CNContactInlineActionsViewControllerDelegate_Internal <CNContactInlineActionsViewControllerDelegate>

@optional

- (bool)contactInlineActionsViewController:(CNContactInlineActionsViewController *)arg1 canPerformGroupActionOfType:(NSString *)arg2;
- (void)contactInlineActionsViewController:(CNContactInlineActionsViewController *)arg1 didPerformActionOfType:(NSString *)arg2 fromDisambiguation:(bool)arg3;
- (void)contactInlineActionsViewController:(CNContactInlineActionsViewController *)arg1 didSelectActionOfType:(NSString *)arg2;
- (bool)contactInlineActionsViewController:(CNContactInlineActionsViewController *)arg1 overrideEnabledStateForActionOfType:(NSString *)arg2;
- (UIImage *)contactInlineActionsViewController:(CNContactInlineActionsViewController *)arg1 overrideImageForActionOfType:(NSString *)arg2;
- (NSString *)contactInlineActionsViewController:(CNContactInlineActionsViewController *)arg1 overrideTitleForActionOfType:(NSString *)arg2;
- (bool)contactInlineActionsViewController:(CNContactInlineActionsViewController *)arg1 shouldOverrideEnabledStateForActionOfType:(NSString *)arg2;
- (bool)contactInlineActionsViewController:(CNContactInlineActionsViewController *)arg1 shouldPerformActionOfType:(NSString *)arg2 withContactProperty:(CNContactProperty *)arg3;
- (bool)contactInlineActionsViewController:(CNContactInlineActionsViewController *)arg1 shouldPresentDisambiguationUIForActionOfType:(NSString *)arg2;
- (void)contactInlineActionsViewController:(CNContactInlineActionsViewController *)arg1 willPresentDisambiguationUIForActionType:(NSString *)arg2;
- (void)contactInlineActionsViewControllerDidDismissDisambiguationUI:(CNContactInlineActionsViewController *)arg1;
- (void)contactInlineActionsViewControllerWillPresentDisambiguationUI:(CNContactInlineActionsViewController *)arg1;

@end
