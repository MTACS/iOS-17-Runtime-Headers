
@interface _UIDiffableDataSourceSnapshotter : _UIDiffableDataSource

- (void)applyDifferencesFromSnapshot:(id)arg1;
- (void)applyDifferencesFromSnapshot:(id)arg1 completion:(id /* block */)arg2;
- (void)applySnapshot:(id)arg1;
- (id)emptySnapshot;
- (void)reloadFromSnapshot:(id)arg1;
- (void)reloadFromSnapshot:(id)arg1 completion:(id /* block */)arg2;
- (id)snapshot;

@end
