
@interface HFCharacteristicValueSet : NSObject {
    NSMutableSet * _allCharacteristics;
    NSMutableDictionary * _valuesByCharacteristicUUID;
}

@property (nonatomic, readonly) NSSet *allCharacteristics;

- (void).cxx_destruct;
- (id)allCharacteristics;
- (id)init;
- (void)removeValueForCharacteristic:(id)arg1;
- (void)setValue:(id)arg1 forCharacteristic:(id)arg2;
- (id)valueForCharacteristic:(id)arg1;

@end
