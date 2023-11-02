
@interface HFNetworkConfigurationGroupItem : HFItemGroupItem <HFHomeKitItemProtocol> {
    HMAccessoryNetworkProtectionGroup * _group;
    <HFCharacteristicValueSource> * _valueSource;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) HMAccessoryNetworkProtectionGroup *group;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <HFHomeKitObject> *homeKitObject;
@property (nonatomic, readonly) NSSet *profiles;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <HFCharacteristicValueSource> *valueSource;

- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)copyWithValueSource:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)group;
- (id)homeKitObject;
- (id)init;
- (id)initWithGroup:(id)arg1 valueSource:(id)arg2;
- (id)profiles;
- (id)valueSource;

@end
