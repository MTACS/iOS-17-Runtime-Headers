
@protocol BCContainerConfiguration <NSObject>

@required

+ (<BCContainerConfiguration> *)configuration;

- (NSString *)appBundleIdentifier;
- (NSArray *)appZones;
- (NSString *)containerIdentifier;
- (NSString *)dbArchiveExtension;
- (NSString *)dbArchiveFilename;
- (NSString *)dbArchiveFolderName;
- (NSString *)dbSubscriptionID;
- (NSString *)queueIdentifier;
- (bool)requiresDeviceToDeviceEncryption;
- (NSArray *)serviceZones;
- (bool)shouldArchiveData:(id <BCCloudData>)arg1;
- (bool)shouldPerformDatabaseSubscriptionForServiceMode:(bool)arg1;

@end
