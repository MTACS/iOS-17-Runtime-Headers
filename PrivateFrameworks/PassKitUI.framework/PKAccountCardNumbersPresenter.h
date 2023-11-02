
@interface PKAccountCardNumbersPresenter : NSObject {
    PKAccount * _account;
    PKAccountService * _accountService;
    long long  _context;
    bool  _isLoadingVirtualCard;
    PKPaymentPass * _pass;
    PKPhysicalCard * _physicalCard;
    PKVirtualCard * _virtualCard;
}

@property (nonatomic, readonly) bool isLoadingVirtualCard;

+ (void)authAndDecryptWithVirtualCard:(id)arg1 completion:(id /* block */)arg2;

- (void).cxx_destruct;
- (void)_prepareAuthForVirtualCard:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithVirtualCard:(id)arg1 physicalCard:(id)arg2 account:(id)arg3 pass:(id)arg4 context:(long long)arg5;
- (bool)isLoadingVirtualCard;
- (void)presentCardNumbersWithCompletion:(id /* block */)arg1;

@end
