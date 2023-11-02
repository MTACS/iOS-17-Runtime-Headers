
@interface TSBuddyMLViewController : SSUIViewController <RemoteUIControllerDelegate, TSSetupFlowItem> {
    NSString * _buddyMLURL;
    CoreTelephonyClient * _coreTelephonyClient;
    <TSSIMSetupFlowDelegate> * _delegate;
    NSString * _gid1;
    NSString * _gid2;
    NSString * _idNeedsEncryption;
    bool  _inBuddy;
    bool  _initialRequest;
    NSString * _mcc;
    NSString * _mnc;
    NSMutableArray * _objectModels;
    CTPlan * _plan;
    NSDictionary * _postdata;
    RemoteUIController * _remoteUIController;
}

@property (retain) NSString *buddyMLURL;
@property (readonly, copy) NSString *debugDescription;
@property <TSSIMSetupFlowDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) CTPlan *plan;
@property (retain) NSDictionary *postdata;
@property (retain) RemoteUIController *remoteUIController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_configureRUIController;
- (void)_handlePlanAddition:(id)arg1;
- (bool)_isActionDismissToCancelFlow:(id)arg1;
- (void)_requestCipherText:(id)arg1 completion:(id /* block */)arg2;
- (void)_setUserInPurchaseFlow;
- (id)buddyMLURL;
- (void)dealloc;
- (id)delegate;
- (id)initWithCTPlan:(id)arg1 inBuddy:(bool)arg2;
- (id)initWithCTPlan:(id)arg1 websheetURL:(id)arg2 postdata:(id)arg3;
- (id)plan;
- (id)postdata;
- (void)prepare:(id /* block */)arg1;
- (id)remoteUIController;
- (void)remoteUIController:(id)arg1 didFinishLoadWithError:(id)arg2 forRequest:(id)arg3;
- (void)remoteUIController:(id)arg1 didReceiveObjectModel:(id)arg2 actionSignal:(unsigned long long*)arg3;
- (void)remoteUIController:(id)arg1 didRemoveObjectModel:(id)arg2;
- (void)remoteUIController:(id)arg1 shouldLoadRequest:(id)arg2 redirectResponse:(id)arg3 withCompletionHandler:(id /* block */)arg4;
- (void)remoteUIController:(id)arg1 willPresentObjectModel:(id)arg2 modally:(bool)arg3;
- (void)setBuddyMLURL:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPlan:(id)arg1;
- (void)setPostdata:(id)arg1;
- (void)setRemoteUIController:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
