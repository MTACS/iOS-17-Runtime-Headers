
@interface CKVSearchCriteriaBuilder : NSObject {
    NSMutableSet * _fieldTypeFilters;
    NSMutableSet * _itemTypeFilters;
    NSMutableSet * _originAppIdFilters;
    unsigned char  _searchMode;
    NSArray * _searchTerms;
}

- (void).cxx_destruct;
- (bool)_setError:(id*)arg1 withCode:(long long)arg2;
- (id)addFieldTypeFilterWithCustomTypeNumber:(id)arg1 error:(id*)arg2;
- (id)addFieldTypeFilterWithNumber:(id)arg1 error:(id*)arg2;
- (id)addItemTypeFilterWithNumber:(id)arg1 error:(id*)arg2;
- (id)addOriginAppFilterWithAppId:(id)arg1 error:(id*)arg2;
- (id)build;
- (id)initWithSearchTerms:(id)arg1 searchMode:(unsigned char)arg2;

@end
