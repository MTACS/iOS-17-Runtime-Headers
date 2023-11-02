
@interface HFGenericAccessoryItem : HFItem <HFAccessoryRepresentableItem, HFServiceLikeBuilderCreating, HFServiceLikeItem> {
    HMAccessory * _accessory;
    <HFCharacteristicValueSource> * _valueSource;
}

@property (nonatomic, readonly) HMAccessory *accessory;
@property (nonatomic, readonly) <HFAccessoryRepresentable> *accessoryRepresentableObject;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, readonly) <HFHomeKitObject> *homeKitObject;
@property (nonatomic, readonly) NSSet *services;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <HFCharacteristicValueSource> *valueSource;

+ (id)itemWithAccessoryRepresentableObject:(id)arg1 valueSource:(id)arg2;

- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)accessories;
- (id)accessory;
- (id)accessoryRepresentableObject;
- (id)copyWithValueSource:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)home;
- (id)homeKitObject;
- (id)initWithAccessory:(id)arg1 valueSource:(id)arg2;
- (id)namingComponentForHomeKitObject;
- (id)serviceLikeBuilderInHome:(id)arg1;
- (id)services;
- (id)valueSource;

@end
