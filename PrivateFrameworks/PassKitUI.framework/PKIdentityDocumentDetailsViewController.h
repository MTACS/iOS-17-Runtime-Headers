
@interface PKIdentityDocumentDetailsViewController : PKSectionTableViewController {
    LAContext * _LAContext;
    NSArray * _additionalElements;
    NSArray * _criticalElements;
    <PKPaymentDataProvider> * _dataProvider;
    long long  _detailViewStyle;
    NSArray * _drivingPrivilegesElements1;
    NSArray * _drivingPrivilegesElements2;
    NSArray * _drivingPrivilegesElements3;
    NSArray * _idInfoElements;
    bool  _inBridge;
    PKSecureElementPass * _pass;
    NSArray * _personalElements;
    NSArray * _portraitElements;
}

- (void).cxx_destruct;
- (id)_elementAtIndexPath:(id)arg1;
- (id)_elementsForSection:(unsigned long long)arg1;
- (void)_formatDataElements:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)initWithPass:(id)arg1 dataProvider:(id)arg2 detailViewStyle:(long long)arg3;
- (void)preflightWithCompletion:(id /* block */)arg1;
- (bool)shouldMapSection:(unsigned long long)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)viewDidLoad;

@end
