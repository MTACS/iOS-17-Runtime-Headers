
@interface HUMatterAccessoryConnectedEcosystemItem : HFItem <HFHomeKitItemProtocol> {
    NSSet * _chipAccessoryPairings;
    HMCHIPEcosystem * _connectedEcosystem;
}

@property (nonatomic, readonly) NSSet *chipAccessoryPairings;
@property (nonatomic, readonly) HMCHIPEcosystem *connectedEcosystem;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <HFHomeKitObject> *homeKitObject;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)chipAccessoryPairings;
- (id)connectedEcosystem;
- (id)homeKitObject;
- (id)initWithConnectedEcosystem:(id)arg1 chipAccessoryPairings:(id)arg2;

@end
