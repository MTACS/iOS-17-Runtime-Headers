
@interface HUAnnounceSettingsItemModule : HFItemModule <HFMediaAccessoryCommonSettingsDelegate> {
    HFItemProvider * _announceDeviceItemProvider;
    HFItemProvider * _announceOtherDeviceItemProvider;
    HMHome * _home;
    HUAnnounceNotificationSettingsItemProvider * _notificationSettingsItemProvider;
    unsigned long long  _settingsContext;
    HFUserItemProvider * _userItemProvider;
}

@property (nonatomic, retain) HFItemProvider *announceDeviceItemProvider;
@property (nonatomic, retain) HFItemProvider *announceOtherDeviceItemProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, retain) HUAnnounceNotificationSettingsItemProvider *notificationSettingsItemProvider;
@property (nonatomic, readonly) unsigned long long settingsContext;
@property (readonly) Class superclass;
@property (nonatomic, retain) HFUserItemProvider *userItemProvider;

+ (id /* block */)_announceDeviceItemComparator;
+ (id /* block */)_userItemComparator;

- (void).cxx_destruct;
- (void)_buildItemProviders;
- (id)_updateNotificationSettings:(id)arg1;
- (id)announceDeviceItemProvider;
- (id)announceOtherDeviceItemProvider;
- (id)buildSectionsWithDisplayedItems:(id)arg1;
- (id)enableAnnounceSetting:(bool)arg1 forItem:(id)arg2;
- (id)enablePermissionSetting:(bool)arg1 forItem:(id)arg2;
- (id)home;
- (id)initWithItemUpdater:(id)arg1;
- (id)initWithItemUpdater:(id)arg1 home:(id)arg2 settingsContext:(unsigned long long)arg3;
- (id)itemProviders;
- (void)mediaProfileContainer:(id)arg1 didUpdateSettingKeypath:(id)arg2 value:(id)arg3;
- (id)notificationSettingsItemProvider;
- (void)setAnnounceDeviceItemProvider:(id)arg1;
- (void)setAnnounceOtherDeviceItemProvider:(id)arg1;
- (void)setNotificationSettingsItemProvider:(id)arg1;
- (void)setUserItemProvider:(id)arg1;
- (unsigned long long)settingsContext;
- (id)updateNotificationSettings:(id)arg1;
- (id)userItemProvider;

@end
