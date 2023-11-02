
@interface PKExpiredSinglePassViewController : UIViewController <PKExpiredPassesDetailsResponder, PKPassDeleteHandler, WLCardViewDelegate> {
    UIBarButtonItem * _deleteBarButton;
    UIBarButtonItem * _flexibleSpace;
    UIBarButtonItem * _infoButton;
    PKLinkedApplication * _linkedApplication;
    PKPass * _pass;
    PKPassView * _passView;
    UIBarButtonItem * _recoverBarButton;
    UIBarButtonItem * _shareButton;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_barcodePassDetailsViewControllerForBarcodePass:(id)arg1;
- (void)_deletePassConfirmed;
- (void)_deletePassPressed;
- (void)_didPresentDetailViewController;
- (void)_expiredPassRemovalConfirmedAsDeletion:(bool)arg1;
- (id)_infoButton;
- (void)_moreButtonPressed;
- (id)_paymentPassDetailsViewControllerForPaymentPass:(id)arg1;
- (void)_recoverPassConfirmed;
- (void)_recoverPassPressed;
- (void)_sharePass;
- (void)disableButtons;
- (void)enableButtons;
- (bool)handleDeletePassRequestWithPass:(id)arg1 forViewController:(id)arg2;
- (id)initWithPass:(id)arg1;
- (id)pass;
- (void)passViewSetup;
- (void)passWasUpdated:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillLayoutSubviews;

@end
