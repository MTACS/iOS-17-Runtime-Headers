
@interface PKPeerPaymentRecurringPaymentPassDetailsSectionController : PKPaymentPassDetailSectionController <PKPeerPaymentServiceObserver> {
    PKPeerPaymentAccount * _account;
    long long  _context;
    UIViewController<PKPaymentPassDetailWrapperSectionControllerDelegate> * _delegate;
    NSArray * _recurringPayments;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)validForPaymentPass:(id)arg1;

- (void).cxx_destruct;
- (void)_presentRecurringPaymentsWithIdentifier:(id)arg1;
- (bool)_sectionAvailable;
- (void)_updateRecurringPaymentsWithCompletion:(id /* block */)arg1;
- (id)allSectionIdentifiers;
- (id)initWithDelegate:(id)arg1 pass:(id)arg2 context:(long long)arg3 passLibraryDataProvider:(id)arg4;
- (void)preflight:(id /* block */)arg1;
- (void)presentRecurringPaymentsWithIdentifier:(id)arg1;
- (void)recurringPaymentsChanged;
- (id)sectionIdentifiers;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 sectionIdentifier:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 sectionIdentifier:(id)arg3;
- (long long)tableView:(id)arg1 numberOfRowsInSectionIdentifier:(id)arg2;

@end
