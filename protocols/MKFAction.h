
@protocol MKFAction <MKFModel, MKFActionPublicExtensions>

@required

- (<MKFActionSet> *)actionSet;
- (MKFActionDatabaseID *)databaseID;
- (<MKFHome> *)home;
- (void)setWriterTimestamp:(NSDate *)arg1;
- (NSDate *)writerTimestamp;

@end
