
@interface PKPayLaterAccountProductDetails : NSObject <NSCopying, NSSecureCoding> {
    PKCurrencyAmount * _amountPaid;
    PKCurrencyAmount * _currentBalance;
    PKCurrencyAmount * _maximumSinglePurchaseAmount;
    PKCurrencyAmount * _minimumSinglePurchaseAmount;
    NSTimeZone * _productTimeZone;
    PKCurrencyAmount * _totalFinanced;
}

@property (nonatomic, retain) PKCurrencyAmount *amountPaid;
@property (nonatomic, retain) PKCurrencyAmount *currentBalance;
@property (nonatomic, retain) PKCurrencyAmount *maximumSinglePurchaseAmount;
@property (nonatomic, retain) PKCurrencyAmount *minimumSinglePurchaseAmount;
@property (nonatomic, copy) NSTimeZone *productTimeZone;
@property (nonatomic, retain) PKCurrencyAmount *totalFinanced;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)amountPaid;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currentBalance;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)maximumSinglePurchaseAmount;
- (id)minimumSinglePurchaseAmount;
- (id)productTimeZone;
- (void)setAmountPaid:(id)arg1;
- (void)setCurrentBalance:(id)arg1;
- (void)setMaximumSinglePurchaseAmount:(id)arg1;
- (void)setMinimumSinglePurchaseAmount:(id)arg1;
- (void)setProductTimeZone:(id)arg1;
- (void)setTotalFinanced:(id)arg1;
- (id)totalFinanced;

@end
