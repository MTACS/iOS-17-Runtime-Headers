
@protocol MKFHAPMetadata <MKFModel, MKFHAPMetadataPublicExtensions>

@required

- (MKFHAPMetadataDatabaseID *)databaseID;
- (<MKFHomeManager> *)homeManager;
- (NSData *)legacyCloudData;
- (NSData *)legacyIDSData;
- (NSNumber *)metadataVersion;
- (NSData *)rawPlist;
- (NSNumber *)schemaVersion;
- (void)setLegacyCloudData:(NSData *)arg1;
- (void)setLegacyIDSData:(NSData *)arg1;
- (void)setMetadataVersion:(NSNumber *)arg1;
- (void)setRawPlist:(NSData *)arg1;
- (void)setSchemaVersion:(NSNumber *)arg1;
- (void)setWriterTimestamp:(NSDate *)arg1;
- (NSDate *)writerTimestamp;

@end
