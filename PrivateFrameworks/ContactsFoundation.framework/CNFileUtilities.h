
@interface CNFileUtilities : NSObject {
    <CNFileServices> * _services;
}

+ (id)fileLock;
+ (id)initializeFileLock;
+ (id)os_log;
+ (id)requestSharedLockDirectoryURLWithFileServices:(id)arg1;
+ (id)sharedInstance;
+ (id)sharedLockDirectoryURLWithFileServices:(id)arg1;

- (void).cxx_destruct;
- (id)init;
- (id)initWithFileServices:(id)arg1;
- (bool)isFileAtUrlOnARemoteFileSystem:(id)arg1;
- (id)proxyLockUrlForFileAtUrl:(id)arg1;
- (id)sharedLockDirectoryUrl;
- (id)sharedLockUrlWithName:(id)arg1;

@end
