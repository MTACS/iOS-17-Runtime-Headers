
@protocol MKFSoftwareUpdate <MKFModel, MKFSoftwareUpdatePublicExtensions>

@required

- (<MKFAccessory> *)accessory;
- (MKFSoftwareUpdateDatabaseID *)databaseID;
- (HMSoftwareUpdateDocumentationMetadata *)documentationMetadata;
- (NSNumber *)downloadSize;
- (<MKFHome> *)home;
- (NSNumber *)installDuration;
- (NSDate *)releaseDate;
- (void)setDocumentationMetadata:(HMSoftwareUpdateDocumentationMetadata *)arg1;
- (void)setDownloadSize:(NSNumber *)arg1;
- (void)setInstallDuration:(NSNumber *)arg1;
- (void)setReleaseDate:(NSDate *)arg1;
- (void)setSoftwareVersion:(HMFSoftwareVersion *)arg1;
- (void)setState:(NSNumber *)arg1;
- (void)setWriterTimestamp:(NSDate *)arg1;
- (HMFSoftwareVersion *)softwareVersion;
- (NSNumber *)state;
- (NSDate *)writerTimestamp;

@end
