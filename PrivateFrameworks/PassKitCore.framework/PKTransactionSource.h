
@interface PKTransactionSource : NSObject <NSSecureCoding> {
    PKAccount * _account;
    PKAccountUser * _accountUser;
    PKPaymentPass * _paymentPass;
    PKPeerPaymentAccount * _peerPaymentAccount;
    unsigned long long  _type;
}

@property (nonatomic, readonly) PKAccount *account;
@property (nonatomic, readonly) PKAccountUser *accountUser;
@property (nonatomic, readonly) PKPaymentPass *paymentPass;
@property (nonatomic, readonly) PKPeerPaymentAccount *peerPaymentAccount;
@property (nonatomic, readonly, copy) NSSet *transactionSourceIdentifiers;
@property (nonatomic, readonly) unsigned long long type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)account;
- (id)accountUser;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithAccount:(id)arg1;
- (id)initWithAccountUser:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPaymentPass:(id)arg1;
- (id)initWithPeerPaymentAccount:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)paymentPass;
- (id)peerPaymentAccount;
- (id)transactionSourceIdentifiers;
- (unsigned long long)type;

@end
