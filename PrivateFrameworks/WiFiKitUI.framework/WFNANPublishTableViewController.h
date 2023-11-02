
@interface WFNANPublishTableViewController : WFInsetTableViewController {
    WFNetworkSettingsCellFactory * _cellFactory;
    WFNANTableViewContext * _context;
    WFNANPublishTableViewDataSource * _dataSource;
    NSString * _instanceName;
    bool  _isServiceSpecificInfoHex;
    NSString * _passphrase;
    NSString * _portNumber;
    long long  _protocolType;
    NSOrderedSet * _sections;
    NSString * _serviceName;
    NSString * _serviceSpecificInfo;
    long long  _serviceType;
}

@property (nonatomic, retain) WFNetworkSettingsCellFactory *cellFactory;
@property (nonatomic, retain) WFNANTableViewContext *context;
@property (nonatomic, retain) WFNANPublishTableViewDataSource *dataSource;
@property (nonatomic, retain) NSString *instanceName;
@property (nonatomic) bool isServiceSpecificInfoHex;
@property (nonatomic) NSString *passphrase;
@property (nonatomic) NSString *portNumber;
@property (nonatomic) long long protocolType;
@property (nonatomic, retain) NSOrderedSet *sections;
@property (nonatomic, retain) NSString *serviceName;
@property (nonatomic, retain) NSString *serviceSpecificInfo;
@property (nonatomic) long long serviceType;

- (void).cxx_destruct;
- (void)_configureDataSource;
- (id)_defaultSections;
- (void)_handleAddPublisher;
- (void)_handleDataSessionsChangedNotification:(id)arg1;
- (void)_handlePublishersChangedNotification:(id)arg1;
- (id)_identifierForSection:(unsigned long long)arg1;
- (id)cellFactory;
- (void)clearInputFields;
- (id)context;
- (id)createTextFieldCellWithTableView:(id)arg1 indexPath:(id)arg2 text:(id)arg3 placeholder:(id)arg4 keyboardType:(long long)arg5 textChangedHandler:(id /* block */)arg6;
- (id)dataSource;
- (void)dismissKeyboard;
- (id)initWithContext:(id)arg1;
- (id)instanceName;
- (bool)isServiceSpecificInfoHex;
- (id)passphrase;
- (id)portNumber;
- (long long)protocolType;
- (id)sections;
- (id)serviceName;
- (id)serviceSpecificInfo;
- (id)serviceSpecificInfoFromString;
- (long long)serviceType;
- (void)setCellFactory:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setInstanceName:(id)arg1;
- (void)setIsServiceSpecificInfoHex:(bool)arg1;
- (void)setPassphrase:(id)arg1;
- (void)setPortNumber:(id)arg1;
- (void)setProtocolType:(long long)arg1;
- (void)setSections:(id)arg1;
- (void)setServiceName:(id)arg1;
- (void)setServiceSpecificInfo:(id)arg1;
- (void)setServiceType:(long long)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;

@end
