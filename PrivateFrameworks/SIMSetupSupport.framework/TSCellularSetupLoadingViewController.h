
@interface TSCellularSetupLoadingViewController : SSUIViewController <SFSafariViewControllerDelegate, TSSetupFlowItem, UIAdaptivePresentationControllerDelegate> {
    NSURL * _carrierURL;
    CoreTelephonyClient * _coreTelephonyClient;
    <TSSIMSetupFlowDelegate> * _delegate;
    int  _flowType;
    bool  _isProcessCanceled;
    bool  _isRemotePlan;
    TSCellularSetupLoadingView * _loadingView;
    NSDictionary * _postdata;
    TSRemotePlanWebsheetContext * _remotePlanWebsheetContext;
    bool  _useLiveID;
}

@property (nonatomic, retain) NSURL *carrierURL;
@property (readonly, copy) NSString *debugDescription;
@property <TSSIMSetupFlowDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property int flowType;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isProcessCanceled;
@property (nonatomic) bool isRemotePlan;
@property (nonatomic, retain) TSCellularSetupLoadingView *loadingView;
@property (nonatomic, retain) NSDictionary *postdata;
@property (retain) TSRemotePlanWebsheetContext *remotePlanWebsheetContext;
@property (readonly) Class superclass;
@property (readonly) bool useLiveID;

- (void).cxx_destruct;
- (void)_showFailureAlert:(id)arg1 completion:(id /* block */)arg2;
- (void)cancelButtonTapped;
- (id)carrierURL;
- (void)deactivate;
- (id)delegate;
- (int)flowType;
- (id)initWithRemotePlanWebsheetContext:(id)arg1 isRemotePlan:(bool)arg2;
- (bool)isProcessCanceled;
- (bool)isRemotePlan;
- (id)loadingView;
- (id)navBarTitle;
- (id)postdata;
- (void)presentationControllerDidDismiss:(id)arg1;
- (id)remotePlanWebsheetContext;
- (void)safariViewController:(id)arg1 didCompleteInitialLoad:(bool)arg2;
- (void)safariViewController:(id)arg1 url:(id)arg2 postdata:(id)arg3 completion:(id /* block */)arg4;
- (void)safariViewControllerDidFinish:(id)arg1;
- (void)setCarrierURL:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFlowType:(int)arg1;
- (void)setIsProcessCanceled:(bool)arg1;
- (void)setIsRemotePlan:(bool)arg1;
- (void)setLoadingView:(id)arg1;
- (void)setPostdata:(id)arg1;
- (void)setRemotePlanWebsheetContext:(id)arg1;
- (void)setupCoreTelephonyClientForRemoteSignup;
- (void)setupNavigationBarItems;
- (bool)useLiveID;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
