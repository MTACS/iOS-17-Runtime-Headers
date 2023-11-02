
@interface FCTagController : NSObject <FCCoreConfigurationObserving, FCJSONEncodableObjectProviding, FCOperationThrottlerDelegate, FCTagsFetchOperationDelegate> {
    FCAssetManager * _assetManager;
    <FCCoreConfigurationManager> * _configurationManager;
    FCCKContentDatabase * _contentDatabase;
    FCThreadSafeMutableDictionary * _fastCache;
    NSMutableDictionary * _prefetchedTags;
    FCThreadSafeMutableSet * _tagIDsNeedingRefresh;
    FCOperationThrottler * _tagPrefetchThrottler;
    FCTagRecordSource * _tagRecordSource;
    FCOperationThrottler * _tagRefreshThrottler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool shouldPrefetchGlobalTags;
@property (readonly) Class superclass;

+ (bool)isTagAllowed:(id)arg1;
+ (bool)isTagAllowedForNewsVersion:(id)arg1;
+ (bool)isTagAllowedInContentStoreFront:(id)arg1;

- (void).cxx_destruct;
- (id)channelsForTagRecords:(id)arg1;
- (void)configurationManager:(id)arg1 configurationDidChange:(id)arg2;
- (void)dealloc;
- (id)expectedFastCachedTagForID:(id)arg1;
- (id)fastCachedTagForID:(id)arg1;
- (id)fastCachedTagsForIDs:(id)arg1;
- (id)fetchOperationForTagsIncludingChildrenWithIDs:(id)arg1 softMaxAge:(double)arg2;
- (id)fetchOperationForTagsWithIDs:(id)arg1;
- (id)fetchOperationForTagsWithIDs:(id)arg1 includeChildren:(bool)arg2;
- (id)fetchOperationForTagsWithIDs:(id)arg1 includeParents:(bool)arg2;
- (void)fetchTagForTagID:(id)arg1 qualityOfService:(long long)arg2 callbackQueue:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)fetchTagsForTagIDs:(id)arg1 cachePolicy:(id)arg2 qualityOfService:(long long)arg3 completionHandler:(id /* block */)arg4;
- (void)fetchTagsForTagIDs:(id)arg1 includeParents:(bool)arg2 includeChildren:(bool)arg3 qualityOfService:(long long)arg4 callbackQueue:(id)arg5 completionHandler:(id /* block */)arg6;
- (void)fetchTagsForTagIDs:(id)arg1 maximumCachedAge:(double)arg2 qualityOfService:(long long)arg3 completionHandler:(id /* block */)arg4;
- (void)fetchTagsForTagIDs:(id)arg1 qualityOfService:(long long)arg2 callbackQueue:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)init;
- (id)initWithContentDatabase:(id)arg1 assetManager:(id)arg2 tagRecordSource:(id)arg3 configurationManager:(id)arg4;
- (id)jsonEncodableObject;
- (void)operationThrottler:(id)arg1 performAsyncOperationWithCompletion:(id /* block */)arg2;
- (void)saveTagsToCache:(id)arg1;
- (void)setShouldPrefetchGlobalTags:(bool)arg1;
- (bool)shouldPrefetchGlobalTags;
- (id)slowCachedTagForID:(id)arg1;
- (id)slowCachedTagsForIDs:(id)arg1;
- (void)tagsFetchOperation:(id)arg1 didFetchTags:(id)arg2;
- (id)tagsForTagIDs:(id)arg1;
- (id)tagsForTagIDs:(id)arg1 predicate:(id /* block */)arg2;
- (id)tagsForTagRecords:(id)arg1;

@end
