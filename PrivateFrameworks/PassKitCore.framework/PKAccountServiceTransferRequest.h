
@interface PKAccountServiceTransferRequest : PKPaymentRequest {
    PKAccount * _account;
    NSURL * _accountBaseURL;
    NSString * _accountIdentifier;
    PKCurrencyAmount * _currencyAmount;
    PKBankAccountInformation * _defaultBankAccount;
    unsigned long long  _featureIdentifier;
    PKPeerPaymentAccount * _peerPaymentAccount;
    PKPaymentPass * _peerPaymentPass;
    unsigned long long  _transferType;
}

@property (nonatomic, readonly) PKAccount *account;
@property (nonatomic, readonly, copy) NSURL *accountBaseURL;
@property (nonatomic, readonly, copy) NSString *accountIdentifier;
@property (nonatomic, retain) PKBankAccountInformation *defaultBankAccount;
@property (nonatomic, readonly) PKPeerPaymentAccount *peerPaymentAccount;
@property (nonatomic, readonly) PKPaymentPass *peerPaymentPass;
@property (nonatomic, readonly) bool supportsSplitPayment;
@property (nonatomic, readonly) unsigned long long transferType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_bankAccountsForFundingSources:(id)arg1;
- (id)account;
- (id)accountBaseURL;
- (id)accountIdentifier;
- (id)defaultBankAccount;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithAccount:(id)arg1 peerPaymentAccount:(id)arg2 peerPaymentPass:(id)arg3 transferType:(unsigned long long)arg4 fundingSources:(id)arg5 currencyAmount:(id)arg6;
- (id)initWithAccount:(id)arg1 peerPaymentAccount:(id)arg2 peerPaymentPass:(id)arg3 transferType:(unsigned long long)arg4 fundingSources:(id)arg5 currencyAmount:(id)arg6 paymentDate:(id)arg7 objectSettings:(id)arg8;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToAccountServicePaymentRequest:(id)arg1;
- (void)paymentAmountsWithFundingSources:(unsigned long long)arg1 apc:(id*)arg2 ach:(id*)arg3;
- (id)paymentSummaryItemsWithFundingSources:(unsigned long long)arg1 bankAccount:(id)arg2;
- (id)peerPaymentAccount;
- (id)peerPaymentPass;
- (void)setDefaultBankAccount:(id)arg1;
- (bool)supportsSplitPayment;
- (unsigned long long)transferType;

@end
