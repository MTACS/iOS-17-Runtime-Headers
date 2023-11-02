
@interface CPLCloudCacheBaseView : CPLRecordStorageView {
    CPLEngineCloudCache * _cloudCache;
    bool  _useFinal;
}

@property (nonatomic, readonly) CPLEngineCloudCache *cloudCache;
@property (nonatomic, readonly) bool useFinal;

- (void).cxx_destruct;
- (id)cloudCache;
- (id)description;
- (id)initWithCloudCache:(id)arg1 useFinal:(bool)arg2;
- (id)recordViewWithScopedIdentifier:(id)arg1;
- (id)recordViewsWithRelatedScopedIdentifier:(id)arg1 class:(Class)arg2;
- (id)redactedDescription;
- (bool)useFinal;

@end
