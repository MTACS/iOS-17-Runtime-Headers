
@interface WFDNSConfigViewController : WFInsetTableViewController {
    WFAppearanceProxy * _appearanceProxy;
    long long  _deviceCapability;
    long long  _dnsConfig;
    NSMutableArray * _domains;
    long long  _originalDNSConfig;
    NSArray * _originalDomains;
    NSArray * _originalServers;
    UIBarButtonItem * _saveButton;
    id /* block */  _saveHandler;
    NSMutableArray * _servers;
    bool  _shouldShowPrivacyRelayHeader;
}

@property (nonatomic, retain) WFAppearanceProxy *appearanceProxy;
@property (nonatomic) long long deviceCapability;
@property (nonatomic) long long dnsConfig;
@property (nonatomic, retain) NSMutableArray *domains;
@property (nonatomic) long long originalDNSConfig;
@property (nonatomic, retain) NSArray *originalDomains;
@property (nonatomic, retain) NSArray *originalServers;
@property (nonatomic, retain) UIBarButtonItem *saveButton;
@property (nonatomic, copy) id /* block */ saveHandler;
@property (nonatomic, retain) NSMutableArray *servers;
@property (nonatomic) bool shouldShowPrivacyRelayHeader;

- (void).cxx_destruct;
- (void)_addDomainAtIndexPath:(id)arg1;
- (void)_addServerAtIndexPath:(id)arg1;
- (bool)_canShowWhileLocked;
- (double)_configCellLeadingInset;
- (bool)_isChinaDevice;
- (void)_updateSaveEnabled;
- (id)appearanceProxy;
- (long long)deviceCapability;
- (long long)dnsConfig;
- (id)domains;
- (id)initWithConfig:(id)arg1;
- (id)initWithConfig:(id)arg1 appearanceProxy:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)originalDNSConfig;
- (id)originalDomains;
- (id)originalServers;
- (void)save:(id)arg1;
- (id)saveButton;
- (id /* block */)saveHandler;
- (long long)sectionForSectionNumber:(long long)arg1;
- (long long)sectionNumberForSection:(long long)arg1;
- (id)servers;
- (void)setAppearanceProxy:(id)arg1;
- (void)setDeviceCapability:(long long)arg1;
- (void)setDnsConfig:(long long)arg1;
- (void)setDomains:(id)arg1;
- (void)setOriginalDNSConfig:(long long)arg1;
- (void)setOriginalDomains:(id)arg1;
- (void)setOriginalServers:(id)arg1;
- (void)setSaveButton:(id)arg1;
- (void)setSaveHandler:(id /* block */)arg1;
- (void)setServers:(id)arg1;
- (void)setShouldShowPrivacyRelayHeader:(bool)arg1;
- (bool)shouldShowPrivacyRelayHeader;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)viewDidLoad;

@end
