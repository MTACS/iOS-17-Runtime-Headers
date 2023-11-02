
@interface PKTableViewDiffableDataSource : UITableViewDiffableDataSource {
    id /* block */  _commitEditingHandler;
    id /* block */  _sectionFooterProvider;
    id /* block */  _sectionHeaderProvider;
}

@property (nonatomic, copy) id /* block */ commitEditingHandler;
@property (nonatomic, copy) id /* block */ sectionFooterProvider;
@property (nonatomic, copy) id /* block */ sectionHeaderProvider;

- (void).cxx_destruct;
- (id /* block */)commitEditingHandler;
- (id /* block */)sectionFooterProvider;
- (id /* block */)sectionHeaderProvider;
- (void)setCommitEditingHandler:(id /* block */)arg1;
- (void)setSectionFooterProvider:(id /* block */)arg1;
- (void)setSectionHeaderProvider:(id /* block */)arg1;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;

@end
