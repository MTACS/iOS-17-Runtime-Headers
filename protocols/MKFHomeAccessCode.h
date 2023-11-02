
@protocol MKFHomeAccessCode <MKFModel, MKFHomeAccessCodePublicExtensions>

@required

- (NSString *)accessCode;
- (MKFHomeAccessCodeDatabaseID *)databaseID;
- (void)setAccessCode:(NSString *)arg1;
- (void)setWriterTimestamp:(NSDate *)arg1;
- (NSDate *)writerTimestamp;

@end
