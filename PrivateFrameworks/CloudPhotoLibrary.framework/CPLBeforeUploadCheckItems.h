
@interface CPLBeforeUploadCheckItems : NSObject {
    NSMutableDictionary * _additionalRecords;
    NSMutableDictionary * _assetsWithResourcesToUpload;
    NSMutableSet * _fetchRules;
    NSDictionary * _foundRecords;
    bool  _hasDroppedSomeResources;
    NSDictionary * _items;
    NSMutableDictionary * _itemsToReinject;
    NSMutableDictionary * _nonAssetsWithResourcesToUpload;
    CPLChangeBatch * _originalBatch;
    <CPLBeforeUploadCheckItemsProvider> * _provider;
    unsigned long long  _pushRepositoryPriority;
    NSMutableSet * _recordsToFetch;
    long long  _ruleGroups;
    NSString * _sharingScopeIdentifier;
    CPLRecordTargetMapping * _targetMapping;
}

@property (nonatomic, readonly) CPLChangeBatch *batchToUpload;
@property (nonatomic, readonly) unsigned long long countOfAssetsWithResourcesToUpload;
@property (nonatomic, readonly) unsigned long long estimatedUploadResourceSize;
@property (nonatomic, readonly) NSArray *fetchRules;
@property (nonatomic, readonly) bool hasDroppedSomeResources;
@property (nonatomic, readonly) NSDictionary *itemsToReinject;
@property (nonatomic, readonly) CPLChangeBatch *originalBatch;
@property (nonatomic, readonly) <CPLBeforeUploadCheckItemsProvider> *provider;
@property (nonatomic, readonly) unsigned long long pushRepositoryPriority;
@property (nonatomic, readonly) NSArray *recordsNeedingGeneratedDerivatives;
@property (nonatomic, readonly) NSArray *recordsToFetch;
@property (nonatomic, readonly) long long ruleGroups;
@property (nonatomic, copy) NSString *sharingScopeIdentifier;
@property (nonatomic, readonly) bool shouldResetExceedingQuotaOnSuccessfulUpload;
@property (nonatomic, readonly) CPLRecordTargetMapping *targetMapping;
@property (nonatomic, readonly) bool willUploadSomeResources;

- (void).cxx_destruct;
- (void)addAdditionalRecordWithScopedIdentifierToUploadBatch:(id)arg1;
- (id)batchToUpload;
- (bool)checkBatchWithFoundRecords:(id)arg1 error:(id*)arg2;
- (unsigned long long)countOfAssetsWithResourcesToUpload;
- (unsigned long long)estimatedUploadResourceSize;
- (id)fetchRules;
- (bool)hasDroppedSomeResources;
- (id)initWithBatch:(id)arg1 targetMapping:(id)arg2 ruleGroups:(long long)arg3 pushRepositoryPriority:(unsigned long long)arg4 provider:(id)arg5;
- (void)itemShouldBeReinjectedInPushRepository:(id)arg1;
- (void)itemWillDropResourceChange:(id)arg1;
- (id)itemWithScopedIdentifier:(id)arg1;
- (id)itemsToReinject;
- (id)originalBatch;
- (bool)prepareBatchBeforeUploadWithError:(id*)arg1;
- (id)provider;
- (unsigned long long)pushRepositoryPriority;
- (id)recordFromTransportWithScopedIdentifier:(id)arg1;
- (id)recordsNeedingGeneratedDerivatives;
- (id)recordsToFetch;
- (bool)requestFetchOfRecordWithScopedIdentifier:(id)arg1 forItem:(id)arg2 rule:(id)arg3 error:(id*)arg4;
- (long long)ruleGroups;
- (void)setSharingScopeIdentifier:(id)arg1;
- (id)sharingScopeIdentifier;
- (bool)shouldResetExceedingQuotaOnSuccessfulUpload;
- (id)targetMapping;
- (bool)transportHasRecordWithScopedIdentifier:(id)arg1;
- (id)willUploadCloudResource:(id)arg1 localResource:(id)arg2 forItem:(id)arg3 error:(id*)arg4;
- (bool)willUploadSomeResources;

@end
