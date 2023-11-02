
@interface PKVirtualCardManager : NSObject {
    PKAccountService * _accountService;
    PKInAppPaymentService * _inAppPaymentService;
    PKPaymentService * _paymentService;
    NSObject<OS_dispatch_queue> * _virtualCardQueue;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *virtualCardQueue;

+ (void)isVPANAutoFillSupported:(id /* block */)arg1;

- (void).cxx_destruct;
- (void)accountVirtualCardsWithOptions:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)activeVirtualCardsWithOptions:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)credentialsForVirtualCard:(id)arg1 authorization:(id)arg2 options:(unsigned long long)arg3 completion:(id /* block */)arg4;
- (void)credentialsForVirtualCard:(id)arg1 authorization:(id)arg2 options:(unsigned long long)arg3 merchantHost:(id)arg4 completion:(id /* block */)arg5;
- (void)dismissDetailsForVirtualCard:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (void)promptDetailsForVirtualCard:(id)arg1 completion:(id /* block */)arg2;
- (void)queryKeychainForVirtualCard:(id /* block */)arg1;
- (void)setVirtualCardQueue:(id)arg1;
- (id)urlToListOfCards;
- (id)urlToPassDetailsForVirtualCard:(id)arg1;
- (id)virtualCardQueue;
- (void)vpanVirtualCardsWithOptions:(unsigned long long)arg1 completion:(id /* block */)arg2;

@end
