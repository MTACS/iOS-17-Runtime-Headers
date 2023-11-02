
@interface WFNANDiscoveryResultsTableViewDataSource : UITableViewDiffableDataSource {
    WFNANTableViewContext * _context;
    NSOrderedSet * _sections;
    WiFiAwareSubscriber * _subscriber;
}

@property (nonatomic, retain) WFNANTableViewContext *context;
@property (nonatomic, retain) NSOrderedSet *sections;
@property (nonatomic, retain) WiFiAwareSubscriber *subscriber;

- (void).cxx_destruct;
- (id)context;
- (id)initWithTableView:(id)arg1 context:(id)arg2 subscriber:(id)arg3 sections:(id)arg4 cellProvider:(id /* block */)arg5;
- (id)sections;
- (void)setContext:(id)arg1;
- (void)setSections:(id)arg1;
- (void)setSubscriber:(id)arg1;
- (id)subscriber;
- (bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;

@end
