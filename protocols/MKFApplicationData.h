
@protocol MKFApplicationData <MKFModel, MKFApplicationDataPublicExtensions>

@required

- (<MKFAccessory> *)accessory;
- (<MKFActionSet> *)actionSet;
- (NSDictionary *)appDataDictionary;
- (MKFApplicationDataDatabaseID *)databaseID;
- (<MKFHome> *)home;
- (<MKFRoom> *)room;
- (<MKFService> *)service;
- (<MKFServiceGroup> *)serviceGroup;
- (void)setAppDataDictionary:(NSDictionary *)arg1;
- (void)setWriterTimestamp:(NSDate *)arg1;
- (NSDate *)writerTimestamp;

@end
