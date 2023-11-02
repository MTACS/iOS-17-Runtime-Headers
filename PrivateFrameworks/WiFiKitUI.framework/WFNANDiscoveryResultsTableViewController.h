
@interface WFNANDiscoveryResultsTableViewController : WFInsetTableViewController <WiFiAwareDataSessionDelegate> {
    WFNANTableViewContext * _context;
    WFNANDiscoveryResultsTableViewDataSource * _dataSource;
    NSString * _passphrase;
    NSOrderedSet * _sections;
    WiFiAwareSubscriber * _subscriber;
}

@property (nonatomic, retain) WFNANTableViewContext *context;
@property (nonatomic, retain) WFNANDiscoveryResultsTableViewDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *passphrase;
@property (nonatomic, retain) NSOrderedSet *sections;
@property (nonatomic, retain) WiFiAwareSubscriber *subscriber;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_configureDataSource;
- (id)_defaultSections;
- (void)_handleDataSessionsChangedNotification:(id)arg1;
- (void)_handleDiscoveryResultsChangedNotification:(id)arg1;
- (id)_identifierForSection:(unsigned long long)arg1;
- (id)context;
- (void)dataSession:(id)arg1 confirmedForPeerDataAddress:(id)arg2 serviceSpecificInfo:(id)arg3;
- (void)dataSession:(id)arg1 failedToStartWithError:(long long)arg2;
- (void)dataSession:(id)arg1 terminatedWithReason:(long long)arg2;
- (void)dataSessionRequestStarted:(id)arg1;
- (id)dataSource;
- (id)initWithContext:(id)arg1 forSubscriber:(id)arg2;
- (id)passphrase;
- (void)passphraseTextFieldDidChange:(id)arg1;
- (id)sections;
- (void)setContext:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setPassphrase:(id)arg1;
- (void)setSections:(id)arg1;
- (void)setSubscriber:(id)arg1;
- (id)subscriber;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;

@end
