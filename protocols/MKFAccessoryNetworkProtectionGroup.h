
@protocol MKFAccessoryNetworkProtectionGroup <MKFModel, MKFAccessoryNetworkProtectionGroupPublicExtensions>

@required

- (NSNumber *)category;
- (MKFAccessoryNetworkProtectionGroupDatabaseID *)databaseID;
- (<MKFHome> *)home;
- (NSString *)manufacturer;
- (void)setCategory:(NSNumber *)arg1;
- (void)setManufacturer:(NSString *)arg1;
- (void)setTargetProtectionMode:(NSNumber *)arg1;
- (void)setWriterTimestamp:(NSDate *)arg1;
- (NSNumber *)targetProtectionMode;
- (NSDate *)writerTimestamp;

@end
