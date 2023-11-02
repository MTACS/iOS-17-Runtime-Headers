
@interface HFDiscoveredAccessoryItem : HFItem <HFServiceLikeItem> {
    HFDiscoveredAccessory * _discoveredAccessory;
    <HFCharacteristicValueSource> * _valueSource;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) HFDiscoveredAccessory *discoveredAccessory;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, readonly) <HFHomeKitObject> *homeKitObject;
@property (nonatomic, readonly) NSSet *services;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <HFCharacteristicValueSource> *valueSource;

- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)accessories;
- (id)copyWithValueSource:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)discoveredAccessory;
- (id)home;
- (id)homeKitObject;
- (id)init;
- (id)initWithDiscoveredAccessory:(id)arg1;
- (id)initWithDiscoveredAccessory:(id)arg1 valueSource:(id)arg2;
- (id)namingComponentForHomeKitObject;
- (id)services;
- (id)valueSource;

@end
