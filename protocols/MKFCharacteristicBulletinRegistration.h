
@protocol MKFCharacteristicBulletinRegistration <MKFBulletinRegistration, MKFCharacteristicBulletinRegistrationPublicExtensions>

@required

- (<MKFCharacteristic> *)characteristic;
- (MKFCharacteristicBulletinRegistrationDatabaseID *)databaseID;
- (<MKFHome> *)home;
- (void)setCharacteristic:(id <MKFCharacteristic>)arg1;

@end
