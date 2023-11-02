
@interface FAAppleCashPresentationHandler : NSObject {
    PKPeerPaymentAssociatedAccountPresentationContext * _context;
    PKPassbookSettingsDefaultBehavior * _defaultBehavior;
    UINavigationController * _navigationController;
    PKPaymentPassDetailViewController * _passDetailsViewController;
    PKPeerPaymentAssociatedAccountsController * _peerPaymentController;
}

@property (nonatomic, retain) PKPeerPaymentAssociatedAccountPresentationContext *context;
@property (nonatomic, retain) PKPassbookSettingsDefaultBehavior *defaultBehavior;
@property (nonatomic, retain) UINavigationController *navigationController;
@property (nonatomic, retain) PKPaymentPassDetailViewController *passDetailsViewController;
@property (nonatomic, retain) PKPeerPaymentAssociatedAccountsController *peerPaymentController;

- (void).cxx_destruct;
- (id)context;
- (id)defaultBehavior;
- (id)initWithNavigationController:(id)arg1;
- (id)navigationController;
- (id)passDetailsViewController;
- (id)peerPaymentController;
- (id)peerPaymentPassForAccount:(id)arg1 passLibraryDataProvider:(id)arg2;
- (void)presentPaymentPassDetailViewController;
- (void)presentPeerPaymentControllerWithAttributes:(id)arg1 completion:(id /* block */)arg2;
- (void)presentPeerPaymentControllerWithFamilyCircle:(id)arg1 member:(id)arg2 attributes:(id)arg3;
- (void)setContext:(id)arg1;
- (void)setDefaultBehavior:(id)arg1;
- (void)setNavigationController:(id)arg1;
- (void)setPassDetailsViewController:(id)arg1;
- (void)setPeerPaymentController:(id)arg1;

@end
