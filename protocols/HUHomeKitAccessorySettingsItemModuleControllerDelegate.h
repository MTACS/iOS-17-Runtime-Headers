
@protocol HUHomeKitAccessorySettingsItemModuleControllerDelegate <NSObject>

@optional

- (void)moduleController:(HUHomeKitAccessorySettingsItemModuleController *)arg1 expandModule:(HFItemModule *)arg2;
- (void)moduleController:(void *)arg1 preflightCheckToAllowSwitchingForSettingItem:(void *)arg2 changingToOn:(void *)arg3 withCompletion:(void *)arg4; // needs 4 arg types, found 9: HUHomeKitAccessorySettingsItemModuleController *, HFHomeKitAccessorySettingItem *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NAFuture *, void*
- (void)moduleController:(HUHomeKitAccessorySettingsItemModuleController *)arg1 presentSettingDetailsViewController:(UIViewController *)arg2;

@end
