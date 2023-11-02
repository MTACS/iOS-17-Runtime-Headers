
@protocol MKFRoom <MKFModel, MKFRoomPublicExtensions>

@required

- (NSArray *)accessories;
- (<MKFApplicationData> *)applicationData;
- (MKFRoomDatabaseID *)databaseID;
- (<MKFHome> *)home;
- (<MKFHome> *)homeDefault;
- (<MKFApplicationData> *)materializeOrCreateApplicationDataRelation:(bool*)arg1;
- (NSString *)name;
- (void)setApplicationData:(id <MKFApplicationData>)arg1;
- (void)setName:(NSString *)arg1;
- (void)setWriterTimestamp:(NSDate *)arg1;
- (NSDate *)writerTimestamp;
- (NSArray *)zones;

@end
