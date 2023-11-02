
@interface WFNANTableViewController : WFInsetTableViewController {
    WFNANTableViewContext * _context;
    WFNANTableViewDataSource * _dataSource;
    NSOrderedSet * _sections;
}

@property (nonatomic, retain) WFNANTableViewContext *context;
@property (nonatomic, retain) WFNANTableViewDataSource *dataSource;
@property (nonatomic, retain) NSOrderedSet *sections;

- (void).cxx_destruct;
- (void)_configureDataSource;
- (id)_defaultSections;
- (void)_handlePublishersChangedNotification:(id)arg1;
- (void)_handleSubscribersChangedNotification:(id)arg1;
- (id)_identifierForSection:(unsigned long long)arg1;
- (bool)_isNANEnabled;
- (id)context;
- (id)dataSource;
- (id)init;
- (id)sections;
- (void)setContext:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setSections:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;

@end
