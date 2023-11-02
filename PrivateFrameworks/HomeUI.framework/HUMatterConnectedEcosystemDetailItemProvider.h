
@interface HUMatterConnectedEcosystemDetailItemProvider : HFItemProvider {
    NSMutableSet * _allItems;
    HMCHIPEcosystem * _connectedEcosystem;
    HUMatterHomeConnectedEcosystemItemProvider * _connectedEcosystemItemProvider;
    HMHome * _home;
}

@property (nonatomic, retain) NSMutableSet *allItems;
@property (nonatomic, retain) HMCHIPEcosystem *connectedEcosystem;
@property (nonatomic, retain) HUMatterHomeConnectedEcosystemItemProvider *connectedEcosystemItemProvider;
@property (nonatomic, readonly) HMHome *home;

- (void).cxx_destruct;
- (id)allItems;
- (id)connectedEcosystem;
- (id)connectedEcosystemItemProvider;
- (id)home;
- (id)initWithConnectedEcosystem:(id)arg1 connectedEcosystemItemProvider:(id)arg2 home:(id)arg3;
- (id)invalidationReasons;
- (id)items;
- (id)reloadItems;
- (void)setAllItems:(id)arg1;
- (void)setConnectedEcosystem:(id)arg1;
- (void)setConnectedEcosystemItemProvider:(id)arg1;

@end
