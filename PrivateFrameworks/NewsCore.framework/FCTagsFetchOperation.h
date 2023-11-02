
@interface FCTagsFetchOperation : FCMultiStepFetchOperation {
    FCAssetManager * _assetManager;
    unsigned long long  _childrenCachePolicy;
    double  _childrenMaximumCachedAge;
    <FCTagsFetchOperationDelegate> * _delegate;
    FCHeldRecords * _heldChildTagRecords;
    FCHeldRecords * _heldParentTagRecords;
    FCHeldRecords * _heldTagRecords;
    bool  _includeChildren;
    bool  _includeParents;
    bool  _overrideChildrenCachePolicy;
    bool  _overrideTargetsCachePolicy;
    NSArray * _tagIDs;
    FCTagRecordSource * _tagRecordSource;
    unsigned long long  _targetsCachePolicy;
    double  _targetsMaximumCachedAge;
}

@property unsigned long long childrenCachePolicy;
@property double childrenMaximumCachedAge;
@property (nonatomic) bool includeChildren;
@property (nonatomic) bool includeParents;
@property bool overrideChildrenCachePolicy;
@property bool overrideTargetsCachePolicy;
@property unsigned long long targetsCachePolicy;
@property double targetsMaximumCachedAge;

- (void).cxx_destruct;
- (unsigned long long)childrenCachePolicy;
- (double)childrenMaximumCachedAge;
- (id)completeFetchOperation;
- (void)customizeChildOperation:(id)arg1 forFetchStep:(SEL)arg2;
- (id)fetchChildTagRecordsWithCompletion:(id /* block */)arg1;
- (id)fetchParentTagRecordsWithCompletion:(id /* block */)arg1;
- (id)fetchTagRecordsWithCompletion:(id /* block */)arg1;
- (bool)includeChildren;
- (bool)includeParents;
- (id)initWithTagIDs:(id)arg1 tagRecordSource:(id)arg2 assetManager:(id)arg3 delegate:(id)arg4;
- (bool)overrideChildrenCachePolicy;
- (bool)overrideTargetsCachePolicy;
- (void)setChildrenCachePolicy:(unsigned long long)arg1;
- (void)setChildrenMaximumCachedAge:(double)arg1;
- (void)setIncludeChildren:(bool)arg1;
- (void)setIncludeParents:(bool)arg1;
- (void)setOverrideChildrenCachePolicy:(bool)arg1;
- (void)setOverrideTargetsCachePolicy:(bool)arg1;
- (void)setTargetsCachePolicy:(unsigned long long)arg1;
- (void)setTargetsMaximumCachedAge:(double)arg1;
- (unsigned long long)targetsCachePolicy;
- (double)targetsMaximumCachedAge;

@end
