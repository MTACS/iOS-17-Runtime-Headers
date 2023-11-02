
@interface PKPeerPaymentRecurringPaymentViewController : PKDynamicCollectionViewController <PKPeerPaymentRecurringPaymentSectionControllerDelegate, PKPeerPaymentServiceObserver, PKViewControllerPreflightable> {
    long long  _context;
    NSArray * _payments;
    PKPeerPaymentRecurringPaymentSectionController * _paymentsSectionController;
    PKPeerPaymentService * _peerPaymentService;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithContext:(long long)arg1 peerPaymentService:(id)arg2 transactionSourceCollection:(id)arg3 familyCollection:(id)arg4;
- (void)preflightWithCompletion:(id /* block */)arg1;
- (void)recurringPaymentsChanged;
- (void)reloadRecurringPaymentsWithCompletion:(id /* block */)arg1;
- (void)showDetailsForRecurringPaymentIdentifier:(id)arg1;

@end
