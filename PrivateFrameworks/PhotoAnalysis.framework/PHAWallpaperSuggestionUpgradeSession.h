
@interface PHAWallpaperSuggestionUpgradeSession : NSObject {
    NSObject<OS_os_log> * _loggingConnection;
    VCPMediaAnalysisService * _mediaAnalysisService;
    PRSService * _posterService;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableSet * _upgradeSessions;
}

- (void).cxx_destruct;
- (bool)beginUpgradeSessionAtURL:(id)arg1;
- (bool)endUpgradeSessionAtURL:(id)arg1;
- (void)fetchPosterConfigurationWithAssetDirectory:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (void)refreshPosterConfiguration:(id)arg1 withSessionURL:(id)arg2 completion:(id /* block */)arg3;
- (void)upgradePosterConfiguration:(id)arg1 options:(id)arg2 completion:(id /* block */)arg3;
- (void)upgradePosterConfiguration:(id)arg1 withSessionURL:(id)arg2 localIdentifier:(id)arg3 options:(id)arg4 completion:(id /* block */)arg5;
- (void)upgradePosterConfiguration:(id)arg1 withSessionURL:(id)arg2 options:(id)arg3 completion:(id /* block */)arg4;
- (void)upgradePosterConfigurationWithAssetDirectory:(id)arg1 options:(id)arg2 completion:(id /* block */)arg3;
- (id)upgradeSessionURLForPosterConfiguration:(id)arg1;

@end
