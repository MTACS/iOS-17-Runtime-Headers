
@interface SUUIGiftViewController : UINavigationController {
    SUUIClientContext * _clientContext;
    SUUIGift * _gift;
    SUUIGiftConfiguration * _giftConfiguration;
    <SUUIGiftViewControllerDelegate> * _giftDelegate;
    long long  _initialBarStyle;
    NSOperationQueue * _operationQueue;
    UIViewController * _placeholderViewController;
    SUUIGiftComposeViewController * _rootViewController;
}

@property (nonatomic, retain) SUUIClientContext *clientContext;
@property (nonatomic, readonly, copy) SUUIGift *gift;
@property (nonatomic) <SUUIGiftViewControllerDelegate> *giftDelegate;
@property (nonatomic, retain) NSOperationQueue *operationQueue;

- (void).cxx_destruct;
- (void)_cancelButtonAction:(id)arg1;
- (void)_clientContextDidLoadWithContext:(id)arg1 error:(id)arg2;
- (void)_configurationDidLoadWithResult:(bool)arg1 error:(id)arg2;
- (void)_finishAuthenticateWithResponse:(id)arg1 error:(id)arg2;
- (void)_finishGiftingWithResult:(bool)arg1;
- (void)_loadGiftConfiguration;
- (id)_localizedString:(id)arg1;
- (id)clientContext;
- (id)gift;
- (id)giftDelegate;
- (id)initWithGift:(id)arg1;
- (id)operationQueue;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (void)setClientContext:(id)arg1;
- (void)setGiftDelegate:(id)arg1;
- (void)setOperationQueue:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillDisappear:(bool)arg1;

@end
