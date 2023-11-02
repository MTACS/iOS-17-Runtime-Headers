
@interface HFPowerStateControlItem : HFPrimaryStateControlItem <HFPrimaryStateWriter> {
    NSSet * _allTargetValues;
    NSSet * _auxiliaryTargetValueTuples;
}

@property (readonly) NSSet *allTargetValues;
@property (nonatomic, readonly) NSSet *auxiliaryTargetValueTuples;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_powerStateTargetValues;
+ (id)na_identity;
+ (Class)valueClass;

- (void).cxx_destruct;
- (id)allTargetValues;
- (id)auxiliaryTargetValueTuples;
- (bool)canCopyWithCharacteristicOptions:(id)arg1;
- (id)characteristicValuesForValue:(id)arg1;
- (id)copyWithCharacteristicOptions:(id)arg1 valueSource:(id)arg2;
- (id)initWithValueSource:(id)arg1 auxiliaryTargetValueTuples:(id)arg2 additionalCharacteristicOptions:(id)arg3 displayResults:(id)arg4;
- (id)initWithValueSource:(id)arg1 auxiliaryTargetValueTuples:(id)arg2 displayResults:(id)arg3;
- (id)initWithValueSource:(id)arg1 characteristicTypes:(id)arg2 displayResults:(id)arg3;
- (id)initWithValueSource:(id)arg1 displayResults:(id)arg2;
- (id)readValueAndPopulateStandardResults;
- (bool)supportsItemRepresentingServices:(id)arg1;
- (id)toggleValue;
- (id)valueForCharacteristicValues:(id)arg1;
- (id)writePrimaryState:(long long)arg1;

@end
