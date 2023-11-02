
@protocol MKFAccount <MKFModel, MKFAccountPublicExtensions>

@required

- (MKFAccountDatabaseID *)databaseID;
- (NSArray *)devices;
- (<MKFDevice> *)findDevicesRelationWithModelID:(NSUUID *)arg1;
- (<MKFAccountHandle> *)findHandlesRelationWithModelID:(NSUUID *)arg1;
- (NSArray *)handles;
- (<MKFHomeManager> *)homeManager;
- (HMDAccountIdentifier *)identifier;
- (NSNumber *)local;
- (<MKFDevice> *)materializeOrCreateDevicesRelationWithModelID:(NSUUID *)arg1 createdNew:(bool*)arg2;
- (<MKFAccountHandle> *)materializeOrCreateHandlesRelationWithModelID:(NSUUID *)arg1 createdNew:(bool*)arg2;
- (void)setIdentifier:(HMDAccountIdentifier *)arg1;
- (void)setLocal:(NSNumber *)arg1;
- (void)setWriterTimestamp:(NSDate *)arg1;
- (void)synchronizeDevicesRelationWith:(NSArray *)arg1;
- (void)synchronizeHandlesRelationWith:(NSArray *)arg1;
- (NSDate *)writerTimestamp;

@end
