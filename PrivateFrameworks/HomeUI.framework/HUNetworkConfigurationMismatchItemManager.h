
@interface HUNetworkConfigurationMismatchItemManager : HFItemManager {
    HFNetworkConfigurationItemProvider * _networkConfigurationItemProvider;
    HMHome * _overrideHome;
    NSSet * _profiles;
}

@property (nonatomic, retain) HFNetworkConfigurationItemProvider *networkConfigurationItemProvider;
@property (nonatomic, readonly) HMHome *overrideHome;
@property (nonatomic, readonly) NSSet *profiles;

- (void).cxx_destruct;
- (id)_buildItemProvidersForHome:(id)arg1;
- (id)_buildSectionsWithDisplayedItems:(id)arg1;
- (id)_homeFuture;
- (id)initWithDelegate:(id)arg1 sourceItem:(id)arg2;
- (id)initWithProfiles:(id)arg1 delegate:(id)arg2;
- (bool)isItemNetworkConfigurationItem:(id)arg1;
- (id)networkConfigurationItemForProfile:(id)arg1;
- (id)networkConfigurationItemProvider;
- (id)overrideHome;
- (id)profiles;
- (void)setNetworkConfigurationItemProvider:(id)arg1;

@end
