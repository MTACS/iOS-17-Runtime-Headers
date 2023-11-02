
@protocol MKFAccountHandle <MKFModel, MKFAccountHandlePublicExtensions>

@required

- (<MKFAccount> *)account;
- (MKFAccountHandleDatabaseID *)databaseID;
- (IDSURI *)idsURI;
- (NSNumber *)local;
- (void)setIdsURI:(IDSURI *)arg1;
- (void)setLocal:(NSNumber *)arg1;
- (void)setWriterTimestamp:(NSDate *)arg1;
- (NSDate *)writerTimestamp;

@end
