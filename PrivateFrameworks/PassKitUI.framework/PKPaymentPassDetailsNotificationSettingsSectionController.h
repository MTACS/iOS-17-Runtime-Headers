
@interface PKPaymentPassDetailsNotificationSettingsSectionController : PKPaymentPassDetailSectionController {
    PKAccount * _account;
    <PKPaymentPassDetailsNotificationSettingsSectionControllerDelegate> * _delegate;
    long long  _detailViewStyle;
    long long  _notificationAuthorizationStatus;
    PKPaymentPass * _pass;
    PKPaymentApplication * _paymentApplication;
    <PKPaymentDataProvider> * _paymentDataProvider;
    PKPeerPaymentAccount * _peerPaymentAccount;
    PKTransactionSourceCollection * _transactionSourceCollection;
}

@property (nonatomic, readonly) <PKPaymentPassDetailsNotificationSettingsSectionControllerDelegate> *delegate;
@property (nonatomic, readonly) long long notificationAuthorizationStatus;

+ (long long)_countOfRowsForPass:(id)arg1 peerPaymentAccount:(id)arg2 account:(id)arg3;
+ (bool)_showsTransactionHistorySwitchForPass:(id)arg1 peerPaymentAccount:(id)arg2 account:(id)arg3;
+ (id)_updatedPeerPaymentAccountForPeerPaymentAccount:(id)arg1 pass:(id)arg2;
+ (bool)canShowSectionforPass:(id)arg1 dataProvider:(id)arg2 peerPaymentAccount:(id)arg3 account:(id)arg4 transactionSourceCollection:(id)arg5;
+ (bool)validForPaymentPass:(id)arg1;

- (void).cxx_destruct;
- (unsigned long long)_accountFeature;
- (id)_accountServiceNotificationsSwitchCellForIndexPath:(id)arg1 tableView:(id)arg2;
- (id)_cellForType:(long long)arg1;
- (long long)_countOfRows;
- (void)_dailyCashSwitchChanged:(id)arg1;
- (id)_indexPathForRowType:(long long)arg1;
- (void)_notificationSwitchChanged:(id)arg1;
- (void)_passSettingsChanged:(id)arg1;
- (id)_peerPaymentNotificationsSwitchCellForIndexPath:(id)arg1 tableView:(id)arg2;
- (bool)_shouldMapSection;
- (id)_transactionsSwitchCellForIndexPath:(id)arg1 tableView:(id)arg2;
- (void)_transactionsSwitchChanged:(id)arg1;
- (id)allSectionIdentifiers;
- (void)dealloc;
- (id)delegate;
- (void)fetchAuthorizationStatusWithCompletion:(id /* block */)arg1;
- (id)init;
- (id)initWithPass:(id)arg1 peerPaymentAccount:(id)arg2 account:(id)arg3 paymentDataProvider:(id)arg4 transactionSourceCollection:(id)arg5 detailViewStyle:(long long)arg6 delegate:(id)arg7;
- (long long)notificationAuthorizationStatus;
- (id)sectionIdentifiers;
- (void)setTransactionsEnabled:(bool)arg1;
- (bool)shouldDrawBottomSeparatorForSectionIdentifier:(id)arg1;
- (bool)shouldDrawTopSeparatorForSectionIdentifier:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 sectionIdentifier:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 sectionIdentifier:(id)arg3;
- (long long)tableView:(id)arg1 numberOfRowsInSectionIdentifier:(id)arg2;
- (id)titleForFooterInSectionIdentifier:(id)arg1;
- (id)titleForHeaderInSectionIdentifier:(id)arg1;

@end
