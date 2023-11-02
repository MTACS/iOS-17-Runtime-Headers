
@interface HFAccessoryControlItem : HFControlItem {
    HMAccessory * _accessory;
}

@property (nonatomic, readonly) HMAccessory *accessory;

+ (Class)valueClass;

- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)accessory;
- (id)characteristicValuesForValue:(id)arg1;
- (id)copyWithCharacteristicOptions:(id)arg1 valueSource:(id)arg2;
- (id)initWithValueSource:(id)arg1 characteristicOptions:(id)arg2 displayResults:(id)arg3;
- (id)initWithValueSource:(id)arg1 parentAccessory:(id)arg2 displayResults:(id)arg3;
- (id)normalizedValueForValue:(id)arg1;
- (bool)supportsItemRepresentingServices:(id)arg1;
- (id)valueForCharacteristicValues:(id)arg1;

@end
