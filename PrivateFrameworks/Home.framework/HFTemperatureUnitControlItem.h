
@interface HFTemperatureUnitControlItem : HFControlItem {
    NSString * _temperatureUnitCharacteristicType;
}

@property (nonatomic, readonly, copy) NSString *temperatureUnitCharacteristicType;

+ (Class)valueClass;

- (void).cxx_destruct;
- (id)characteristicValuesForValue:(id)arg1;
- (id)copyWithCharacteristicOptions:(id)arg1 valueSource:(id)arg2;
- (id)initWithValueSource:(id)arg1 characteristicOptions:(id)arg2 displayResults:(id)arg3;
- (id)initWithValueSource:(id)arg1 characteristicType:(id)arg2 displayResults:(id)arg3;
- (id)temperatureUnitCharacteristicType;
- (id)valueForCharacteristicValues:(id)arg1;

@end
