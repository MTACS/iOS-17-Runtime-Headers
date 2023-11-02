
@interface WFNANSubscribeTableViewDataSource : UITableViewDiffableDataSource {
    WFNANTableViewContext * _context;
    NSOrderedSet * _sections;
}

@property (nonatomic, retain) WFNANTableViewContext *context;
@property (nonatomic, retain) NSOrderedSet *sections;

- (void).cxx_destruct;
- (id)context;
- (id)initWithTableView:(id)arg1 context:(id)arg2 sections:(id)arg3 cellProvider:(id /* block */)arg4;
- (id)sections;
- (void)setContext:(id)arg1;
- (void)setSections:(id)arg1;
- (bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;

@end
