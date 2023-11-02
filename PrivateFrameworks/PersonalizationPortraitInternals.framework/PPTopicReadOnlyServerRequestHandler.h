
@interface PPTopicReadOnlyServerRequestHandler : NSObject <PPTopicReadOnlyServerProtocol> {
    _PASBundleIdResolver * _bundleIdResolver;
    NSString * _clientProcessName;
    <PPTopicClientProtocol> * _clientProxy;
    PPXPCServerPipelinedBatchQueryManager * _queryManager;
}

@property (nonatomic, retain) _PASBundleIdResolver *bundleIdResolver;
@property (nonatomic, copy) NSString *clientProcessName;

+ (id)filterQIDDictionary:(id)arg1 withAllowlistOfProcess:(id)arg2 allowlist:(id)arg3;
+ (id)filterScoredTopicsNotInAllowlist:(id)arg1 withAllowlistOfProcess:(id)arg2 allowlist:(id)arg3;
+ (id)filterTopicRecordsNotInAllowlist:(id)arg1 withAllowlistOfProcess:(id)arg2 allowlist:(id)arg3;

- (void).cxx_destruct;
- (id)bundleIdResolver;
- (void)cachePath:(id /* block */)arg1;
- (id)clientProcessName;
- (id)init;
- (void)rankedTopicsWithQuery:(id)arg1 queryId:(unsigned long long)arg2;
- (void)registerFeedback:(id)arg1 completion:(id /* block */)arg2;
- (void)registerUniversalSearchSpotlightFeedback:(id)arg1 completion:(id /* block */)arg2;
- (void)scoresForTopicMapping:(id)arg1 query:(id)arg2 queryId:(unsigned long long)arg3;
- (void)setBundleIdResolver:(id)arg1;
- (void)setClientProcessName:(id)arg1;
- (void)setRemoteObjectProxy:(id)arg1;
- (void)topicCacheSandboxExtensionToken:(id /* block */)arg1;
- (void)topicExtractionsFromText:(id)arg1 queryId:(unsigned long long)arg2;
- (void)topicRecordsWithQuery:(id)arg1 queryId:(unsigned long long)arg2;
- (void)unblockPendingQueries;
- (void)unmapMappedTopicIdentifier:(id)arg1 mappingIdentifier:(id)arg2 completion:(id /* block */)arg3;

@end
