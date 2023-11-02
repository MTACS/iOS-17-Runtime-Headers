
@interface WFNANDataSessionsTableViewController : WFInsetTableViewController {
    WFNANTableViewContext * _context;
    WFNANDataSessionsTableViewDataSource * _dataSource;
    WiFiAwarePublisher * _publisher;
    NSOrderedSet * _sections;
}

@property (nonatomic, retain) WFNANTableViewContext *context;
@property (nonatomic, retain) WFNANDataSessionsTableViewDataSource *dataSource;
@property (nonatomic, retain) WiFiAwarePublisher *publisher;
@property (nonatomic, retain) NSOrderedSet *sections;

- (void).cxx_destruct;
- (void)_configureDataSource;
- (id)_defaultSections;
- (void)_handleDataSessionsChangedNotification:(id)arg1;
- (id)_identifierForSection:(unsigned long long)arg1;
- (id)context;
- (id)dataSource;
- (id)initWithContext:(id)arg1 forPublisher:(id)arg2;
- (id)publisher;
- (id)sections;
- (void)setContext:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setPublisher:(id)arg1;
- (void)setSections:(id)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;

@end
