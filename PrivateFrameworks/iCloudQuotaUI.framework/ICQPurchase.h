
@interface ICQPurchase : NSObject <AMSPurchaseResponseProtocol> {
    long long  _amsServerErrorCode;
    NSDictionary * _clientInfo;
    id /* block */  _completionHandler;
    <ICQPurchaseDelegate> * _delegate;
    NSArray * _interruptedBuyErrorCodes;
    bool  _isLegacyNativeFlow;
    ICQOffer * _offer;
    NSString * _presentingSceneBundleIdentifier;
    NSString * _presentingSceneIdentifier;
    NSURLSession * _session;
    long long  _statusCode;
    NSString * _userAgentSuffix;
}

@property (nonatomic) long long amsServerErrorCode;
@property (nonatomic, retain) NSDictionary *clientInfo;
@property (nonatomic, copy) id /* block */ completionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ICQPurchaseDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *interruptedBuyErrorCodes;
@property (nonatomic) bool isLegacyNativeFlow;
@property (nonatomic, retain) ICQOffer *offer;
@property (nonatomic, copy) NSString *presentingSceneBundleIdentifier;
@property (nonatomic, copy) NSString *presentingSceneIdentifier;
@property (nonatomic, retain) NSURLSession *session;
@property (nonatomic) long long statusCode;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *userAgentSuffix;

+ (void)clearCacheAndNotifyClients;
+ (id /* block */)clearCacheAndNotifyClientsWithCompletion:(id /* block */)arg1;
+ (id)parseParameters:(id)arg1 action:(long long)arg2;
+ (id)upgradeStorageKeyBagForOffer:(id)arg1 buttonID:(id)arg2;
+ (id)upgradeStorageQueryDictionaryForOffer:(id)arg1 buttonID:(id)arg2;
+ (id)upgradeStorageQueryKeySet;
+ (id)userAgentForBundleIdentifier:(id)arg1 appVersion:(id)arg2 attributionSuffix:(id)arg3;

- (void).cxx_destruct;
- (id)actionString;
- (long long)amsServerErrorCode;
- (void)beginPurchaseFlow;
- (id)clientInfo;
- (id /* block */)completionHandler;
- (id)delegate;
- (void)handleAuthenticateRequest:(id)arg1 purchase:(id)arg2 purchaseQueue:(id)arg3 completion:(id /* block */)arg4;
- (void)handleDialogRequest:(id)arg1 purchase:(id)arg2 purchaseQueue:(id)arg3 completion:(id /* block */)arg4;
- (void)handleEngagementRequest:(id)arg1 purchase:(id)arg2 purchaseQueue:(id)arg3 completion:(id /* block */)arg4;
- (void)handlePurchaseCompletionWithError:(id)arg1;
- (id)initWithOffer:(id)arg1 clientInfo:(id)arg2;
- (id)interruptedBuyErrorCodes;
- (bool)isLegacyNativeFlow;
- (id)offer;
- (long long)offerAction;
- (void)preparePurchase;
- (id)presentingSceneBundleIdentifier;
- (id)presentingSceneIdentifier;
- (id)session;
- (void)setAmsServerErrorCode:(long long)arg1;
- (void)setClientInfo:(id)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setDelegate:(id)arg1;
- (void)setInterruptedBuyErrorCodes:(id)arg1;
- (void)setIsLegacyNativeFlow:(bool)arg1;
- (void)setOffer:(id)arg1;
- (void)setPresentingSceneBundleIdentifier:(id)arg1;
- (void)setPresentingSceneIdentifier:(id)arg1;
- (void)setSession:(id)arg1;
- (void)setStatusCode:(long long)arg1;
- (void)setUserAgentSuffix:(id)arg1;
- (void)startPurchaseWithCompletion:(id /* block */)arg1;
- (long long)statusCode;
- (id)userAgentSuffix;

@end
