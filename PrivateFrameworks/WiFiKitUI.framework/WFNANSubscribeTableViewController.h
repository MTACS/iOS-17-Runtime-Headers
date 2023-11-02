
@interface WFNANSubscribeTableViewController : WFInsetTableViewController {
    WFNANTableViewContext * _context;
    WFNANSubscribeTableViewDataSource * _dataSource;
    NSOrderedSet * _sections;
    NSString * _serviceName;
}

@property (nonatomic, retain) WFNANTableViewContext *context;
@property (nonatomic, retain) WFNANSubscribeTableViewDataSource *dataSource;
@property (nonatomic, retain) NSOrderedSet *sections;
@property (nonatomic, retain) NSString *serviceName;

- (void).cxx_destruct;
- (void)_configureDataSource;
- (id)_defaultSections;
- (void)_handleAddSubscriber;
- (void)_handleDiscoveryResultsChangedNotification:(id)arg1;
- (void)_handleSubscribersChangedNotification:(id)arg1;
- (id)_identifierForSection:(unsigned long long)arg1;
- (void)clearInputFields;
- (id)context;
- (id)dataSource;
- (void)dismissKeyboard;
- (id)initWithContext:(id)arg1;
- (id)sections;
- (id)serviceName;
- (void)setContext:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setSections:(id)arg1;
- (void)setServiceName:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;

@end
