
@interface ICQBundlesHook : NSObject <AMSUIDynamicViewControllerDelegate, ICQUIServerHook> {
    long long  _amsAction;
    long long  _amsErrorCode;
    NSString * _buffervar;
    NSString * _buyParamsStr;
    NSDictionary * _clientInfo;
    id /* block */  _completionHandler;
    <RUIServerHookDelegate> * _delegate;
    ICQUpgradeFlowManager<ICQServerHookDelegate> * _flowManager;
    UIViewController * _presentingViewController;
    long long  _statusCode;
}

@property (nonatomic, retain) NSString *buffervar;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <RUIServerHookDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) RUIObjectModel *objectModel;
@property (nonatomic, retain) RUIServerHookResponse *serverHookResponse;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)buffervar;
- (id)continuationResponseBody;
- (id)delegate;
- (id)dynamicViewController:(id)arg1 contentViewControllerWithDictionary:(id)arg2;
- (void)dynamicViewController:(id)arg1 didFinishPurchaseWithResult:(id)arg2 error:(id)arg3;
- (bool)dynamicViewControllerShouldDismiss:(id)arg1;
- (id)initWithFlowManager:(id)arg1;
- (void)launchBundleOffer;
- (void)processElement:(id)arg1 attributes:(id)arg2 objectModel:(id)arg3 completion:(id /* block */)arg4;
- (void)processObjectModel:(id)arg1 completion:(id /* block */)arg2;
- (id)serverHookResponse;
- (void)setAdditionalParameters:(id)arg1;
- (void)setBuffervar:(id)arg1;
- (void)setDelegate:(id)arg1;
- (bool)shouldMatchElement:(id)arg1;
- (bool)shouldMatchModel:(id)arg1;

@end
