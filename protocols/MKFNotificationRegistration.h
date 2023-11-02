
@protocol MKFNotificationRegistration <MKFModel, MKFNotificationRegistrationPublicExtensions>

@required

- (MKFNotificationRegistrationDatabaseID *)databaseID;
- (NSString *)deviceIdsDestination;
- (NSNumber *)enabled;
- (<MKFHome> *)home;
- (NSDate *)lastModified;
- (void)setDeviceIdsDestination:(NSString *)arg1;
- (void)setEnabled:(NSNumber *)arg1;
- (void)setLastModified:(NSDate *)arg1;
- (void)setWriterTimestamp:(NSDate *)arg1;
- (<MKFUser> *)user;
- (NSDate *)writerTimestamp;

@end
