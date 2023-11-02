
@protocol MKFModel <MKFObject>

@required

- (MKFModelDatabaseID *)databaseID;
- (NSUUID *)modelID;
- (void)setWriterTimestamp:(NSDate *)arg1;
- (NSDate *)writerTimestamp;

@end
