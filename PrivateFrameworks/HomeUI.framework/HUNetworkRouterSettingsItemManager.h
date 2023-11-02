
@interface HUNetworkRouterSettingsItemManager : HFItemManager {
    HFItem * _homeProtectionItem;
    HUNetworkConfigurationItemListModule * _networkConfigurationItemListModule;
    HFNetworkRouterItemProvider * _networkRouterItemProvider;
    HMHome * _overrideHome;
}

@property (nonatomic, retain) HFItem *homeProtectionItem;
@property (nonatomic, retain) HUNetworkConfigurationItemListModule *networkConfigurationItemListModule;
@property (nonatomic, retain) HFNetworkRouterItemProvider *networkRouterItemProvider;
@property (nonatomic, readonly) HMHome *overrideHome;

+ (id /* block */)_networkRouterItemComparator;

- (void).cxx_destruct;
- (id)_buildItemModulesForHome:(id)arg1;
- (id)_buildItemProvidersForHome:(id)arg1;
- (id)_buildSectionsWithDisplayedItems:(id)arg1;
- (id)_homeFuture;
- (id)homeProtectionItem;
- (id)initWithDelegate:(id)arg1 sourceItem:(id)arg2;
- (id)initWithHome:(id)arg1 delegate:(id)arg2;
- (bool)isItemNetworkRouterItem:(id)arg1;
- (id)networkConfigurationItemListModule;
- (id)networkRouterItemForProfile:(id)arg1;
- (id)networkRouterItemProvider;
- (id)overrideHome;
- (void)setHomeProtectionItem:(id)arg1;
- (void)setNetworkConfigurationItemListModule:(id)arg1;
- (void)setNetworkRouterItemProvider:(id)arg1;

@end
