
@interface AMSPurchaseProtocolHandler : AMSURLProtocolHandler <AMSURLProtocolDelegate, NSURLSessionDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (double)reversePushSamplingPercentageForTask:(id)arg1;

- (void)AMSURLSession:(id)arg1 task:(id)arg2 handleAuthenticateRequest:(id)arg3 completion:(id /* block */)arg4;
- (void)AMSURLSession:(id)arg1 task:(id)arg2 handleDialogRequest:(id)arg3 completion:(id /* block */)arg4;
- (void)AMSURLSession:(id)arg1 task:(id)arg2 handleEngagementRequest:(id)arg3 completion:(id /* block */)arg4;
- (id)_determineUpdatedBuyParamsFromResponse:(id)arg1 urlAction:(id)arg2 selectedAction:(id)arg3 purchaseInfo:(id)arg4;
- (bool)_isEquivalentURL:(id)arg1 toURL:(id)arg2;
- (id)_shouldRedirectWithPurchaseInfo:(id)arg1 bag:(id)arg2 urlAction:(id)arg3 currentURL:(id)arg4;
- (bool)_shouldRetryForFailureAction:(id)arg1 response:(id)arg2 task:(id)arg3 decodedObject:(id)arg4 responseDictionary:(id)arg5;
- (void)_syncDiversityBagFromResponse:(id)arg1 purchaseInfo:(id)arg2;
- (void)_syncKeybagFromResponse:(id)arg1 purchaseInfo:(id)arg2;
- (void)_updatePasswordSettingWithBuyParams:(id)arg1 account:(id)arg2;
- (void)_updateSubscriptionStatusFromBody:(id)arg1 account:(id)arg2;
- (void)handleCompletionWithTask:(id)arg1 metrics:(id)arg2 decodedObject:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)reconfigureNewRequest:(id)arg1 originalTask:(id)arg2 redirect:(bool)arg3 error:(id*)arg4;
- (void)setSession:(id)arg1;

@end
