
@protocol AMSUINotificationSettingsViewModelDelegate <NSObject>

@required

- (void)viewModel:(AMSUINotificationSettingsViewModel *)arg1 didReceiveValueChange:(id)arg2 forItem:(AMSNotificationSettingsItem *)arg3;

@end
