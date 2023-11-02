
@protocol MKFCameraAccessModeBulletinRegistration <MKFBulletinRegistration, MKFCameraAccessModeBulletinRegistrationPublicExtensions>

@required

- (<MKFAccessory> *)accessory;
- (MKFCameraAccessModeBulletinRegistrationDatabaseID *)databaseID;
- (<MKFHome> *)home;
- (void)setAccessory:(id <MKFAccessory>)arg1;

@end
