
@interface VUIActionCommerceTransaction : VUIAction {
    VUIAppContext * _appContext;
    NSString * _commerceActionRef;
    NSDictionary * _contextData;
}

@property (nonatomic) VUIAppContext *appContext;
@property (nonatomic, retain) NSString *commerceActionRef;
@property (nonatomic, copy) NSDictionary *contextData;

+ (id)_extractCanonicalIDFromTransactionOffer:(id)arg1;
+ (void)_saveInterruptedPurchaseTransactionContextInfo:(id)arg1 canonicalID:(id)arg2 error:(id)arg3;
+ (void)displayConfirmationUIWithTitle:(id)arg1 andBody:(id)arg2;
+ (void)displayConfirmationUIWithTitle:(id)arg1 andBody:(id)arg2 completion:(id /* block */)arg3;
+ (id)extractSalableAdamIDFromBuyParams:(id)arg1;
+ (bool)isTransactionInProgressForBuyParams:(id)arg1;

- (void).cxx_destruct;
- (void)_handleBuyCompletionForOffer:(id)arg1 appContext:(id)arg2 shouldPlayWhenDone:(bool)arg3 serverResponse:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)_handleSubscriptionCompletionForOffer:(id)arg1 appContext:(id)arg2 shouldInitiateFamilySetup:(bool)arg3 serverResponse:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)_notifyDidEndPurchaseType:(long long)arg1 transactionOffer:(id)arg2 withError:(id)arg3;
- (void)_notifyDidStartPurchaseType:(long long)arg1 transactionOffer:(id)arg2;
- (id)_preflightManagerForTransactionOffer:(id)arg1;
- (void)_recordLog:(id)arg1 withBuyParams:(id)arg2;
- (void)_showUIConfirmationForSubTransaction:(id)arg1 completion:(id /* block */)arg2;
- (void)_startTransactionOfOffer:(id)arg1 withAppContext:(id)arg2 andCompletionHandler:(id /* block */)arg3;
- (id)appContext;
- (id)commerceActionRef;
- (id)contextData;
- (id)initWithActionRef:(id)arg1 contextData:(id)arg2 appContext:(id)arg3;
- (void)performWithTargetResponder:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setAppContext:(id)arg1;
- (void)setCommerceActionRef:(id)arg1;
- (void)setContextData:(id)arg1;

@end
