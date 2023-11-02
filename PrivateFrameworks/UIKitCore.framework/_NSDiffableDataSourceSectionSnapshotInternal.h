
@interface _NSDiffableDataSourceSectionSnapshotInternal : _NSDiffableDataSourceSectionSnapshot

- (void)appendItems:(id)arg1;
- (void)appendItems:(id)arg1 intoParent:(id)arg2;
- (id)childrenOfParent:(id)arg1;
- (id)childrenOfParent:(id)arg1 recursive:(bool)arg2;
- (void)collapseItems:(id)arg1;
- (bool)containsItem:(id)arg1;
- (void)deleteItems:(id)arg1;
- (void)expandItems:(id)arg1;
- (void)insertItems:(id)arg1 afterItem:(id)arg2;
- (void)insertItems:(id)arg1 beforeItem:(id)arg2;
- (bool)isExpanded:(id)arg1;
- (id)items;
- (id)parentOfChild:(id)arg1;
- (id)visibleItems;

@end
