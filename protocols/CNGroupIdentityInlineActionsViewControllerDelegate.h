
@protocol CNGroupIdentityInlineActionsViewControllerDelegate <NSObject>

@optional

- (void)groupIdentityInlineActionsViewController:(CNGroupIdentityInlineActionsViewController *)arg1 didPerformActionOfType:(NSString *)arg2 fromDisambiguation:(bool)arg3;
- (void)groupIdentityInlineActionsViewController:(CNGroupIdentityInlineActionsViewController *)arg1 willPresentDisambiguationUIForActionType:(NSString *)arg2;

@end
