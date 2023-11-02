
@interface PKPeerPaymentCredential : PKPaymentCredential {
    PKPeerPaymentAccount * _account;
    PKCurrencyAmount * _amount;
    unsigned long long  _flowState;
    PKPeerPaymentPassDetailsResponse * _passDetailsResponse;
    NSString * _pendingPaymentSenderAddress;
    NSString * _pendingPaymentSenderName;
}

@property (nonatomic, readonly) PKPeerPaymentAccount *account;
@property (nonatomic, retain) PKCurrencyAmount *amount;
@property (nonatomic) unsigned long long flowState;
@property (nonatomic, readonly, copy) NSString *ownershipTokenIdentifier;
@property (nonatomic, retain) PKPeerPaymentPassDetailsResponse *passDetailsResponse;
@property (nonatomic, copy) NSString *pendingPaymentSenderAddress;
@property (nonatomic, readonly, copy) NSString *pendingPaymentSenderName;

- (void).cxx_destruct;
- (bool)_isEqualToCredential:(id)arg1;
- (id)account;
- (id)amount;
- (id)detailDescription;
- (unsigned long long)flowState;
- (unsigned long long)hash;
- (id)initWithPeerPaymentAccount:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)longDescription;
- (id)ownershipTokenIdentifier;
- (id)passDetailsResponse;
- (id)pendingPaymentSenderAddress;
- (id)pendingPaymentSenderName;
- (void)setAmount:(id)arg1;
- (void)setFlowState:(unsigned long long)arg1;
- (void)setPassDetailsResponse:(id)arg1;
- (void)setPendingPaymentSenderAddress:(id)arg1;
- (bool)supportsSuperEasyProvisioning;

@end
