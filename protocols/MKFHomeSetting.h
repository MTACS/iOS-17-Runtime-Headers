
@protocol MKFHomeSetting <MKFModel, MKFHomeSettingPublicExtensions>

@required

- (MKFHomeSettingDatabaseID *)databaseID;
- (<MKFHome> *)home;
- (void)setWriterTimestamp:(NSDate *)arg1;
- (NSDate *)writerTimestamp;

@end
