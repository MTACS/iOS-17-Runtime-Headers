
@interface FCESLInventory : NSObject <FCESLInventoryType> {
    NSString * _cacheDataPath;
    FCCloudContext * _context;
    FCAsyncSerialQueue * _feedItemsRefreshSerialQueue;
    NTPBFeedItemInventory * _latestInventory;
    FCOnce * _loadFromCacheOnce;
}

@property (nonatomic, readonly) NSArray *allFeedItems;
@property (nonatomic, readonly) NSString *cacheDataPath;
@property (nonatomic, readonly) FCCloudContext *context;
@property (nonatomic, readonly) FCAsyncSerialQueue *feedItemsRefreshSerialQueue;
@property (retain) NTPBFeedItemInventory *latestInventory;
@property (nonatomic, readonly) FCOnce *loadFromCacheOnce;

- (void).cxx_destruct;
- (bool)_isRefreshNeeded;
- (id)_loadInventoryFromCache;
- (void)_prepareForUse;
- (id)_promiseConfiguration;
- (id)_promiseEvergreenFeedItemsWithConfiguration:(id)arg1;
- (id)_promiseFeedItemsWithIssues:(id)arg1 configuration:(id)arg2;
- (id)_promiseIssueFeedItemsWithConfiguration:(id)arg1;
- (id)_promiseIssuesWithConfiguration:(id)arg1;
- (id)_refreshIfNeeded;
- (id)allFeedItemScoreProfilesForConfigurationSet:(long long)arg1;
- (id)allFeedItems;
- (id)allFeedItemsWithTopic:(id)arg1;
- (id)cacheDataPath;
- (id)context;
- (id)feedItemsRefreshSerialQueue;
- (id)init;
- (id)initWithContext:(id)arg1 cacheDirectory:(id)arg2;
- (id)latestInventory;
- (id)loadFromCacheOnce;
- (void)populateScoreProfilesForFeedItems:(id)arg1;
- (void)populateScoreProfilesForFeedItems:(id)arg1 configurationSet:(long long)arg2;
- (void)setLatestInventory:(id)arg1;

@end
