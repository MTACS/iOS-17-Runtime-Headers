
@interface HUAnnounceSettingsItemModuleController : HUItemModuleController <HUIconSwitchCellDelegate, HUUserSwitchCellDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)_populateHostInformation:(id)arg1;
- (void)_submitAnalyticsForAnnounceHomePodSettingItem:(id)arg1 enabled:(bool)arg2 writeWasSuccessfull:(bool)arg3;
- (void)_submitAnalyticsForAnnounceNotificationSettingItem:(id)arg1 writeWasSuccessfull:(bool)arg2;
- (void)_submitAnalyticsForAnnounceUserSettingItem:(id)arg1 enabled:(bool)arg2 writeWasSuccessfull:(bool)arg3;
- (Class)cellClassForItem:(id)arg1;
- (unsigned long long)didSelectItem:(id)arg1;
- (void)setupCell:(id)arg1 forItem:(id)arg2;
- (void)switchCell:(id)arg1 didTurnOn:(bool)arg2;
- (void)updateCell:(id)arg1 forItem:(id)arg2 animated:(bool)arg3;
- (void)userSwitchCell:(id)arg1 didTurnOn:(bool)arg2;

@end
