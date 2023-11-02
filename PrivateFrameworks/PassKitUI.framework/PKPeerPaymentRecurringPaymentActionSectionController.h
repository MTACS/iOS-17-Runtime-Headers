
@interface PKPeerPaymentRecurringPaymentActionSectionController : PKDynamicListSectionController <PKPaymentSetupDelegate> {
    PKPeerPaymentAccount * _account;
    <PKPeerPaymentRecurringPaymentSectionControllerDelegate> * _delegate;
    PKFamilyMemberCollection * _familyCollection;
    PKTransactionSourceCollection * _sourceCollection;
}

@property (nonatomic, retain) PKPeerPaymentAccount *account;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKPeerPaymentRecurringPaymentSectionControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) PKFamilyMemberCollection *familyCollection;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PKTransactionSourceCollection *sourceCollection;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_beginSetupFlow;
- (id)_decorateListCell:(id)arg1 forRowItem:(id)arg2;
- (void)_openPaymentSetupWithNetworkWhitelist:(id)arg1 paymentSetupMode:(long long)arg2;
- (id)_paymentSetupNavigationControllerForProvisioningController:(id)arg1;
- (id)account;
- (id)cellRegistrationForItem:(id)arg1;
- (id)delegate;
- (void)didSelectItem:(id)arg1;
- (id)familyCollection;
- (id)identifiers;
- (void)paymentSetupDidFinish:(id)arg1;
- (void)setAccount:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFamilyCollection:(id)arg1;
- (void)setSourceCollection:(id)arg1;
- (bool)shouldHighlightItem:(id)arg1;
- (id)snapshotWithPreviousSnapshot:(id)arg1 forSectionIdentifier:(id)arg2;
- (id)sourceCollection;

@end
