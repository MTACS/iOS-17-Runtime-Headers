
@protocol MKFBulletinCondition <MKFModel, MKFBulletinConditionPublicExtensions>

@required

- (<MKFBulletinRegistration> *)bulletinRegistration;
- (MKFBulletinConditionDatabaseID *)databaseID;
- (<MKFHome> *)home;
- (void)setWriterTimestamp:(NSDate *)arg1;
- (NSDate *)writerTimestamp;

@end
