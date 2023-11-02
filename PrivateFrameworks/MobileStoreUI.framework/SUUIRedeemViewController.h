
@interface SUUIRedeemViewController : UINavigationController {
    UIActivityIndicatorView * _activityIndicator;
    bool  _attempsAutomaticRedeem;
    <SUUIRedeemViewCameraOverrideDelegate> * _cameraDelegate;
    bool  _cameraRedeemVisible;
    long long  _category;
    SUUIClientContext * _clientContext;
    SUClientInterface * _clientInterface;
    UIViewController * _embeddedViewController;
    bool  _finishedLoading;
    NSString * _initialCode;
    NSOperationQueue * _operationQueue;
    SUUIRedeemConfiguration * _redeemConfiguration;
    bool  _shouldPerformInitialOperationOnAppear;
}

@property (nonatomic, retain) UIActivityIndicatorView *activityIndicator;
@property (nonatomic) bool attempsAutomaticRedeem;
@property (nonatomic) <SUUIRedeemViewCameraOverrideDelegate> *cameraDelegate;
@property (nonatomic) bool cameraRedeemVisible;
@property (nonatomic, readonly) long long category;
@property (nonatomic, retain) SUUIClientContext *clientContext;
@property (nonatomic, retain) SUClientInterface *clientInterface;
@property (nonatomic, retain) UIViewController *embeddedViewController;
@property (nonatomic) bool finishedLoading;
@property (nonatomic, copy) NSString *initialCode;
@property (nonatomic, retain) NSOperationQueue *operationQueue;
@property (nonatomic, retain) SUUIRedeemConfiguration *redeemConfiguration;
@property (nonatomic) bool shouldPerformInitialOperationOnAppear;

+ (bool)redeemRequiresNationalId:(id)arg1;

- (void).cxx_destruct;
- (void)_cancelButtonAction;
- (void)_presentLegacyRedeem;
- (void)_presentModernRedeemWithURL:(id)arg1;
- (void)_redeemURLWithCompletion:(id /* block */)arg1;
- (void)_setChildViewController:(id)arg1;
- (void)_setup;
- (void)_setupNavigationItem;
- (void)_startActivityIndicator;
- (void)_stopActivityIndicator;
- (id)activityIndicator;
- (bool)attempsAutomaticRedeem;
- (id)cameraDelegate;
- (bool)cameraRedeemVisible;
- (long long)category;
- (id)clientContext;
- (id)clientInterface;
- (void)clientInterfaceDidFinishLoading:(id)arg1;
- (id)embeddedViewController;
- (bool)finishedLoading;
- (id)initWithRedeemCategory:(long long)arg1;
- (id)initialCode;
- (void)loadView;
- (id)operationQueue;
- (id)redeemConfiguration;
- (void)setActivityIndicator:(id)arg1;
- (void)setAttempsAutomaticRedeem:(bool)arg1;
- (void)setCameraDelegate:(id)arg1;
- (void)setCameraRedeemVisible:(bool)arg1;
- (void)setClientContext:(id)arg1;
- (void)setClientInterface:(id)arg1;
- (void)setEmbeddedViewController:(id)arg1;
- (void)setFinishedLoading:(bool)arg1;
- (void)setInitialCode:(id)arg1;
- (void)setOperationQueue:(id)arg1;
- (void)setRedeemConfiguration:(id)arg1;
- (void)setShouldPerformInitialOperationOnAppear:(bool)arg1;
- (bool)shouldPerformInitialOperationOnAppear;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
