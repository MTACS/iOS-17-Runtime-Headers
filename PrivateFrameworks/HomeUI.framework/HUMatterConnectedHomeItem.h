
@interface HUMatterConnectedHomeItem : HFItem <HFHomeKitItemProtocol> {
    HMCHIPAccessoryPairing * _chipAccessoryPairing;
    HMCHIPHome * _connectedHome;
}

@property (nonatomic, readonly) HMCHIPAccessoryPairing *chipAccessoryPairing;
@property (nonatomic, readonly) HMCHIPHome *connectedHome;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <HFHomeKitObject> *homeKitObject;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)chipAccessoryPairing;
- (id)connectedHome;
- (id)homeKitObject;
- (id)initWithConnectedHome:(id)arg1 accessoryPairing:(id)arg2;

@end
