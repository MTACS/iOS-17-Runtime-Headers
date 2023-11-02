
@protocol CNGroupIdentityHeaderViewControllerDelegate <NSObject>

@optional

- (void)groupIdentityHeaderViewController:(CNGroupIdentityHeaderViewController *)arg1 didDismissSharedProfileBannerWithUpdatedContact:(CNContact *)arg2 forAction:(unsigned long long)arg3;
- (void)groupIdentityHeaderViewController:(CNGroupIdentityHeaderViewController *)arg1 didPerformActionOfType:(NSString *)arg2 fromDisambiguation:(bool)arg3;
- (void)groupIdentityHeaderViewController:(CNGroupIdentityHeaderViewController *)arg1 sharedProfileBannerDidUpdateContact:(CNContact *)arg2 forAction:(unsigned long long)arg3;
- (void)groupIdentityHeaderViewController:(CNGroupIdentityHeaderViewController *)arg1 willPresentDisambiguationUIForActionType:(NSString *)arg2;
- (void)headerViewControllerDidTapActionButton:(CNGroupIdentityHeaderViewController *)arg1;

@end
