
@protocol MKFIntegerCharacteristic <MKFCharacteristic, MKFIntegerCharacteristicPublicExtensions>

@required

- (MKFIntegerCharacteristicDatabaseID *)databaseID;
- (<MKFHome> *)home;
- (NSNumber *)maximumValue;
- (NSNumber *)minimumValue;
- (void)setMaximumValue:(NSNumber *)arg1;
- (void)setMinimumValue:(NSNumber *)arg1;
- (void)setStepValue:(NSNumber *)arg1;
- (void)setValidValues:(NSArray *)arg1;
- (NSNumber *)stepValue;
- (NSArray *)validValues;

@end
