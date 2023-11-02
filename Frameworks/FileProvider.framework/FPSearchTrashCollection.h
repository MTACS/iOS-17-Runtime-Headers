
@interface FPSearchTrashCollection : FPUnionCollection <FPSearchQueryResultsProviding> {
    FPSearchCollection * _searchCollection;
    NSPredicate * _searchQueryPredicate;
    unsigned long long  _selectedMembership;
    FPTrashUnionCollection * _trashCollection;
}

@property (nonatomic, copy) NSFileProviderSearchQuery *searchQuery;

- (void).cxx_destruct;
- (id)init;
- (bool)isCollectionValidForItem:(id)arg1;
- (id)scopedSearchQuery;
- (id)searchQuery;
- (void)setSearchQuery:(id)arg1;

@end
