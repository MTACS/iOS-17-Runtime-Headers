
@interface UITableViewDiffableDataSource : NSObject <UITableViewDataSource, _UIDiffableDataSourceIdentifying> {
    __UIDiffableDataSource * _impl;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long defaultRowAnimation;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) __UIDiffableDataSource *impl;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_applySnapshot:(id)arg1 animatingDifferences:(bool)arg2 completion:(id /* block */)arg3;
- (id)_diffableDataSourceImpl;
- (bool)_isDiffableDataSource;
- (bool)_subclassOverridesMethodWithSelector:(SEL)arg1;
- (void)applySnapshot:(id)arg1 animatingDifferences:(bool)arg2;
- (void)applySnapshot:(id)arg1 animatingDifferences:(bool)arg2 completion:(id /* block */)arg3;
- (void)applySnapshotUsingReloadData:(id)arg1;
- (void)applySnapshotUsingReloadData:(id)arg1 completion:(id /* block */)arg2;
- (long long)defaultRowAnimation;
- (id)description;
- (id)impl;
- (long long)indexForSectionIdentifier:(id)arg1;
- (id)indexPathForItemIdentifier:(id)arg1;
- (id)initWithTableView:(id)arg1 cellProvider:(id /* block */)arg2;
- (id)initWithViewUpdatesSink:(id)arg1;
- (id)itemIdentifierForIndexPath:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)sectionIdentifierForIndex:(long long)arg1;
- (void)setDefaultRowAnimation:(long long)arg1;
- (void)setImpl:(id)arg1;
- (id)snapshot;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)validateIdentifiers;

@end
