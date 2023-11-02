
@interface PKPaymentPassDetailAutoReloadActionSectionController : PKPaymentPassDetailSectionController <PKPaymentAutoReloadSetupControllerDelegate, PKPaymentPassDetailAutoReloadActionSectionControllerDelegate> {
    PKPaymentAutoReloadSetupController * _autoReloadSetupController;
    UIViewController<PKPaymentPassDetailWrapperSectionControllerDelegate> * _delegate;
    bool  _isMerchantAutoTopEnabled;
    bool  _isWalletAutoTopEnabled;
    NSString * _name;
    PKPaymentPass * _pass;
    NSString * _reloadAmount;
    <PKPaymentPassDetailAutoReloadActionSectionControllerDelegate> * _setupDelegate;
    NSString * _threshold;
    long long  _viewStyle;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <PKPaymentPassDetailAutoReloadActionSectionControllerDelegate> *setupDelegate;
@property (readonly) Class superclass;

+ (bool)validForPaymentPass:(id)arg1;

- (void).cxx_destruct;
- (id)allSectionIdentifiers;
- (void)autoReloadSetupController:(id)arg1 requestsDismissViewController:(id)arg2;
- (void)autoReloadSetupController:(id)arg1 requestsPopViewController:(id)arg2;
- (void)autoReloadSetupController:(id)arg1 requestsPresentViewController:(id)arg2;
- (void)autoReloadSetupController:(id)arg1 requestsPushViewController:(id)arg2;
- (void)autoReloadSetupControllerDidCancel:(id)arg1;
- (void)autoReloadSetupControllerDidCompleteWithAmount:(id)arg1 threshold:(id)arg2;
- (id)initWithPass:(id)arg1 paymentDataProvider:(id)arg2 viewStyle:(long long)arg3 delegate:(id)arg4;
- (void)launchURL:(id)arg1;
- (void)presentAutoReloadSetupViewController;
- (id)sectionIdentifiers;
- (void)setSetupDelegate:(id)arg1;
- (id)setupDelegate;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 sectionIdentifier:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 sectionIdentifier:(id)arg3;
- (long long)tableView:(id)arg1 numberOfRowsInSectionIdentifier:(id)arg2;
- (id)titleForFooterInSectionIdentifier:(id)arg1;

@end
