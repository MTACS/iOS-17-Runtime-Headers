
@interface _CPLEngineScopeCache : NSObject {
    NSMutableDictionary * _scopeByCloudIndex;
    NSMutableDictionary * _scopeByLocalIndex;
    NSMutableDictionary * _scopeByStableIndex;
    NSMutableDictionary * _scopeCache;
    NSIndexSet * _validCloudIndexes;
    NSIndexSet * _validLocalIndexes;
}

- (void).cxx_destruct;
- (void)cacheScope:(id)arg1 forScopeStorage:(id)arg2;
- (void)cacheValidCloudIndexes:(id)arg1;
- (void)cacheValidLocalIndexes:(id)arg1;
- (id)init;
- (id)scopeWithCloudIndex:(long long)arg1;
- (id)scopeWithIdentifier:(id)arg1;
- (id)scopeWithLocalIndex:(long long)arg1;
- (id)scopeWithStableIndex:(long long)arg1;
- (id)validCloudIndexes;
- (id)validLocalIndexes;

@end
