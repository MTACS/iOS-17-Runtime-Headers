
@interface PKTransactionReceiptSummaryItem : NSObject <NSCopying, NSSecureCoding> {
    NSDecimalNumber * _amount;
    NSString * _currencyCode;
    NSString * _label;
    long long  _type;
}

@property (nonatomic, retain) NSDecimalNumber *amount;
@property (nonatomic, readonly) PKCurrencyAmount *currencyAmount;
@property (nonatomic, copy) NSString *currencyCode;
@property (nonatomic, copy) NSString *label;
@property (nonatomic) long long type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)amount;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currencyAmount;
- (id)currencyCode;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1 bundle:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToTransactionReceiptSummaryItem:(id)arg1;
- (id)label;
- (void)setAmount:(id)arg1;
- (void)setCurrencyCode:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setType:(long long)arg1;
- (long long)type;

@end
