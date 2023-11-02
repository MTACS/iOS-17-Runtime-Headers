
@protocol MKFFloatCharacteristic <MKFCharacteristic, MKFFloatCharacteristicPublicExtensions>

@required

- (MKFFloatCharacteristicDatabaseID *)databaseID;
- (<MKFHome> *)home;
- (NSNumber *)maximumValue;
- (NSNumber *)minimumValue;
- (void)setMaximumValue:(NSNumber *)arg1;
- (void)setMinimumValue:(NSNumber *)arg1;
- (void)setStepValue:(NSNumber *)arg1;
- (NSNumber *)stepValue;

@end
