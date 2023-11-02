
@protocol SKUISettingsGroupControllerDelegate <NSObject>

@required

- (UIViewController *)owningViewControllerForSettingsGroupController:(SKUISettingsGroupController *)arg1;
- (void)settingsGroupController:(SKUISettingsGroupController *)arg1 reloadSettingDescription:(SKUISettingDescription *)arg2;
- (SKUISettingDescriptionView *)settingsGroupController:(SKUISettingsGroupController *)arg1 viewForSettingDescription:(SKUISettingDescription *)arg2;

@end
