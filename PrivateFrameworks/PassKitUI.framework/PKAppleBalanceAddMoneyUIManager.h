
@interface PKAppleBalanceAddMoneyUIManager : NSObject {
    _PKAppleBalanceAddMoneyUIManager * _manager;
}

- (void).cxx_destruct;
- (id)initWithAccount:(id)arg1;
- (void)presentAMSRedeemGiftcardFromViewController:(id)arg1 webViewDelegate:(id)arg2;
- (void)presentAddMoneyFromViewController:(id)arg1 dtuConfiguration:(id)arg2 inStoreToken:(id)arg3;
- (void)presentAddMoneyInterstitialFromViewController:(id)arg1 dtuConfiguration:(id)arg2 inStoreToken:(id)arg3;
- (void)presentDirectTopUpFromViewController:(id)arg1 context:(long long)arg2 configuration:(id)arg3 promotion:(id)arg4 completion:(id /* block */)arg5;
- (void)presentInStoreTopUpFromViewController:(id)arg1 context:(long long)arg2 token:(id)arg3;

@end
