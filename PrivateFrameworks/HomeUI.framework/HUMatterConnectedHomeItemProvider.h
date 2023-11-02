
@interface HUMatterConnectedHomeItemProvider : HFItemProvider {
    HMAccessory * _accessory;
    NAFuture * _accessoryConnectedHomeToCHIPAccessoryPairingFuture;
    NSMutableSet * _connectedHomeItems;
}

@property (nonatomic, readonly) HMAccessory *accessory;
@property (nonatomic, readonly) NAFuture *accessoryConnectedHomeToCHIPAccessoryPairingFuture;
@property (nonatomic, readonly) NAFuture *connectedCHIPAccessoryPairingsFuture;
@property (nonatomic, retain) NSMutableSet *connectedHomeItems;
@property (nonatomic, readonly) NAFuture *connectedHomesFuture;

- (void).cxx_destruct;
- (id)accessory;
- (id)accessoryConnectedHomeToCHIPAccessoryPairingFuture;
- (id)connectedCHIPAccessoryPairingsFuture;
- (id)connectedHomeItems;
- (id)connectedHomesFuture;
- (id)initWithAccessory:(id)arg1;
- (id)items;
- (id)reloadItems;
- (void)setConnectedHomeItems:(id)arg1;

@end
