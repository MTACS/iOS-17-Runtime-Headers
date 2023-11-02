
@protocol FCContentContextInternal <NSObject, FCCacheFlushing>

@required

- (FCArticleListRecordSource *)articleListRecordSource;
- (FCArticleRecordSource *)articleRecordSource;
- (<FCAssetKeyCacheType> *)assetKeyCache;
- (<FCAssetKeyManagerType> *)assetKeyManager;
- (FCAudioConfigRecordSource *)audioConfigRecordSource;
- (<FCAVAssetCacheType> *)avAssetCache;
- (FCAVAssetDownloadManager *)avAssetDownloadManager;
- (<FCAVAssetFactoryType> *)avAssetFactory;
- (<FCAVAssetKeyCacheType> *)avAssetKeyCache;
- (FCChannelMembershipController *)channelMembershipController;
- (FCCKContentDatabase *)contentDatabase;
- (FCFeedDatabase *)feedDatabase;
- (FCFeedPrewarmer *)feedPrewarmer;
- (FCForYouConfigRecordSource *)forYouConfigRecordSource;
- (FCIssueListRecordSource *)issueListRecordSource;
- (FCIssueRecordSource *)issueRecordSource;
- (FCPurchaseLookupRecordSource *)purchaseLookupRecordSource;
- (NSArray *)recordSources;
- (FCResourceRecordSource *)resourceRecordSource;
- (FCTagListRecordSource *)tagListRecordSource;
- (FCTagRecordSource *)tagRecordSource;
- (FCWidgetSectionConfigRecordSource *)widgetSectionConfigRecordSource;

@end
