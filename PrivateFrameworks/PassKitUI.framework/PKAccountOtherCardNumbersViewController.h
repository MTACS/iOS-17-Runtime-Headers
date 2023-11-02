
@interface PKAccountOtherCardNumbersViewController : PKSettingsTableViewController <PKVirtualCardEnrollmentViewControllerDelegate> {
    unsigned long long  _accountFeatureIdentifier;
    long long  _context;
    bool  _didBeginPassManagementSubject;
    PKPaymentPass * _paymentPass;
    PKPhysicalCard * _physicalCard;
}

- (void).cxx_destruct;
- (id)_analyticsPageTag;
- (void)_appendApplePayCardNumberSectionToConfiguration:(id)arg1;
- (void)_appendNetworkSectionToConfiguration:(id)arg1;
- (void)_appendPhysicalCardSectionToConfiguration:(id)arg1;
- (void)_appendPinSectionToConfiguration:(id)arg1;
- (void)_appendSetUpVirtualCardSectionToConfiguration:(id)arg1;
- (void)_beginReportingIfNecessary;
- (void)_endReportingIfNecessary;
- (id)_groupedFooterWithText:(id)arg1 tableView:(id)arg2;
- (bool)_isVirtualCardSupportedButNotEnabled;
- (id)_localizedStringForKey:(id)arg1;
- (void)_updateCardNumbersConfigurationAnimated:(bool)arg1;
- (id)initWithPaymentPass:(id)arg1 accountFeatureIdentifier:(unsigned long long)arg2 context:(long long)arg3;
- (id)initWithPhysicalCard:(id)arg1 paymentPass:(id)arg2 accountFeatureIdentifier:(unsigned long long)arg3 context:(long long)arg4;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (void)viewDidLoad;
- (void)viewWillDisappear:(bool)arg1;
- (void)virtualCardEnrollmentViewController:(id)arg1 didCompleteWithSuccess:(bool)arg2;

@end
