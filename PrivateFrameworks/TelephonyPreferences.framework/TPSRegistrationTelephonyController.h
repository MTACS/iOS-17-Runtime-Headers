
@interface TPSRegistrationTelephonyController : TPSTelephonyController <CoreTelephonyClientRegistrationDelegate> {
    CTNetworkSelectionInfo * _networkSelectionInfo;
    NSArray * _networks;
    CTXPCServiceSubscriptionContext * _subscriptionContext;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CTNetworkSelectionInfo *networkSelectionInfo;
@property (nonatomic, copy) NSArray *networks;
@property (nonatomic, readonly) CTXPCServiceSubscriptionContext *subscriptionContext;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)automaticallySelectNetwork;
- (void)automaticallySelectNetworkWithCompletion:(id /* block */)arg1;
- (id)copyNetworkSelectionInfo;
- (void)fetchNetworkList;
- (void)fetchNetworkListWithCompletion:(id /* block */)arg1;
- (id)init;
- (id)initWithSubscriptionContext:(id)arg1;
- (void)networkListAvailable:(id)arg1 list:(id)arg2;
- (void)networkSelected:(id)arg1 success:(bool)arg2 mode:(id)arg3;
- (id)networkSelectionInfo;
- (id)networks;
- (void)networksWithCompletionHandler:(id /* block */)arg1;
- (void)performDelegateSelector:(SEL)arg1;
- (void)selectNetwork:(id)arg1;
- (void)selectNetwork:(id)arg1 completion:(id /* block */)arg2;
- (void)setNetworkSelectionInfo:(id)arg1;
- (void)setNetworks:(id)arg1;
- (id)subscriptionContext;

@end
