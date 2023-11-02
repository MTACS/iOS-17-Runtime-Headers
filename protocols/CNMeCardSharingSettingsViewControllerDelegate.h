
@protocol CNMeCardSharingSettingsViewControllerDelegate <NSObject>

@optional

- (void)sharingSettingsViewController:(CNMeCardSharingSettingsViewController *)arg1 didSelectSharingAudience:(unsigned long long)arg2;
- (void)sharingSettingsViewController:(CNMeCardSharingSettingsViewController *)arg1 didUpdateSharingState:(bool)arg2;
- (void)sharingSettingsViewController:(CNMeCardSharingSettingsViewController *)arg1 didUpdateWithSharingResult:(CNMeCardSharingResult *)arg2;
- (void)sharingSettingsViewControllerDidUpdateContact:(CNMeCardSharingSettingsViewController *)arg1;

@end
