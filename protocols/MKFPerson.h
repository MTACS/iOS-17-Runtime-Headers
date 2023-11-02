
@protocol MKFPerson <MKFModel, MKFPersonPublicExtensions>

@required

- (MKFPersonDatabaseID *)databaseID;
- (NSString *)name;
- (void)setName:(NSString *)arg1;
- (void)setWriterTimestamp:(NSDate *)arg1;
- (NSDate *)writerTimestamp;

@end
