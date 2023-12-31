
@interface NPKMockPeerPaymentAccountManager : NPKPeerPaymentAccountManager {
    NSObject<OS_dispatch_queue> * _accountQueue;
    unsigned long long  _balanceOffset;
    PKPeerPaymentAccount * _mockAccount;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_updateMockBalance;
- (id)account;
- (void)dealloc;
- (id)initWithPeerPaymentService:(id)arg1;

@end
