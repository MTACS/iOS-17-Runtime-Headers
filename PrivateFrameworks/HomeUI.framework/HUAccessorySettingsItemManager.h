
@interface HUAccessorySettingsItemManager : HFItemManager {
    HUAccessorySettingsItemModule * _accessorySettingsSectionItemModule;
    HFAccessorySettingGroupItem * _groupItem;
}

@property (nonatomic, retain) HUAccessorySettingsItemModule *accessorySettingsSectionItemModule;
@property (nonatomic, retain) HFAccessorySettingGroupItem *groupItem;

- (void).cxx_destruct;
- (id)_buildItemProvidersForHome:(id)arg1;
- (id)_buildSectionsWithDisplayedItems:(id)arg1;
- (id)_itemsToHideInSet:(id)arg1;
- (void)_registerForExternalUpdates;
- (void)_unregisterForExternalUpdates;
- (id)accessorySettingsSectionItemModule;
- (id)groupItem;
- (id)initWithDelegate:(id)arg1 accessoryGroupItem:(id)arg2;
- (void)setAccessorySettingsSectionItemModule:(id)arg1;
- (void)setGroupItem:(id)arg1;

@end
