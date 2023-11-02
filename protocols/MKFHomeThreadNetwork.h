
@protocol MKFHomeThreadNetwork <MKFModel, MKFHomeThreadNetworkPublicExtensions>

@required

- (MKFHomeThreadNetworkDatabaseID *)databaseID;
- (<MKFHome> *)home;
- (void)setThreadNetworkID:(NSString *)arg1;
- (void)setWriterTimestamp:(NSDate *)arg1;
- (NSString *)threadNetworkID;
- (NSDate *)writerTimestamp;

@end
