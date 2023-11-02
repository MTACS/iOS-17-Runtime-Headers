
@interface MNFilePaths : NSObject

+ (id)_cachesDirectoryPath;
+ (id)_homeDirectoryPath;
+ (bool)createFolderIfNotPresent:(id)arg1 error:(id*)arg2;
+ (id)navTempDirectoryPath;
+ (id)navTraceExtension;
+ (id)navTracesDirectoryPath;
+ (id)navdCacheDirectoryPath;
+ (id)routeHandleExtension;

@end
