
@interface HUSafetyAndSecuritySettingsItemModule : HFItemModule {
    NSSet * _devices;
    HMHome * _home;
    HFItem * _homeUpgradeBannerItem;
    HFItem * _listenForSoundsItem;
    HFItem * _notificationsItem;
    NSArray * _ownerHomes;
    HFItemProvider * _staticItemProvider;
    HFUserItemProvider * _userItemProvider;
}

@property (nonatomic, retain) NSSet *devices;
@property (nonatomic, retain) HMHome *home;
@property (nonatomic, retain) HFItem *homeUpgradeBannerItem;
@property (nonatomic, retain) HFItem *listenForSoundsItem;
@property (nonatomic, retain) HFItem *notificationsItem;
@property (nonatomic, retain) NSArray *ownerHomes;
@property (nonatomic, retain) HFItemProvider *staticItemProvider;
@property (nonatomic, retain) HFUserItemProvider *userItemProvider;

+ (id /* block */)_userItemComparator;

- (void).cxx_destruct;
- (void)_buildItemProviders;
- (id)buildSectionsWithDisplayedItems:(id)arg1;
- (id)devices;
- (id)enableUserPermissionSetting:(bool)arg1 forItem:(id)arg2;
- (id)home;
- (id)homeUpgradeBannerItem;
- (id)initWithItemUpdater:(id)arg1;
- (id)initWithItemUpdater:(id)arg1 home:(id)arg2;
- (id)itemProviders;
- (id)listenForSoundsItem;
- (id)notificationsItem;
- (id)ownerHomes;
- (void)setDevices:(id)arg1;
- (void)setHome:(id)arg1;
- (void)setHomeUpgradeBannerItem:(id)arg1;
- (void)setListenForSoundsItem:(id)arg1;
- (void)setNotificationsItem:(id)arg1;
- (void)setOwnerHomes:(id)arg1;
- (void)setStaticItemProvider:(id)arg1;
- (void)setUserItemProvider:(id)arg1;
- (id)staticItemProvider;
- (id)userItemProvider;

@end
