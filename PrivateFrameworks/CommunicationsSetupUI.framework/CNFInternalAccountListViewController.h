
@interface CNFInternalAccountListViewController : PSListController {
    FTRegConnectionHandler * _connectionHandler;
    IMServiceImpl * _service;
}

@property (nonatomic, retain) IMServiceImpl *service;

- (void).cxx_destruct;
- (void)_handleAccountNotification:(id)arg1;
- (void)_handleDaemonConnected:(id)arg1;
- (void)_handleDaemonDisconnected:(id)arg1;
- (void)_startListeningForNotifications;
- (void)_stopListeningForNotifications;
- (id)accountNameForSpecifier:(id)arg1;
- (void)accountTappedWithSpecifier:(id)arg1;
- (id)initWithServiceType:(long long)arg1;
- (id)service;
- (void)setService:(id)arg1;
- (id)specifiers;
- (void)viewDidAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
