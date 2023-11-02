
@protocol MKFStringCharacteristic <MKFCharacteristic, MKFStringCharacteristicPublicExtensions>

@required

- (MKFStringCharacteristicDatabaseID *)databaseID;
- (<MKFHome> *)home;
- (NSNumber *)maximumLength;
- (void)setMaximumLength:(NSNumber *)arg1;

@end
