
@interface HUAccessorySettingsItemModule : HUServiceDetailsItemModule <HFHomeKitSettingsObserver, HFMediaObjectObserver> {
    HMAccessory * _accessory;
    HFAccessorySettingsItemProvider * _accessorySettingsItemProvider;
    NATreeNode * _codex;
    NSSet * _groupItemsToBeDisplayed;
    <HFHomeKitSettingsVendor> * _homeKitSettingsVendor;
    NSSet * _itemProviders;
    HFAccessorySettingsEntity * _parentEntity;
    HMSettingGroup * _parentSettingGroup;
    NSSet * _settingItemsToBeDisplayed;
    HMSettings * _settings;
}

@property (nonatomic, readonly) HMAccessory *accessory;
@property (nonatomic, readonly) HFAccessorySettingsItemProvider *accessorySettingsItemProvider;
@property (nonatomic, readonly) NATreeNode *codex;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSSet *groupItemsToBeDisplayed;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <HFHomeKitSettingsVendor> *homeKitSettingsVendor;
@property (nonatomic, readonly) HFAccessorySettingsEntity *parentEntity;
@property (nonatomic, readonly) HMSettingGroup *parentSettingGroup;
@property (nonatomic, retain) NSSet *settingItemsToBeDisplayed;
@property (nonatomic, readonly) HMSettings *settings;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_itemSectionForGroup:(id)arg1 entity:(id)arg2 settingItems:(id)arg3 groupItems:(id)arg4;
- (id)_itemSectionWithEntity:(id)arg1 items:(id)arg2;
- (id)_itemSectionsForGroupKeyPaths:(id)arg1;
- (id)_itemSectionsForParentGroupWithItems;
- (id)_itemSectionsForShowInSeperateSectionItems:(id)arg1;
- (void)_registerForAccessorySettingsUpdates;
- (void)_resetIfNeeded;
- (void)_unregisterForAccessorySettingsUpdates;
- (id)accessory;
- (id)accessorySettingsItemProvider;
- (id)buildSectionsWithDisplayedItems:(id)arg1;
- (bool)checkSoftwareVersionForAccessories:(id)arg1 neededSoftwareVersion:(id)arg2;
- (id)codex;
- (id)getAllHomePodFromItem:(id)arg1;
- (id)groupItemsToBeDisplayed;
- (id)homeKitSettingsVendor;
- (id)initWithItemUpdater:(id)arg1 home:(id)arg2 sourceItem:(id)arg3;
- (id)initWithItemUpdater:(id)arg1 home:(id)arg2 sourceItem:(id)arg3 usageOptions:(id)arg4;
- (id)initWithItemUpdater:(id)arg1 homeKitSettingsVendor:(id)arg2 usageOptions:(id)arg3;
- (id)initWithItemUpdater:(id)arg1 mediaAccessoryItem:(id)arg2;
- (id)initWithItemUpdater:(id)arg1 settingGroupItem:(id)arg2 usageOptions:(id)arg3;
- (id)itemProviders;
- (void)mediaObject:(id)arg1 didUpdateSettings:(id)arg2;
- (id)parentEntity;
- (id)parentSettingGroup;
- (void)registerForExternalUpdates;
- (void)setGroupItemsToBeDisplayed:(id)arg1;
- (void)setSettingItemsToBeDisplayed:(id)arg1;
- (id)settingItemsToBeDisplayed;
- (id)settings;
- (void)settingsDidUpdate:(id)arg1;
- (void)unregisterForExternalUpdates;
- (id)updateItem:(id)arg1 withValue:(id)arg2;
- (void)updateItems:(id)arg1;
- (void)updateItems:(id)arg1 matchingDependency:(id)arg2;
- (void)updateItemsForKeyPath:(id)arg1;

@end
