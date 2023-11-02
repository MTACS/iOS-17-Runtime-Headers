
@interface SFTableViewDiffableDataSource : UITableViewDiffableDataSource {
    <SFTableViewDiffableDataSourceDelegate> * _delegate;
}

@property (nonatomic) <SFTableViewDiffableDataSourceDelegate> *delegate;

- (void).cxx_destruct;
- (id)delegate;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;

@end
