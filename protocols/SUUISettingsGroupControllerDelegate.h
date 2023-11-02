
@protocol SUUISettingsGroupControllerDelegate <NSObject>

@required

- (UIViewController *)owningViewControllerForSettingsGroupController:(SUUISettingsGroupController *)arg1;
- (void)settingsGroupController:(SUUISettingsGroupController *)arg1 reloadSettingDescription:(SUUISettingDescription *)arg2;
- (SUUISettingDescriptionView *)settingsGroupController:(SUUISettingsGroupController *)arg1 viewForSettingDescription:(SUUISettingDescription *)arg2;

@end
