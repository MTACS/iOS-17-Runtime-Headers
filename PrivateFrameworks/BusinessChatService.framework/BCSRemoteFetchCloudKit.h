
@interface BCSRemoteFetchCloudKit : NSObject <BCSConfigRemoteFetching, BCSItemRemoteFetching, BCSMegashardRemoteFetching, BCSShardItemInstantiating, BCSShardRemoteFetching, BSDescriptionProviding> {
    <BCSBloomFilterExtractorProtocol> * _bloomFilterExtractor;
    <BCSCoalesceHelperProtocol> * _coalesceHelper;
    <BCSCloudKitDatabaseProtocol> * _database;
    CKContainer * _databaseContainer;
    <BCSICloudServerEnvironmentProtocol> * _environment;
    <BCSMetricFactoryProtocol> * _metricFactory;
    <BCSOperationGroupFactoryProtocol> * _operationGroupFactory;
    <BCSQueryOperationProtocol> * _queryOperation;
    <BCSQueryOperationFactoryProtocol> * _queryOperationFactory;
    <BCSCloudKitQueryProviding> * _queryProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)debugDescription;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)fetchConfigItemWithType:(long long)arg1 clientBundleID:(id)arg2 completion:(id /* block */)arg3;
- (void)fetchConfigItemWithType:(long long)arg1 clientBundleID:(id)arg2 xpcActivity:(id)arg3 completion:(id /* block */)arg4;
- (void)fetchItemsWithBucketStartIndex:(long long)arg1 endIndex:(long long)arg2 type:(long long)arg3 forClientBundleID:(id)arg4 completion:(id /* block */)arg5;
- (void)fetchMegashardItemWithType:(long long)arg1 clientBundleID:(id)arg2 completion:(id /* block */)arg3;
- (void)fetchMegashardItemWithType:(long long)arg1 clientBundleID:(id)arg2 xpcActivity:(id)arg3 completion:(id /* block */)arg4;
- (void)fetchShardMatching:(id)arg1 clientBundleID:(id)arg2 completion:(id /* block */)arg3;
- (id)initWithEnvironment:(id)arg1 database:(id)arg2 databaseContainer:(id)arg3 queryOperationFactory:(id)arg4 coalesceHelper:(id)arg5 bloomFilterExtractor:(id)arg6 operationGroupFactory:(id)arg7 metricFactory:(id)arg8;
- (id)shardItemFromURL:(id)arg1 type:(long long)arg2;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
