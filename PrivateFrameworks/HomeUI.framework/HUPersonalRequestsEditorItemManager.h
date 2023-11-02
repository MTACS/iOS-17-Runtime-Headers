
@interface HUPersonalRequestsEditorItemManager : HFItemManager {
    HFItem * _activityNotificationFooterItem;
    bool  _activityNotificationsEnabled;
    HFItem * _activityNotificationsItem;
    HMHome * _homeForUser;
    bool  _onlyShowDeviceSwitches;
    bool  _personalRequestsAuthenticationRequired;
    HUPersonalRequestsDevicesItemModule * _prDevicesModule;
    HFStaticItemProvider * _staticItemProvider;
}

@property (nonatomic, readonly) HMAssistantAccessControl *accessControl;
@property (nonatomic, readonly) HFItem *activityNotificationFooterItem;
@property (nonatomic) bool activityNotificationsEnabled;
@property (nonatomic, readonly) HFItem *activityNotificationsItem;
@property (nonatomic, readonly) HMHome *homeForUser;
@property (nonatomic) bool onlyShowDeviceSwitches;
@property (nonatomic) bool personalRequestsAuthenticationRequired;
@property (nonatomic, retain) HUPersonalRequestsDevicesItemModule *prDevicesModule;
@property (nonatomic, retain) HFUserItem *sourceItem;
@property (nonatomic, readonly) HFStaticItemProvider *staticItemProvider;
@property (nonatomic, readonly) HMUser *user;

- (void).cxx_destruct;
- (bool)_arePersonalRequestsEnabled;
- (id)_buildItemProvidersForHome:(id)arg1;
- (id)_buildSectionsWithDisplayedItems:(id)arg1;
- (id)_commitUpdateToAccessControl:(id)arg1;
- (void)_registerForExternalUpdates;
- (void)_unregisterForExternalUpdates;
- (id)accessControl;
- (id)activityNotificationFooterItem;
- (bool)activityNotificationsEnabled;
- (id)activityNotificationsItem;
- (id)homeForUser;
- (id)initWithDelegate:(id)arg1 sourceItem:(id)arg2;
- (id)initWithDelegate:(id)arg1 userItem:(id)arg2 accessorySettingItem:(id)arg3 module:(id)arg4 onlyShowDeviceSwitches:(bool)arg5;
- (id)initWithDelegate:(id)arg1 userItem:(id)arg2 onlyShowDeviceSwitches:(bool)arg3;
- (bool)onlyShowDeviceSwitches;
- (bool)personalRequestsAuthenticationRequired;
- (id)prDevicesModule;
- (void)setActivityNotificationsEnabled:(bool)arg1;
- (void)setOnlyShowDeviceSwitches:(bool)arg1;
- (void)setPersonalRequestsAuthenticationRequired:(bool)arg1;
- (void)setPrDevicesModule:(id)arg1;
- (id)staticItemProvider;
- (id)user;

@end
