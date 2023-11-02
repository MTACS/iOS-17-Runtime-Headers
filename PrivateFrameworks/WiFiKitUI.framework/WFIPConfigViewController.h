
@interface WFIPConfigViewController : WFInsetTableViewController {
    WFAppearanceProxy * _appearanceProxy;
    WFTextFieldCell * _clientIDCell;
    WFTextFieldCell * _ipAddressCell;
    WFNetworkSettingsConfig * _modifiedConfig;
    WFNetworkSettingsConfig * _originalConfig;
    WFTextFieldCell * _prefixCell;
    WFTextFieldCell * _routerCell;
    id /* block */  _saveHandler;
    WFTextFieldCell * _subnetMaskCell;
    long long  _type;
}

@property (nonatomic, retain) WFAppearanceProxy *appearanceProxy;
@property (nonatomic, retain) WFTextFieldCell *clientIDCell;
@property (nonatomic, retain) WFTextFieldCell *ipAddressCell;
@property (nonatomic, retain) WFNetworkSettingsConfig *modifiedConfig;
@property (nonatomic, retain) WFNetworkSettingsConfig *originalConfig;
@property (nonatomic, retain) WFTextFieldCell *prefixCell;
@property (nonatomic, retain) WFTextFieldCell *routerCell;
@property (nonatomic, copy) id /* block */ saveHandler;
@property (nonatomic, retain) WFTextFieldCell *subnetMaskCell;
@property (nonatomic) long long type;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (double)_configCellLeadingInset;
- (void)_setFirstResponderAfterCell:(id)arg1;
- (void)_updateSaveEnabled;
- (id)appearanceProxy;
- (id)clientIDCell;
- (void)didReceiveMemoryWarning;
- (id)initWithConfig:(id)arg1 ipType:(long long)arg2;
- (id)initWithConfig:(id)arg1 ipType:(long long)arg2 appearanceProxy:(id)arg3;
- (id)ipAddressCell;
- (id)modifiedConfig;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)originalConfig;
- (id)prefixCell;
- (id)routerCell;
- (void)save:(id)arg1;
- (id /* block */)saveHandler;
- (void)setAppearanceProxy:(id)arg1;
- (void)setClientIDCell:(id)arg1;
- (void)setIpAddressCell:(id)arg1;
- (void)setModifiedConfig:(id)arg1;
- (void)setOriginalConfig:(id)arg1;
- (void)setPrefixCell:(id)arg1;
- (void)setRouterCell:(id)arg1;
- (void)setSaveHandler:(id /* block */)arg1;
- (void)setSubnetMaskCell:(id)arg1;
- (void)setType:(long long)arg1;
- (id)subnetMaskCell;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)type;
- (void)viewDidLoad;

@end
