
@protocol MKFZone <MKFModel, MKFZonePublicExtensions>

@required

- (void)addRoomsObject:(id <MKFRoom>)arg1;
- (MKFZoneDatabaseID *)databaseID;
- (<MKFHome> *)home;
- (NSString *)name;
- (void)removeRoomsObject:(id <MKFRoom>)arg1;
- (NSArray *)rooms;
- (void)setName:(NSString *)arg1;
- (void)setWriterTimestamp:(NSDate *)arg1;
- (NSDate *)writerTimestamp;

@end
