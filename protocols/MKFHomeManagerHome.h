
@protocol MKFHomeManagerHome <MKFModel, MKFHomeManagerHomePublicExtensions>

@required

- (MKFHomeManagerHomeDatabaseID *)databaseID;
- (NSNumber *)deleted;
- (HMDHomeManagerHomeHandle *)handle;
- (<MKFHomeManager> *)homeManager;
- (<MKFHomeManager> *)homeManagerPrimary;
- (void)setDeleted:(NSNumber *)arg1;
- (void)setHandle:(HMDHomeManagerHomeHandle *)arg1;
- (void)setHomeManagerPrimary:(id <MKFHomeManager>)arg1;
- (void)setWriterTimestamp:(NSDate *)arg1;
- (NSDate *)writerTimestamp;

@end
