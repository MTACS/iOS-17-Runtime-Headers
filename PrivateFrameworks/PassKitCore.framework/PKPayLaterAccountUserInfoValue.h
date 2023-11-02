
@interface PKPayLaterAccountUserInfoValue : NSObject <NSCopying, NSSecureCoding> {
    PKCurrencyAmount * _currencyAmount;
    NSDate * _date;
    bool  _hasHiddenValue;
    NSString * _odiAttribute;
    NSString * _text;
}

@property (nonatomic, retain) PKCurrencyAmount *currencyAmount;
@property (nonatomic, copy) NSDate *date;
@property (nonatomic) bool hasHiddenValue;
@property (nonatomic, copy) NSString *odiAttribute;
@property (nonatomic, copy) NSString *text;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currencyAmount;
- (id)date;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasHiddenValue;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)odiAttribute;
- (void)setCurrencyAmount:(id)arg1;
- (void)setDate:(id)arg1;
- (void)setHasHiddenValue:(bool)arg1;
- (void)setOdiAttribute:(id)arg1;
- (void)setText:(id)arg1;
- (id)text;

@end
