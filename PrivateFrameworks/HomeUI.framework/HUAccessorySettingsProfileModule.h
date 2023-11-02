
@interface HUAccessorySettingsProfileModule : HFItemModule <HFAccessorySettingManagedConfigurationAdapterObserver> {
    HFAccessorySettingManagedConfigurationAdapter * _adapter;
    <HUAccessorySettingsProfileModuleDelegate> * _delegate;
    HUAccessorySettingsProfileItemProvider * _profileItemProvider;
    HFAccessorySettingGroupItem * _settingGroupItem;
}

@property (nonatomic, readonly) HFAccessorySettingManagedConfigurationAdapter *adapter;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HUAccessorySettingsProfileModuleDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HUAccessorySettingsProfileItemProvider *profileItemProvider;
@property (nonatomic, readonly) HFAccessorySettingGroupItem *settingGroupItem;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_actuallyRemoveProfileItem:(id)arg1;
- (id)adapter;
- (id)buildSectionsWithDisplayedItems:(id)arg1;
- (id)delegate;
- (id)initWithItemUpdater:(id)arg1 settingGroupItem:(id)arg2;
- (id)itemProviders;
- (void)managedConfigurationAdapterSettingsWereUpdated:(id)arg1;
- (id)profileItemProvider;
- (id)promptForRemoveProfileItem:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)settingGroupItem;

@end
