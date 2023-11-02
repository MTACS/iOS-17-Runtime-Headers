
@interface HUNetworkConfigurationSettingsItemManager : HFItemManager {
    HUNetworkConfigurationSettingsModule * _networkConfigurationSettingsModule;
}

@property (nonatomic, retain) HUNetworkConfigurationSettingsModule *networkConfigurationSettingsModule;
@property (nonatomic, readonly) HFNetworkConfigurationGroupItem *sourceNetworkConfigurationGroupItem;

- (void).cxx_destruct;
- (id)_buildItemModulesForHome:(id)arg1;
- (id)_buildSectionsWithDisplayedItems:(id)arg1;
- (id)initWithDelegate:(id)arg1;
- (id)initWithDelegate:(id)arg1 networkConfigurationGroupItem:(id)arg2;
- (id)initWithDelegate:(id)arg1 sourceItem:(id)arg2;
- (id)networkConfigurationSettingsModule;
- (void)setNetworkConfigurationSettingsModule:(id)arg1;
- (id)sourceNetworkConfigurationGroupItem;

@end
