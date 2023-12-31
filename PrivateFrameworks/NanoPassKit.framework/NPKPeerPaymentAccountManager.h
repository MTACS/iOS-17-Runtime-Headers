
@interface NPKPeerPaymentAccountManager : NSObject {
    PKPeerPaymentAccount * _account;
    PKPeerPaymentService * _peerPaymentService;
}

@property (retain) PKPeerPaymentAccount *account;
@property (nonatomic, readonly) PKPeerPaymentService *peerPaymentService;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_handleAccountChanged:(id)arg1;
- (void)_updateAccount;
- (id)account;
- (id)init;
- (id)initWithPeerPaymentService:(id)arg1;
- (id)peerPaymentService;
- (void)setAccount:(id)arg1;

@end
