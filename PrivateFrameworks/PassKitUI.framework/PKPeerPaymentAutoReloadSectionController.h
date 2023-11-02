
@interface PKPeerPaymentAutoReloadSectionController : PKPaymentPassDetailSectionController <PKPeerPaymentServiceObserver, PKPeerPaymentThresholdTopUpControllerDelegate> {
    PKPeerPaymentAccount * _account;
    PKPeerPaymentRecurringPayment * _autoReloadPayment;
    PKPeerPaymentThresholdTopUpController * _controller;
    UIViewController<PKPaymentPassDetailWrapperSectionControllerDelegate> * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)validForPaymentPass:(id)arg1;

- (void).cxx_destruct;
- (bool)_sectionAvailable;
- (void)_updateRecurringPaymentsWithCompletion:(id /* block */)arg1;
- (id)allSectionIdentifiers;
- (id)initWithDelegate:(id)arg1 pass:(id)arg2 context:(long long)arg3 passLibraryDataProvider:(id)arg4;
- (void)preflight:(id /* block */)arg1;
- (void)presentAutoReload;
- (id)presentationSceneIdentifierForTopUpController:(id)arg1;
- (void)recurringPaymentsChanged;
- (id)sectionIdentifiers;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 sectionIdentifier:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 sectionIdentifier:(id)arg3;
- (long long)tableView:(id)arg1 numberOfRowsInSectionIdentifier:(id)arg2;
- (void)thresholdTopUpController:(id)arg1 requestsDismissViewController:(id)arg2;
- (void)thresholdTopUpController:(id)arg1 requestsPopViewController:(id)arg2;
- (void)thresholdTopUpController:(id)arg1 requestsPresentViewController:(id)arg2;
- (void)thresholdTopUpController:(id)arg1 requestsPushViewController:(id)arg2;
- (void)thresholdTopUpControllerCompletedSetup:(id)arg1;
- (id)titleForFooterInSectionIdentifier:(id)arg1;

@end
