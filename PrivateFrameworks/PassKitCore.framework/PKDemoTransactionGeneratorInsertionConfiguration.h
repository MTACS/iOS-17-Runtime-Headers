
@interface PKDemoTransactionGeneratorInsertionConfiguration : NSObject {
    NSArray * _accountEvents;
    NSString * _accountIdentifier;
    long long  _accountType;
    PKAccountUser * _accountUser;
    unsigned long long  _codingType;
    PKPaymentPass * _paymentPass;
    NSString * _transactionSourceIdentifier;
    NSArray * _transactions;
}

@property (nonatomic, copy) NSArray *accountEvents;
@property (nonatomic, copy) NSString *accountIdentifier;
@property (nonatomic) long long accountType;
@property (nonatomic, retain) PKAccountUser *accountUser;
@property (nonatomic) unsigned long long codingType;
@property (nonatomic, retain) PKPaymentPass *paymentPass;
@property (nonatomic, copy) NSString *transactionSourceIdentifier;
@property (nonatomic, copy) NSArray *transactions;

- (void).cxx_destruct;
- (id)accountEvents;
- (id)accountIdentifier;
- (long long)accountType;
- (id)accountUser;
- (unsigned long long)codingType;
- (id)paymentPass;
- (void)setAccountEvents:(id)arg1;
- (void)setAccountIdentifier:(id)arg1;
- (void)setAccountType:(long long)arg1;
- (void)setAccountUser:(id)arg1;
- (void)setCodingType:(unsigned long long)arg1;
- (void)setPaymentPass:(id)arg1;
- (void)setTransactionSourceIdentifier:(id)arg1;
- (void)setTransactions:(id)arg1;
- (id)transactionSourceIdentifier;
- (id)transactions;

@end
