
@interface MPHomeUserMonitor : NSObject <HMSettingsDelegate, HMUserDelegatePrivate> {
    NSObject<OS_dispatch_queue> * _accessQueue;
    bool  _allowExplicitCachedValue;
    NSObject<OS_dispatch_queue> * _calloutQueue;
    bool  _currentAccessoryPrivateListeningCachedValue;
    HMHomeManager * _homeManager;
    HMSettings * _privateHomeSettings;
    HMSettings * _sharedSettings;
    HMUser * _user;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isExplicitSettingEnabled, nonatomic) bool explicitSettingEnabled;
@property (readonly) unsigned long long hash;
@property (getter=isPrivateListeningEnabledForCurrentAccessory, nonatomic) bool privateListeningEnabledForCurrentAccessory;
@property (readonly) Class superclass;

+ (bool)isExplicitSettingEnabledForCurrentUser;
+ (bool)isPrivateListeningEnabledForCurrentUserAndAccessory;
+ (id)monitorForCurrentUser;
+ (void)setExplicitSettingEnabledForCurrentUser:(bool)arg1;
+ (void)setPrivateListeningEnabledForCurrentUserAndAccessory:(bool)arg1;
+ (id)userMonitorWithHomeIdentifier:(id)arg1;
+ (id)userMonitorWithHomeIdentifiers:(id)arg1;
+ (id)userMonitorWithUserIdentity:(id)arg1 fromUserIdentityStore:(id)arg2;

- (void).cxx_destruct;
- (id)_homeAccesssoryWithRouteID:(id)arg1;
- (void)_loadAllowExplicitValue;
- (void)_loadCurrentAccessoryPrivateListening;
- (void)_notifyAllowExplicitUpdated;
- (void)_notifyPrivateListeningUpdated;
- (void)_postNotificationWithName:(id)arg1;
- (void)_update;
- (void)_updateUserListeningHistoryControlForAccessory:(id)arg1 enable:(bool)arg2;
- (bool)hasAccessoryWithRouteID:(id)arg1;
- (id)initWithUser:(id)arg1 homeManager:(id)arg2;
- (bool)isExplicitSettingEnabled;
- (bool)isPrivateListeningEnabledForCurrentAccessory;
- (bool)privateListeningEnabledForAccessoryWithRouteID:(id)arg1;
- (id)privateListeningEnabledForGroupWithRouteIDs:(id)arg1;
- (void)setExplicitSettingEnabled:(bool)arg1;
- (void)setPrivateListeningEnabledForAccessoryWithRouteID:(id)arg1 enabled:(bool)arg2;
- (void)setPrivateListeningEnabledForCurrentAccessory:(bool)arg1;
- (void)settingsDidUpdate:(id)arg1;
- (void)user:(id)arg1 didUpdateUserListeningHistoryUpdateControl:(id)arg2 forHome:(id)arg3;

@end
