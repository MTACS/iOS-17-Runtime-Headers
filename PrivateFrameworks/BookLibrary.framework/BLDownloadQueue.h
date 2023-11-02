
@interface BLDownloadQueue : BLDownloadQueueNonUI

+ (id)sharedInstance;

- (void)addDownloadsWithManifestRequest:(id)arg1 uiManager:(id)arg2 completion:(id /* block */)arg3;
- (void)purchaseWithRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)purchaseWithRequest:(id)arg1 uiManager:(id)arg2 completion:(id /* block */)arg3;
- (void)setAutomaticDownloadEnabled:(bool)arg1 uiManager:(id)arg2 withCompletion:(id /* block */)arg3;

@end
