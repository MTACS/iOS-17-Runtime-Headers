
@interface HFAccessoryBatteryLevelItem : HFItem <NSCopying> {
    HMAccessory * _accessory;
    <HFCharacteristicValueSource> * _valueSource;
}

@property (nonatomic, readonly) HMAccessory *accessory;
@property (nonatomic, readonly) <HFCharacteristicValueSource> *valueSource;

- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)accessory;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithAccessory:(id)arg1 valueSource:(id)arg2;
- (id)valueSource;

@end
