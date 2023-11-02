
@interface WFNANDataSessionsTableViewDataSource : UITableViewDiffableDataSource {
    WFNANTableViewContext * _context;
    WiFiAwarePublisher * _publisher;
    NSOrderedSet * _sections;
}

@property (nonatomic, retain) WFNANTableViewContext *context;
@property (nonatomic, retain) WiFiAwarePublisher *publisher;
@property (nonatomic, retain) NSOrderedSet *sections;

- (void).cxx_destruct;
- (id)context;
- (id)initWithTableView:(id)arg1 context:(id)arg2 publisher:(id)arg3 sections:(id)arg4 cellProvider:(id /* block */)arg5;
- (id)publisher;
- (id)sections;
- (void)setContext:(id)arg1;
- (void)setPublisher:(id)arg1;
- (void)setSections:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;

@end
