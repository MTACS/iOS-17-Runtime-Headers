
@interface HUCameraUserPermissionsSettingsModule : HUExpandableItemModule <HUCameraSettingsModule> {
    HUCameraAccessLevelOptionItemProvider * _accessLevelSettingItemProvider;
    HMHome * _home;
    HFStaticItemProvider * _itemProvider;
    NSSet * _itemProviders;
    NSArray * _optionItems;
    HFItem * _showOptionsItem;
    HMUser * _user;
}

@property (nonatomic, retain) HUCameraAccessLevelOptionItemProvider *accessLevelSettingItemProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long displayStyle;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, retain) HFStaticItemProvider *itemProvider;
@property (nonatomic, retain) NSArray *optionItems;
@property (nonatomic, retain) UIViewController *presentingViewController;
@property (readonly) Class superclass;
@property (nonatomic, readonly) HMUser *user;
@property (nonatomic, readonly) unsigned long long userAccessLevelSetting;

- (void).cxx_destruct;
- (void)_buildItemProvider;
- (void)_dispatchUpdateForHome:(id)arg1 user:(id)arg2;
- (id)accessLevelSettingItemProvider;
- (id)buildSectionsWithDisplayedItems:(id)arg1;
- (id)didSelectItem:(id)arg1;
- (id)home;
- (id)initWithItemUpdater:(id)arg1;
- (id)initWithItemUpdater:(id)arg1 user:(id)arg2 home:(id)arg3;
- (bool)isItemHeader:(id)arg1;
- (id)itemProvider;
- (id)itemProviders;
- (id)optionItems;
- (void)setAccessLevelSettingItemProvider:(id)arg1;
- (void)setItemProvider:(id)arg1;
- (void)setOptionItems:(id)arg1;
- (id)showOptionsItem;
- (id)updateUserAccessLevelSetting:(unsigned long long)arg1;
- (id)user;
- (unsigned long long)userAccessLevelSetting;

@end
