
@interface STSPaymentRequestBase : NSObject <NSSecureCoding> {
    NSString * _countryCode;
    NSString * _currencyCode;
    NSDecimalNumber * _transactionAmount;
    NSDate * _transactionDate;
}

@property (nonatomic, retain) NSString *countryCode;
@property (nonatomic, retain) NSString *currencyCode;
@property (nonatomic, retain) NSDecimalNumber *transactionAmount;
@property (nonatomic, retain) NSDate *transactionDate;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)countryCode;
- (id)currencyCode;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTransactionAmount:(id)arg1 currencyCode:(id)arg2 countryCode:(id)arg3 transactionDate:(id)arg4;
- (void)setCountryCode:(id)arg1;
- (void)setCurrencyCode:(id)arg1;
- (void)setTransactionAmount:(id)arg1;
- (void)setTransactionDate:(id)arg1;
- (id)transactionAmount;
- (id)transactionDate;

@end
