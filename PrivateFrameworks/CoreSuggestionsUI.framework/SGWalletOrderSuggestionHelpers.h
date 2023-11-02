
@interface SGWalletOrderSuggestionHelpers : NSObject {
    FKSuggestionsOrderBanner * _banner;
}

- (void).cxx_destruct;
- (id)attributedSubtitle;
- (id)initWithOrderData:(id)arg1;
- (id)merchantName;
- (id)orderDeepLink;
- (id)orderPreviewControllerForURL:(id)arg1 completion:(id /* block */)arg2;
- (void)saveOrderForURL:(id)arg1 completion:(id /* block */)arg2;
- (id)walletLogo;

@end
