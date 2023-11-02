
@protocol MKFCameraSignificantEventBulletinRegistration <MKFBulletinRegistration, MKFCameraSignificantEventBulletinRegistrationPublicExtensions>

@required

- (<MKFAccessory> *)accessory;
- (MKFCameraSignificantEventBulletinRegistrationDatabaseID *)databaseID;
- (<MKFHome> *)home;
- (NSNumber *)notificationModes;
- (NSNumber *)personFamiliarityOptions;
- (void)setAccessory:(id <MKFAccessory>)arg1;
- (void)setNotificationModes:(NSNumber *)arg1;
- (void)setPersonFamiliarityOptions:(NSNumber *)arg1;
- (void)setSignificantEventTypes:(NSNumber *)arg1;
- (NSNumber *)significantEventTypes;

@end
