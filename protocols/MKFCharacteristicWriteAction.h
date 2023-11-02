
@protocol MKFCharacteristicWriteAction <MKFAction, MKFCharacteristicWriteActionPublicExtensions>

@required

- (<MKFHAPAccessory> *)accessory;
- (NSNumber *)characteristicID;
- (MKFCharacteristicWriteActionDatabaseID *)databaseID;
- (<MKFHome> *)home;
- (<MKFService> *)service;
- (void)setAccessory:(id <MKFHAPAccessory>)arg1;
- (void)setCharacteristicID:(NSNumber *)arg1;
- (void)setService:(id <MKFService>)arg1;
- (void)setTargetValue:(NSObject *)arg1;
- (NSObject *)targetValue;

@end
