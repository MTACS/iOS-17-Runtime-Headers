
@protocol MKFNotificationRegistrationMediaProperty <MKFNotificationRegistration, MKFNotificationRegistrationMediaPropertyPublicExtensions>

@required

- (<MKFAccessory> *)accessory;
- (MKFNotificationRegistrationMediaPropertyDatabaseID *)databaseID;
- (<MKFHome> *)home;
- (NSUUID *)mediaProfileIdentifier;
- (NSString *)mediaProperty;
- (void)setAccessory:(id <MKFAccessory>)arg1;
- (void)setMediaProfileIdentifier:(NSUUID *)arg1;
- (void)setMediaProperty:(NSString *)arg1;

@end
