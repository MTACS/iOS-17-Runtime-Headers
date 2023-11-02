
@interface HUMatterAccessoryConnectedEcosystemItemProvider : HUMatterConnectedEcosystemItemProvider {
    HMAccessory * _accessory;
    NAFuture * _accessoryConnectedEcosystemToCHIPAccessoryPairingsFuture;
    NSMutableSet * _connectedEcosystemItems;
    HUMatterConnectedHomeItemProvider * _connectedHomeItemProvider;
}

@property (nonatomic, readonly) HMAccessory *accessory;
@property (nonatomic, readonly) NAFuture *accessoryConnectedEcosystemToCHIPAccessoryPairingsFuture;
@property (nonatomic, retain) NSMutableSet *connectedEcosystemItems;
@property (nonatomic, readonly) NAFuture *connectedEcosystemsFuture;
@property (nonatomic, retain) HUMatterConnectedHomeItemProvider *connectedHomeItemProvider;

- (void).cxx_destruct;
- (id)accessory;
- (id)accessoryConnectedEcosystemToCHIPAccessoryPairingsFuture;
- (id)connectedEcosystemItems;
- (id)connectedEcosystemsFuture;
- (id)connectedHomeItemProvider;
- (id)initWithAccessory:(id)arg1;
- (id)items;
- (id)reloadItems;
- (void)setConnectedEcosystemItems:(id)arg1;
- (void)setConnectedHomeItemProvider:(id)arg1;

@end
