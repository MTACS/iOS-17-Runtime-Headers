
@interface _PKAppleBalanceAddMoneyUIManager : NSObject <AMSPurchaseDelegate, AMSURLProtocolDelegate, NSURLSessionDelegate> {
    void account;
    void activeViewController;
    void dtuModel;
}

- (void).cxx_destruct;
- (void)AMSURLSession:(id)arg1 task:(id)arg2 handleAuthenticateRequest:(id)arg3 completion:(id /* block */)arg4;
- (void)AMSURLSession:(id)arg1 task:(id)arg2 handleDialogRequest:(id)arg3 completion:(id /* block */)arg4;
- (void)AMSURLSession:(id)arg1 task:(id)arg2 handleEngagementRequest:(id)arg3 completion:(id /* block */)arg4;
- (id)init;
- (id)initWithAccount:(id)arg1;
- (void)presentAMSDirectTopUpFrom:(id)arg1 context:(long long)arg2 webViewDelegate:(id)arg3 completion:(id /* block */)arg4;
- (void)presentAMSPromotionRedemptionViewFrom:(id)arg1 promotionInfo:(id)arg2 webViewDelegate:(id)arg3;
- (void)presentAMSRedeemGiftcardFrom:(id)arg1 webViewDelegate:(id)arg2;
- (void)presentAddMoneyFrom:(id)arg1 dtuConfiguration:(id)arg2 inStoreToken:(id)arg3;
- (void)presentAddMoneyInterstitialFrom:(id)arg1 dtuConfiguration:(id)arg2 inStoreToken:(id)arg3;
- (void)presentDirectTopUpFrom:(id)arg1 context:(long long)arg2 configuration:(id)arg3 promotion:(id)arg4 completion:(id /* block */)arg5;
- (void)presentInStoreTopUpFrom:(id)arg1 context:(long long)arg2 token:(id)arg3;
- (void)purchase:(id)arg1 handleAuthenticateRequest:(id)arg2 completion:(id /* block */)arg3;
- (void)purchase:(id)arg1 handleDialogRequest:(id)arg2 completion:(id /* block */)arg3;
- (void)purchase:(id)arg1 handleEngagementRequest:(id)arg2 completion:(id /* block */)arg3;

@end
