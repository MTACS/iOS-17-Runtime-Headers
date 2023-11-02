
@interface PKPaymentInstallmentItem : NSObject <NSSecureCoding> {
    NSDecimalNumber * _amount;
    NSDecimalNumber * _apr;
    NSString * _currencyCode;
    long long  _installmentItemType;
    NSString * _programIdentifier;
    NSString * _programTerms;
}

@property (nonatomic, copy) NSDecimalNumber *amount;
@property (nonatomic, copy) NSDecimalNumber *apr;
@property (nonatomic, copy) NSString *currencyCode;
@property (nonatomic) long long installmentItemType;
@property (nonatomic, copy) NSString *programIdentifier;
@property (nonatomic, copy) NSString *programTerms;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)amount;
- (id)apr;
- (id)currencyCode;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (long long)installmentItemType;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToInstallmentItem:(id)arg1;
- (id)programIdentifier;
- (id)programTerms;
- (void)setAmount:(id)arg1;
- (void)setApr:(id)arg1;
- (void)setCurrencyCode:(id)arg1;
- (void)setInstallmentItemType:(long long)arg1;
- (void)setProgramIdentifier:(id)arg1;
- (void)setProgramTerms:(id)arg1;

@end
