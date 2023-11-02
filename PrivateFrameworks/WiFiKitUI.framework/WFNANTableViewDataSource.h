
@interface WFNANTableViewDataSource : UITableViewDiffableDataSource {
    NSOrderedSet * _sections;
}

@property (nonatomic, retain) NSOrderedSet *sections;

- (void).cxx_destruct;
- (id)initWithTableView:(id)arg1 sections:(id)arg2 cellProvider:(id /* block */)arg3;
- (id)sections;
- (void)setSections:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;

@end
