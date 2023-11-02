
@interface PKAppleBalanceAccountSummary : NSObject <NSCopying, NSSecureCoding> {
    NSDecimalNumber * _currentBalance;
}

@property (nonatomic, copy) NSDecimalNumber *currentBalance;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currentBalance;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setCurrentBalance:(id)arg1;

@end
