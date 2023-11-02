
@interface PKAccountCardNumbersViewController : PKSectionTableViewController <PKPaymentAuthorizationViewControllerDelegate> {
    PKAccount * _account;
    unsigned long long  _accountFeatureIdentifier;
    PKAccountService * _accountService;
    PKVirtualCardCredentials * _cardCredentials;
    long long  _context;
    bool  _didBeginPassManagementSubject;
    PKSettingTableCell * _dynamicSecurityCodeCell;
    bool  _hasReplacedCredentials;
    bool  _loadingCredentials;
    bool  _loadingReplacementCard;
    LAContext * _localAuthenticationContext;
    PKPaymentPass * _pass;
    PKPaymentService * _paymentService;
    PKPhysicalCard * _physicalCard;
    bool  _redactSensitiveDetails;
    PKVirtualCard * _virtualCard;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_virtualCardSections;

- (void).cxx_destruct;
- (void)_beginReportingIfNecessary;
- (id)_buttonCellForRowIndex:(long long)arg1 text:(id)arg2 cellStyle:(long long)arg3 forTableView:(id)arg4;
- (id)_cardCredentialsCellForRowIndex:(long long)arg1 tableView:(id)arg2;
- (void)_copyCardDetails;
- (id)_credentialsCellWithPrimaryText:(id)arg1 detailText:(id)arg2 detailImage:(id)arg3 forSection:(unsigned long long)arg4 forTableView:(id)arg5;
- (id)_credentialsCellWithPrimaryText:(id)arg1 detailText:(id)arg2 detailImage:(id)arg3 forTableView:(id)arg4;
- (id)_credentialsCellWithPrimaryText:(id)arg1 detailText:(id)arg2 forTableView:(id)arg3;
- (id)_dynamicSecurityCodeCellForRowIndex:(long long)arg1 tableView:(id)arg2;
- (void)_endReportingIfNecessary;
- (id)_genericDisplayableError:(id)arg1;
- (void)_handleReplacementError:(id)arg1;
- (id)_hyperlinkViewWithLinkText:(id)arg1 footerText:(id)arg2 urlString:(id)arg3;
- (id)_loadingCellForRowIndex:(long long)arg1 tableView:(id)arg2;
- (id)_localizedStringForKey:(id)arg1;
- (long long)_numberOfVirtualCardCredentialDetailsRowsEnabled;
- (id)_otherNumbersCellForRowIndex:(long long)arg1 tableView:(id)arg2;
- (id)_replaceCardAlertFromIndexPath:(id)arg1;
- (void)_replaceVirtualCard;
- (void)_retrieveCardCredentials;
- (void)_retryCardCredentials;
- (id)_reuseIdentifierForSection:(unsigned long long)arg1;
- (void)_setupNotifications;
- (id)_tableHeaderView;
- (void)_toggleDynamicSecurityCodeSetting;
- (unsigned long long)_virtualCardCredentialDetailsRowForRowIndex:(long long)arg1;
- (bool)_virtualCardCredentialDetailsRowIsEnabled:(unsigned long long)arg1;
- (id)_virtualCardStateFooter;
- (void)_willHideUIMenuController:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (bool)canBecomeFirstResponder;
- (bool)canReplaceCard;
- (id)initWithPass:(id)arg1 accountService:(id)arg2 account:(id)arg3 cardCredentials:(id)arg4 virtualCard:(id)arg5 physicalCard:(id)arg6 context:(long long)arg7;
- (id)initWithPass:(id)arg1 accountService:(id)arg2 account:(id)arg3 physicalCard:(id)arg4 context:(long long)arg5;
- (id)initWithPass:(id)arg1 localAuthenticationContext:(id)arg2 virtualCard:(id)arg3 context:(long long)arg4;
- (void)paymentAuthorizationViewController:(id)arg1 didAuthorizePayment:(id)arg2 handler:(id /* block */)arg3;
- (void)paymentAuthorizationViewControllerDidFinish:(id)arg1;
- (bool)pkui_disablesAutomaticDismissalUponEnteringBackground;
- (bool)shouldMapSection:(unsigned long long)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillLayoutSubviews;

@end
