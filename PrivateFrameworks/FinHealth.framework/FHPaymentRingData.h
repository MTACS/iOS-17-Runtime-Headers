
@interface FHPaymentRingData : NSObject {
    unsigned long long  _paymentAmountCategory;
    NSDecimalNumber * _transactionAmount;
    NSDate * _transactionDate;
}

@property (nonatomic) unsigned long long paymentAmountCategory;
@property (nonatomic, copy) NSDecimalNumber *transactionAmount;
@property (nonatomic, copy) NSDate *transactionDate;

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (id)initWithTransactionDate:(id)arg1 transactionAmount:(id)arg2 paymentAmountCategory:(unsigned long long)arg3;
- (bool)isEqual:(id)arg1;
- (unsigned long long)paymentAmountCategory;
- (void)setPaymentAmountCategory:(unsigned long long)arg1;
- (void)setTransactionAmount:(id)arg1;
- (void)setTransactionDate:(id)arg1;
- (id)transactionAmount;
- (id)transactionDate;

@end
