
@interface HDSourceOrderManager : NSObject {
    HDProfile * _profile;
    HDDatabaseValueCache * _sourceOrdersForTypeCache;
}

- (void).cxx_destruct;
- (bool)addOrderedSource:(id)arg1 objectTypes:(id)arg2 error:(id*)arg3;
- (bool)createSourceOrdersWithCodables:(id)arg1 error:(id*)arg2;
- (id)initWithProfile:(id)arg1;
- (id)orderedSourceIDsForObjectType:(id)arg1 error:(id*)arg2;
- (id)orderedSourceIDsWithUnorderedIDs:(id)arg1 objectType:(id)arg2 error:(id*)arg3;
- (id)orderedSourcesForObjectType:(id)arg1 error:(id*)arg2;
- (bool)resetCacheWithError:(id*)arg1;
- (void)resetCacheWithTransaction:(id)arg1;
- (bool)updateOrderedSources:(id)arg1 forObjectType:(id)arg2 error:(id*)arg3;

@end
