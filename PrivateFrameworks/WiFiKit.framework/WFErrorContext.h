
@interface WFErrorContext : NSObject <WFContextPresenting, WFErrorProviderContext> {
    id /* block */  _completionHandler;
    NSError * _error;
    bool  _needsDismissal;
    <WFNetworkListRecord> * _network;
    UIViewController<WFNetworkView> * _provider;
    <WFDiagnosticsResultItem> * _result;
}

@property (nonatomic, copy) id /* block */ completionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSError *error;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool needsDismissal;
@property (nonatomic, retain) <WFNetworkListRecord> *network;
@property (nonatomic) UIViewController<WFNetworkView> *provider;
@property (nonatomic, readonly) long long requestedFields;
@property (nonatomic, retain) <WFDiagnosticsResultItem> *result;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_userInfoForAssociationError:(id)arg1 networkName:(id)arg2;
- (void)cancel;
- (id /* block */)completionHandler;
- (id)description;
- (id)error;
- (id)initWithAssociationError:(id)arg1 network:(id)arg2 diagnosticsResult:(id)arg3;
- (bool)needsDismissal;
- (id)network;
- (id)provider;
- (long long)requestedFields;
- (id)result;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setError:(id)arg1;
- (void)setNetwork:(id)arg1;
- (void)setProvider:(id)arg1;
- (void)setResult:(id)arg1;

@end
