
@interface BLTHashCache : NSObject {
    NSMutableDictionary * _cacheBySectionID;
}

- (void).cxx_destruct;
- (void)_updateCacheWithItems:(id)arg1 forSectionID:(id)arg2 matchID:(id)arg3 result:(id /* block */)arg4;
- (id)init;
- (void)updateCacheWithItems:(id)arg1 forSectionID:(id)arg2 matchID:(id)arg3 result:(id /* block */)arg4;

@end
