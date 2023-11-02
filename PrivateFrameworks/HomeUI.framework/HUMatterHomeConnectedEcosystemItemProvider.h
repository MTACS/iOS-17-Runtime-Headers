
@interface HUMatterHomeConnectedEcosystemItemProvider : HUMatterConnectedEcosystemItemProvider {
    NSMutableSet * _connectedEcosystemItems;
    NAFuture * _ecosystemAccessoryUUIDMapFuture;
    HMHome * _home;
}

@property (nonatomic, retain) NSMutableSet *connectedEcosystemItems;
@property (nonatomic, readonly) NAFuture *ecosystemAccessoryUUIDMapFuture;
@property (nonatomic, readonly) HMHome *home;

- (void).cxx_destruct;
- (id)connectedEcosystemItems;
- (id)ecosystemAccessoryUUIDMapFuture;
- (id)home;
- (id)initWithHome:(id)arg1;
- (id)items;
- (id)reloadItems;
- (void)setConnectedEcosystemItems:(id)arg1;

@end
