
@protocol MKFNotificationRegistrationCharacteristic <MKFNotificationRegistration, MKFNotificationRegistrationCharacteristicPublicExtensions>

@required

- (<MKFCharacteristic> *)characteristic;
- (MKFNotificationRegistrationCharacteristicDatabaseID *)databaseID;
- (<MKFHome> *)home;
- (void)setCharacteristic:(id <MKFCharacteristic>)arg1;

@end
