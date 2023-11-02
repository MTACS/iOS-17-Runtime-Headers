
@interface PGMusicCatalogMonitor : NSObject

+ (bool)checkMusicCatalogEligibilityWithProgressReporter:(id)arg1;
+ (void)checkMusicCatalogEligibilityWithProgressReporter:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)clearCatalogMusicFromCacheWithPhotoLibrary:(id)arg1 progressReporter:(id)arg2 completionHandler:(id /* block */)arg3;

@end
