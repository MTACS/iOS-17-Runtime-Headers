
@protocol HUAccessorySettingsItemModuleControllerDelegate <NSObject>

@optional

- (void)moduleController:(void *)arg1 preflightCheckToAllowSwitchingForSettingItem:(void *)arg2 changingToOn:(void *)arg3 withCompletion:(void *)arg4; // needs 4 arg types, found 9: HUAccessorySettingsItemModuleController *, HFAccessorySettingItem *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NAFuture *, void*
- (void)moduleController:(HUAccessorySettingsItemModuleController *)arg1 presentGroup:(HFAccessorySettingGroupItem *)arg2;
- (NAFuture *)moduleController:(HUAccessorySettingsItemModuleController *)arg1 requestPresentViewController:(UIViewController *)arg2 animated:(bool)arg3;
- (void)moduleController:(HUAccessorySettingsItemModuleController *)arg1 settingUpdatedForItem:(HFAccessorySettingItem *)arg2;
- (bool)moduleController:(HUAccessorySettingsItemModuleController *)arg1 shouldDisableItem:(HFAccessorySettingItem *)arg2;

@end
