
@protocol MKFHAPAccessoryPublicExtensions

@required

+ (NSUUID *)modelIDForParentRelationshipTo:(id <MKFHome>)arg1;

- (<MKFCameraAccessModeBulletinRegistration> *)cameraAccessModeBulletinRegistrationWithDeviceIdsIdentifier:(NSUUID *)arg1 user:(id <MKFUser>)arg2 context:(NSManagedObjectContext *)arg3;
- (<MKFCameraReachabilityBulletinRegistration> *)cameraReachabilityBulletinRegistrationWithDeviceIdsIdentifier:(NSUUID *)arg1 user:(id <MKFUser>)arg2 context:(NSManagedObjectContext *)arg3;
- (<MKFCameraSignificantEventBulletinRegistration> *)cameraSignificantEventBulletinRegistrationWithDeviceIdsIdentifier:(NSUUID *)arg1 user:(id <MKFUser>)arg2 context:(NSManagedObjectContext *)arg3;
- (<MKFCharacteristic> *)characteristicFromInstanceID:(NSNumber *)arg1 context:(NSManagedObjectContext *)arg2;

@end
