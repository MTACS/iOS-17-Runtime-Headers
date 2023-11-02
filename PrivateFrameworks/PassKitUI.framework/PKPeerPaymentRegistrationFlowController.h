
@interface PKPeerPaymentRegistrationFlowController : NSObject {
    PKPeerPaymentAccount * _account;
    PKCurrencyAmount * _currencyAmount;
    NSString * _senderAddress;
    <PKPaymentSetupDelegate> * _setupDelegate;
    unsigned long long  _state;
}

@property (nonatomic, readonly) PKPeerPaymentAccount *account;
@property (nonatomic, readonly) PKCurrencyAmount *currencyAmount;
@property (nonatomic, readonly) NSString *senderAddress;
@property (nonatomic, readonly) <PKPaymentSetupDelegate> *setupDelegate;
@property (nonatomic, readonly) unsigned long long state;

- (void).cxx_destruct;
- (id)account;
- (id)currencyAmount;
- (id)initWithAccount:(id)arg1 currencyAmount:(id)arg2 state:(unsigned long long)arg3 senderAddress:(id)arg4 setupDelegate:(id)arg5;
- (id)initWithUserInfo:(id)arg1 setupDelegate:(id)arg2;
- (void)preflightWithCompletion:(id /* block */)arg1;
- (id)senderAddress;
- (id)setupDelegate;
- (unsigned long long)state;

@end
