
@interface PGWrapperMusicCatalogMonitor : NSObject

+ (bool)checkMusicCatalogEligibilityWithProgressReporter:(id)arg1;
+ (void)checkMusicCatalogEligibilityWithProgressReporter:(id)arg1 completionHandler:(id /* block */)arg2;
+ (bool)clearCatalogMusicFromCacheWithPhotoLibrary:(id)arg1 progressReporter:(id)arg2 error:(id*)arg3;

- (id)init;

@end
