
@interface HKCharacteristicType : HKObjectType

- (id)_canoncialUnit;
- (id)_relatedCategoryType;
- (id)_relatedQuantityType;
- (id)_relatedSampleForInsertionWithCharacteristicValue:(id)arg1;
- (bool)_validateCharacteristic:(id)arg1 error:(id*)arg2;
- (id)initWithIdentifier:(id)arg1;

@end
