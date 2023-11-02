
@protocol MKFResident <MKFModel, MKFResidentPublicExtensions>

@required

- (<MKFAppleMediaAccessory> *)appleMediaAccessory;
- (MKFResidentDatabaseID *)databaseID;
- (<MKFDevice> *)device;
- (<MKFHome> *)home;
- (NSString *)idsDestination;
- (NSUUID *)idsIdentifier;
- (NSString *)name;
- (NSNumber *)reachable;
- (NSData *)residentCapabilities;
- (void)setAppleMediaAccessory:(id <MKFAppleMediaAccessory>)arg1;
- (void)setDevice:(id <MKFDevice>)arg1;
- (void)setIdsDestination:(NSString *)arg1;
- (void)setIdsIdentifier:(NSUUID *)arg1;
- (void)setName:(NSString *)arg1;
- (void)setReachable:(NSNumber *)arg1;
- (void)setResidentCapabilities:(NSData *)arg1;
- (void)setWriterTimestamp:(NSDate *)arg1;
- (NSDate *)writerTimestamp;

@end
