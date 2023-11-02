
@interface HUHomeKitAccessorySettingsItemModule : HFItemModule {
    HFHomeKitAccessorySettingsItemProvider * _accessorySettingsItemProvider;
    NSObject<HFAccessorySettingsManagerProtocol> * _accessorySettingsManager;
    HMHome * _home;
    bool  _isCollapsed;
    NSSet * _itemProviders;
    NSString * _settingGroupKeyPath;
    HMAccessorySettingsController * _settingsController;
    HFItem<HFServiceLikeItem> * _sourceItem;
}

@property (nonatomic, retain) HFHomeKitAccessorySettingsItemProvider *accessorySettingsItemProvider;
@property (nonatomic, retain) NSObject<HFAccessorySettingsManagerProtocol> *accessorySettingsManager;
@property (nonatomic, retain) HMHome *home;
@property (nonatomic) bool isCollapsed;
@property (nonatomic, copy) NSString *settingGroupKeyPath;
@property (nonatomic, retain) HMAccessorySettingsController *settingsController;
@property (nonatomic, retain) HFItem<HFServiceLikeItem> *sourceItem;

- (void).cxx_destruct;
- (void)_buildItemProviders;
- (id)accessorySettingsItemProvider;
- (id)accessorySettingsManager;
- (id)buildSectionsWithDisplayedItems:(id)arg1;
- (id)home;
- (id)initWithSettingsController:(id)arg1 itemUpdater:(id)arg2 home:(id)arg3 sourceItem:(id)arg4 settingGroupKeyPath:(id)arg5 isCollapsed:(bool)arg6;
- (bool)isCollapsed;
- (id)itemProviders;
- (void)setAccessorySettingsItemProvider:(id)arg1;
- (void)setAccessorySettingsManager:(id)arg1;
- (void)setHome:(id)arg1;
- (void)setIsCollapsed:(bool)arg1;
- (void)setSettingGroupKeyPath:(id)arg1;
- (void)setSettingsController:(id)arg1;
- (void)setSourceItem:(id)arg1;
- (id)settingGroupKeyPath;
- (id)settingsController;
- (id)sourceItem;

@end
