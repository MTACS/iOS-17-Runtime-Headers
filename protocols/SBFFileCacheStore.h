
@protocol SBFFileCacheStore <NSObject>

@required

- (NSFileWrapper *)fileCache:(SBFFileCache *)arg1 loadFileWrapperNamed:(NSString *)arg2;
- (void)fileCache:(SBFFileCache *)arg1 removeFileWrapperNamed:(NSString *)arg2;
- (void)fileCache:(SBFFileCache *)arg1 storeFileWrapper:(NSFileWrapper *)arg2;
- (void)removeAllFileWrappersForFileCache:(SBFFileCache *)arg1;

@end
