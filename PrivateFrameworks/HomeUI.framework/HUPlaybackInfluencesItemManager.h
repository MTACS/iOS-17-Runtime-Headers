
@interface HUPlaybackInfluencesItemManager : HFItemManager {
    HUHomeKitAccessorySettingsItemModule * _accessorySettingsModule;
    NSArray * _playbackInfluencesOptionItems;
    HFStaticItem * _selectedItem;
    HFStaticItem * _useListeningHistoryItem;
}

@property (nonatomic, retain) HUHomeKitAccessorySettingsItemModule *accessorySettingsModule;
@property (nonatomic, readonly) NSArray *playbackInfluencesOptionItems;
@property (nonatomic, retain) HFStaticItem *selectedItem;
@property (nonatomic, readonly) HFAccessorySettingItem *settingItem;
@property (nonatomic, retain) HFStaticItem *useListeningHistoryItem;

- (void).cxx_destruct;
- (id)_buildItemProvidersForHome:(id)arg1;
- (id)_buildSectionsWithDisplayedItems:(id)arg1;
- (id)accessorySettingsModule;
- (id)initWithDelegate:(id)arg1;
- (id)initWithDelegate:(id)arg1 module:(id)arg2 homeKitAccessorySettingItem:(id)arg3;
- (id)initWithDelegate:(id)arg1 settingItem:(id)arg2;
- (id)initWithDelegate:(id)arg1 sourceItem:(id)arg2;
- (bool)playbackInfluencesFollowUser;
- (id)playbackInfluencesOptionItems;
- (id)playbackInfluencesSetting;
- (id)selectedItem;
- (void)setAccessorySettingsModule:(id)arg1;
- (void)setSelectedItem:(id)arg1;
- (void)setUseListeningHistoryItem:(id)arg1;
- (id)settingItem;
- (id)updateUseListeningHistorySetting:(bool)arg1;
- (id)useListeningHistoryItem;

@end
