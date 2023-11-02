
@protocol MKFCameraReachabilityBulletinRegistration <MKFBulletinRegistration, MKFCameraReachabilityBulletinRegistrationPublicExtensions>

@required

- (<MKFAccessory> *)accessory;
- (MKFCameraReachabilityBulletinRegistrationDatabaseID *)databaseID;
- (<MKFHome> *)home;
- (void)setAccessory:(id <MKFAccessory>)arg1;

@end
