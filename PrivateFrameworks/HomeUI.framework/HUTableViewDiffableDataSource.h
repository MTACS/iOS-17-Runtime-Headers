
@interface HUTableViewDiffableDataSource : UITableViewDiffableDataSource {
    <HUTableViewDiffableDataSourceDelegate> * _delegate;
}

@property (nonatomic) <HUTableViewDiffableDataSourceDelegate> *delegate;

- (void).cxx_destruct;
- (id)delegate;
- (id)initWithTableView:(id)arg1 cellProvider:(id /* block */)arg2 delegate:(id)arg3;
- (bool)respondsToSelector:(SEL)arg1;
- (void)setDelegate:(id)arg1;
- (bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (bool)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;

@end
