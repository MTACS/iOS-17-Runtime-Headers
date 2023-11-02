
@interface HUMatterHomeConnectedEcosystemItem : HFItem <HFHomeKitItemProtocol> {
    NSSet * _accessoryUUIDs;
    HMCHIPEcosystem * _connectedEcosystem;
}

@property (nonatomic, readonly) NSSet *accessoryUUIDs;
@property (nonatomic, readonly) HMCHIPEcosystem *connectedEcosystem;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <HFHomeKitObject> *homeKitObject;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)accessoryUUIDs;
- (id)connectedEcosystem;
- (id)homeKitObject;
- (id)initWithConnectedEcosystem:(id)arg1 accessoryUUIDs:(id)arg2;

@end
