
@interface CHSScreenshotManager : NSObject {
    NSURL * _baseURL;
    NSFileManager * _threadSafe_fileManager;
}

+ (id)basePath;
+ (id)sharedManager;

- (void).cxx_destruct;
- (id)URLForWidget:(id)arg1 metrics:(id)arg2 attributes:(id)arg3 createIntermediateDirectories:(bool)arg4;
- (void)deleteAllCachedScreenshots;
- (void)deleteAllCachedScreenshotsExcludingWidgets:(id)arg1;
- (void)deleteCachedScreenshotsMatchingWidget:(id)arg1;
- (id)initWithDirectory:(id)arg1 fileManager:(id)arg2;
- (id)snapshotContextForWidget:(id)arg1 metrics:(id)arg2 attributes:(id)arg3;

@end
