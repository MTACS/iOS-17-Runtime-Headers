
@interface HUNetworkConfigurationSettingsModule : HFItemModule {
    HMAccessoryNetworkProtectionGroup * _group;
    bool  _isUpdatingProtectionMode;
    <HUNetworkConfigurationSettingsModuleDelegate> * _networkConfigurationSettingsModuleDelegate;
    HUNetworkProtectionModeOptionItemProvider * _networkProtectionModeOptionItemProvider;
    NSTimer * _updateProtectionModeTimer;
}

@property (nonatomic, readonly) HMAccessoryNetworkProtectionGroup *group;
@property (nonatomic) bool isUpdatingProtectionMode;
@property (nonatomic) <HUNetworkConfigurationSettingsModuleDelegate> *networkConfigurationSettingsModuleDelegate;
@property (nonatomic, retain) HUNetworkProtectionModeOptionItemProvider *networkProtectionModeOptionItemProvider;
@property (nonatomic, readonly) HFNetworkConfigurationGroupItem *sourceItem;
@property (nonatomic, retain) NSTimer *updateProtectionModeTimer;

+ (id)_allowedHostDescriptionForHostGroup:(id)arg1;
+ (id)_attributedCheckmarkIcon;
+ (id)_attributedExclamationIcon;
+ (id)_attributedIconNamed:(id)arg1;

- (void).cxx_destruct;
- (id)_protectionModeOptionSectionFooter;
- (id)buildSectionsWithDisplayedItems:(id)arg1;
- (id)description;
- (id)group;
- (id)initWithItemUpdater:(id)arg1;
- (id)initWithItemUpdater:(id)arg1 group:(id)arg2;
- (bool)isItemNetworkProtectionModeOptionItem:(id)arg1;
- (bool)isUpdatingProtectionMode;
- (id)itemProviders;
- (id)networkConfigurationSettingsModuleDelegate;
- (id)networkProtectionModeOptionItemProvider;
- (void)setIsUpdatingProtectionMode:(bool)arg1;
- (void)setNetworkConfigurationSettingsModuleDelegate:(id)arg1;
- (void)setNetworkProtectionModeOptionItemProvider:(id)arg1;
- (void)setUpdateProtectionModeTimer:(id)arg1;
- (id)sourceItem;
- (id)updateProtectionMode:(long long)arg1;
- (id)updateProtectionModeTimer;

@end
