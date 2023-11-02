
@interface HUSafetyAndSecuritySettingsNotificationsItemModule : HFItemModule {
    HMHome * _home;
    HFItemProvider * _safetyAndSecurityDeviceItemProvider;
}

@property (nonatomic, retain) HMHome *home;
@property (nonatomic, retain) HFItemProvider *safetyAndSecurityDeviceItemProvider;

+ (id /* block */)_safetyAndSecurityDeviceItemComparator;

- (void).cxx_destruct;
- (void)_buildItemProviders;
- (id)buildSectionsWithDisplayedItems:(id)arg1;
- (id)home;
- (id)initWithItemUpdater:(id)arg1;
- (id)initWithItemUpdater:(id)arg1 home:(id)arg2;
- (id)itemProviders;
- (id)safetyAndSecurityDeviceItemProvider;
- (void)setHome:(id)arg1;
- (void)setSafetyAndSecurityDeviceItemProvider:(id)arg1;

@end
