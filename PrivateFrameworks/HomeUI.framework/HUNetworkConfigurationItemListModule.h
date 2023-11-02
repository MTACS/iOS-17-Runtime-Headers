
@interface HUNetworkConfigurationItemListModule : HFItemModule {
    HMHome * _home;
    HFNetworkConfigurationGroupItemProvider * _networkConfigurationGroupItemProvider;
}

@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, retain) HFNetworkConfigurationGroupItemProvider *networkConfigurationGroupItemProvider;

- (void).cxx_destruct;
- (id)buildSectionsWithDisplayedItems:(id)arg1;
- (id)home;
- (id)initWithItemUpdater:(id)arg1;
- (id)initWithItemUpdater:(id)arg1 home:(id)arg2;
- (bool)isItemNetworkConfigurationGroupItem:(id)arg1;
- (id)itemProviders;
- (id)networkConfigurationGroupItemForProfile:(id)arg1;
- (id)networkConfigurationGroupItemProvider;
- (void)setNetworkConfigurationGroupItemProvider:(id)arg1;

@end
