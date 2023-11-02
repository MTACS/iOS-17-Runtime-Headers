
@interface APConfigurationResponseHandler : NSObject {
    NSFileManager * _fileManager;
    NSString * _pathToConfig;
    NSString * _pathToTempDir;
    NSString * _pathToTraverse;
}

@property (nonatomic, readonly) NSFileManager *fileManager;
@property (nonatomic, readonly) NSString *pathToConfig;
@property (nonatomic, readonly) NSString *pathToTempDir;
@property (nonatomic, readonly) NSString *pathToTraverse;

- (void).cxx_destruct;
- (bool)_copyCurrentConfigToTraverse;
- (bool)_createTempDirectory;
- (bool)_removeTempDirectory;
- (bool)_replaceConfigWithNewHierarchy;
- (id)_tempConfigPath;
- (bool)_writeCompressedFileWithData:(id)arg1 atPath:(id)arg2;
- (id)fileManager;
- (id)init;
- (id)pathToConfig;
- (id)pathToTempDir;
- (id)pathToTraverse;
- (long long)processResponseWithData:(id)arg1;

@end
