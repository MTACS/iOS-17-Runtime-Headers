
@interface SBHIconTableViewDiffableDataSource : UITableViewDiffableDataSource {
    SBHTableViewIconLibrary * _iconLibrary;
    SBHIconLibraryQueryResult * _queryResult;
}

@property (nonatomic, retain) SBHTableViewIconLibrary *iconLibrary;
@property (nonatomic, readonly) SBHIconLibraryQueryResult *queryResult;

- (void).cxx_destruct;
- (void)applyQueryResult:(id)arg1 animatingDifferences:(bool)arg2;
- (void)applyQueryResult:(id)arg1 animatingDifferences:(bool)arg2 completion:(id /* block */)arg3;
- (void)applySnapshot:(id)arg1 animatingDifferences:(bool)arg2 completion:(id /* block */)arg3;
- (id)iconLibrary;
- (id)queryResult;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (void)setIconLibrary:(id)arg1;
- (long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;

@end
