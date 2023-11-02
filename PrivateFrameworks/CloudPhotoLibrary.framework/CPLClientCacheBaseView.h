
@interface CPLClientCacheBaseView : CPLRecordStorageView {
    CPLEngineCloudCache * _cloudCache;
    <CPLEngineIDMapping> * _idMapping;
    CPLEngineStore * _store;
}

@property (nonatomic, readonly) CPLEngineCloudCache *cloudCache;
@property (nonatomic, readonly) <CPLEngineIDMapping> *idMapping;
@property (nonatomic, readonly) CPLEngineStore *store;

+ (id)clientCacheBaseViewIDMappingForStore:(id)arg1;

- (void).cxx_destruct;
- (id)cloudCache;
- (unsigned long long)countOfRecordsWithRelatedScopedIdentifier:(id)arg1 class:(Class)arg2;
- (id)description;
- (bool)hasRecordWithScopedIdentifier:(id)arg1;
- (id)idMapping;
- (id)initWithStore:(id)arg1;
- (id)recordViewWithScopedIdentifier:(id)arg1;
- (id)recordViewsWithRelatedScopedIdentifier:(id)arg1 class:(Class)arg2;
- (id)redactedDescription;
- (id)relatedScopedIdentifierForRecordWithScopedIdentifier:(id)arg1;
- (id)store;

@end
