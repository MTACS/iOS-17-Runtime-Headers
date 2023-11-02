
@interface SSUSandboxDirectories : NSObject {
    NSURL * _cacheDirectoryURL;
    NSURL * _installedAppsDirectoryURL;
}

@property (nonatomic, retain) NSURL *cacheDirectoryURL;
@property (nonatomic, retain) NSURL *installedAppsDirectoryURL;

- (void).cxx_destruct;
- (id)cacheDirectoryURL;
- (id)installedAppsDirectoryURL;
- (void)setCacheDirectoryURL:(id)arg1;
- (void)setInstalledAppsDirectoryURL:(id)arg1;

@end
