
@protocol FCContentContext <NSObject, FCCacheFlushing>

@required

- (<FCNewsAppConfigurationManager> *)appConfigurationManager;
- (FCArticleController *)articleController;
- (NSURL *)assetCacheDirectoryURL;
- (FCAssetManager *)assetManager;
- (<FCAVAssetFactoryType> *)avAssetFactory;
- (<FCAVAssetPrewarming> *)avAssetPrewarmer;
- (<FCBackgroundTaskable> *)backgroundTaskable;
- (<FCCoreConfigurationManager> *)configurationManager;
- (NSString *)contentDirectory;
- (NSString *)contentEnvironment;
- (NSString *)contentEnvironmentToken;
- (NSString *)contentStoreFrontID;
- (FCHeldRecords *)convertRecords:(NSArray *)arg1;
- (void)enableFlushingWithFlushingThreshold:(unsigned long long)arg1 exceptForFlusher:(id <FCCacheFlushing>)arg2;
- (<FCFeedDatabaseProtocol> *)feedDatabase;
- (FCFlintResourceManager *)flintResourceManager;
- (FCInterestToken *)interestTokenForContentManifest:(FCContentManifest *)arg1;
- (<FCContentContextInternal> *)internalContentContext;
- (<FCMagazinesConfigurationManager> *)magazinesConfigurationManager;
- (FCNetworkBehaviorMonitor *)networkBehaviorMonitor;
- (<FCCoreConfigurationManager><FCNewsAppConfigurationManager> *)news_core_ConfigurationManager;
- (<FCPPTContext> *)pptContext;
- (void)ppt_overrideFeedEndpoint:(long long)arg1;
- (void)ppt_prewarmFeedDatabase;
- (FCPuzzleController *)puzzleController;
- (FCPuzzleTypeController *)puzzleTypeController;
- (<FCJSONRecordSourceType> *)recordSourceWithSchema:(FCJSONRecordSourceSchema *)arg1;
- (<FCJSONRecordTreeSourceType> *)recordTreeSourceWithRecordSources:(NSArray *)arg1;
- (FCSportsEventController *)sportsEventController;
- (NSString *)supportedContentStoreFrontID;
- (NSString *)tabiModelsContentDirectory;
- (NSString *)tabiResourcesContentDirectory;
- (FCTagController *)tagController;

@end
