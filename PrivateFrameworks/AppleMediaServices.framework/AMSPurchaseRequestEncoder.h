
@interface AMSPurchaseRequestEncoder : AMSURLRequestEncoder {
    <AMSBagProtocol> * _bag;
    AMSPurchaseInfo * _purchaseInfo;
    NSObject<OS_dispatch_queue> * _purchaseRequestQueue;
}

@property (nonatomic, readonly) AMSPurchaseInfo *purchaseInfo;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *purchaseRequestQueue;

+ (long long)_anisetteTypeFromAccount:(id)arg1;
+ (id)_bagURLKeysForPurchaseType:(long long)arg1 withProductType:(id)arg2 purchase:(id)arg3 prefix:(id)arg4;
+ (id)_bagURLKeysFromPurchaseInfo:(id)arg1;
+ (id)_buyProductURLKeysForProductType:(id)arg1 prefix:(id)arg2;
+ (id)_parametersFromPurchaseInfo:(id)arg1 error:(id*)arg2;
+ (id)bagURLFromPurchaseInfo:(id)arg1 bag:(id)arg2 error:(id*)arg3;
+ (void)configureRequest:(id)arg1 purchaseInfo:(id)arg2 bag:(id)arg3 error:(id*)arg4;
+ (bool)isRedirectBagURLOverrideEnabled;

- (void).cxx_destruct;
- (id)bag;
- (id)encodeRequest;
- (id)initWithPurchaseInfo:(id)arg1;
- (id)initWithPurchaseInfo:(id)arg1 bag:(id)arg2;
- (id)purchaseInfo;
- (id)purchaseRequestQueue;
- (void)setBag:(id)arg1;
- (void)setPurchaseRequestQueue:(id)arg1;

@end
