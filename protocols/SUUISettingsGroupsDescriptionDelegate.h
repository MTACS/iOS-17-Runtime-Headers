
@protocol SUUISettingsGroupsDescriptionDelegate <NSObject>

@required

- (UIViewController *)owningViewControllerForSettingsGroupsDescription:(SUUISettingsGroupsDescription *)arg1;
- (void)settingsGroupsDescription:(SUUISettingsGroupsDescription *)arg1 deletedSettingAtIndexPath:(NSIndexPath *)arg2;
- (void)settingsGroupsDescription:(SUUISettingsGroupsDescription *)arg1 deletedSettingsGroupAtIndex:(unsigned long long)arg2;
- (void)settingsGroupsDescription:(SUUISettingsGroupsDescription *)arg1 didUpdateSettingsDescription:(SUUISettingsDescriptionUpdate *)arg2;
- (void)settingsGroupsDescription:(void *)arg1 dismissViewController:(void *)arg2 animated:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 8: SUUISettingsGroupsDescription *, UIViewController *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)settingsGroupsDescription:(void *)arg1 presentViewController:(void *)arg2 animated:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 8: SUUISettingsGroupsDescription *, UIViewController *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (SUUISettingDescriptionView *)settingsGroupsDescription:(SUUISettingsGroupsDescription *)arg1 viewForSettingAtIndexPath:(NSIndexPath *)arg2;
- (void)settingsGroupsDescriptionDidUpdateValidity:(SUUISettingsGroupsDescription *)arg1;

@end
