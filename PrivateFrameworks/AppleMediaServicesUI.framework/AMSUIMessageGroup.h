
@interface AMSUIMessageGroup : IAMMessageGroup <AMSUIDynamicViewControllerDelegate, AMSUIWebDelegate> {
    <AMSBagProtocol> * _bag;
    NSDictionary * _clientData;
    NSString * _clientIdentifier;
    NSDictionary * _clientMetricsOverlay;
    NSString * _clientVersion;
    <AMSUIMessageGroupDelegate> * _delegate;
}

@property (nonatomic, retain) <AMSBagProtocol> *bag;
@property (nonatomic, retain) NSDictionary *clientData;
@property (nonatomic, retain) NSString *clientIdentifier;
@property (nonatomic, retain) NSDictionary *clientMetricsOverlay;
@property (nonatomic, retain) NSString *clientVersion;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AMSUIMessageGroupDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_dictionaryForParamObject:(id)arg1 error:(id*)arg2;
- (id)_viewControllerForServiceType:(id)arg1 placement:(id)arg2 clientIdentifier:(id)arg3 clientVersion:(id)arg4 params:(id)arg5 account:(id)arg6 sidepack:(id)arg7 metrics:(id)arg8;
- (id)_viewControllerForURL:(id)arg1 account:(id)arg2 sidepack:(id)arg3 metrics:(id)arg4;
- (id)bag;
- (id)clientData;
- (id)clientIdentifier;
- (id)clientMetricsOverlay;
- (id)clientVersion;
- (id)delegate;
- (void)dynamicViewController:(id)arg1 didFinishCarrierLinkingWithResult:(id)arg2 error:(id)arg3;
- (void)dynamicViewController:(id)arg1 didFinishPurchaseWithResult:(id)arg2 error:(id)arg3;
- (id)init;
- (id)initWithBag:(id)arg1;
- (void)setBag:(id)arg1;
- (void)setClientData:(id)arg1;
- (void)setClientIdentifier:(id)arg1;
- (void)setClientMetricsOverlay:(id)arg1;
- (void)setClientVersion:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)viewControllerForModalMessagePresentation:(id)arg1 completion:(id /* block */)arg2;
- (void)webViewController:(id)arg1 didFinishPurchaseWithResult:(id)arg2 error:(id)arg3;

@end
