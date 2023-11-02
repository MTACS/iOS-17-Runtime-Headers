
@interface PKPeerPaymentRecurringPaymentSectionController : PKDynamicListSectionController {
    <PKPeerPaymentRecurringPaymentSectionControllerDelegate> * _delegate;
    PKFamilyMemberCollection * _familyCollection;
    NSArray * _payments;
    PKDashboardPaymentTransactionItemPresenter * _presenter;
    PKTransactionSourceCollection * _sourceCollection;
}

@property (nonatomic) <PKPeerPaymentRecurringPaymentSectionControllerDelegate> *delegate;
@property (nonatomic, retain) PKFamilyMemberCollection *familyCollection;
@property (nonatomic, retain) NSArray *payments;
@property (nonatomic, retain) PKTransactionSourceCollection *sourceCollection;

- (void).cxx_destruct;
- (void)_applyMaskToCell:(id)arg1 firstInSection:(bool)arg2 lastInSection:(bool)arg3;
- (id)cellRegistrationForItem:(id)arg1;
- (id)delegate;
- (void)didSelectItem:(id)arg1;
- (id)familyCollection;
- (id)identifiers;
- (id)init;
- (id)paymentTransactionItemForPayment:(id)arg1;
- (id)payments;
- (void)setDelegate:(id)arg1;
- (void)setFamilyCollection:(id)arg1;
- (void)setPayments:(id)arg1;
- (void)setSourceCollection:(id)arg1;
- (bool)shouldHighlightItem:(id)arg1;
- (id)snapshotWithPreviousSnapshot:(id)arg1 forSectionIdentifier:(id)arg2;
- (id)sourceCollection;

@end
