
@interface CKDDirectoryContext : NSObject {
    NSURL * _containerCloudKitDirectory;
    NSURL * _containerDirectory;
    NSString * _containerIdentifier;
    NSURL * _daemonCachesDirectory;
    NSURL * _daemonDatabaseDirectory;
    NSString * _dataSeparationHash;
    NSURL * _packageStagingDirectory;
}

@property (nonatomic, readonly) NSURL *assetDbDirectory;
@property (nonatomic, readonly) NSURL *containerCloudKitDirectory;
@property (nonatomic, readonly) NSURL *containerDirectory;
@property (nonatomic, readonly) NSString *containerIdentifier;
@property (nonatomic, readonly) NSURL *daemonCachesDirectory;
@property (nonatomic, readonly) NSURL *daemonDatabaseDirectory;
@property (nonatomic, readonly) NSString *dataSeparationHash;
@property (nonatomic, readonly) NSURL *fileDownloadDirectory;
@property (nonatomic, readonly) NSURL *frameworkCachesDirectory;
@property (nonatomic, readonly) NSURL *mmcsWorkingDirectory;
@property (nonatomic, readonly) NSURL *packageStagingDirectory;
@property (nonatomic, readonly) NSURL *recordCacheDirectory;
@property (nonatomic, readonly) NSURL *temporaryDirectory;

+ (id)daemonDatabaseDirectoryName;

- (void).cxx_destruct;
- (id)CKDescriptionPropertiesWithPublic:(bool)arg1 private:(bool)arg2 shouldExpand:(bool)arg3;
- (id)applicationCachesDirectoryForDataContainerDirectory:(id)arg1 usingHomeCachesDirectory:(bool)arg2;
- (id)assetDbDirectory;
- (id)containerCloudKitDirectory;
- (id)containerDirectory;
- (id)containerIdentifier;
- (id)daemonCachesDirectory;
- (id)daemonDatabaseDirectory;
- (id)dataSeparationHash;
- (id)description;
- (id)fileDownloadDirectory;
- (id)frameworkCachesDirectory;
- (id)initWithContainer:(id)arg1;
- (id)initWithTestRootDirectory:(id)arg1;
- (id)mmcsWorkingDirectory;
- (id)packageStagingDirectory;
- (id)recordCacheDirectory;
- (id)temporaryDirectory;

@end
