
@interface WFLockdownModeContext : NSObject <WFContextPresenting, WFLockdownModeProviderContext> {
    id /* block */  _completionHandler;
    bool  _needsDismissal;
    <WFNetworkListRecord> * _network;
    UIViewController<WFNetworkView> * _provider;
    unsigned long long  _securityType;
}

@property (nonatomic, copy) id /* block */ completionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool needsDismissal;
@property (nonatomic, retain) <WFNetworkListRecord> *network;
@property (nonatomic) UIViewController<WFNetworkView> *provider;
@property (nonatomic, readonly) long long requestedFields;
@property (nonatomic) unsigned long long securityType;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)cancel;
- (id /* block */)completionHandler;
- (id)initWithNetwork:(id)arg1 securityType:(unsigned long long)arg2;
- (void)join;
- (bool)needsDismissal;
- (id)network;
- (id)provider;
- (long long)requestedFields;
- (unsigned long long)securityType;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setNetwork:(id)arg1;
- (void)setProvider:(id)arg1;
- (void)setSecurityType:(unsigned long long)arg1;

@end
