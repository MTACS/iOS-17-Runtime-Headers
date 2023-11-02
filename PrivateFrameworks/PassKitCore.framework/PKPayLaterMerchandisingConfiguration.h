
@interface PKPayLaterMerchandisingConfiguration : NSObject <NSCopying, NSSecureCoding> {
    long long  _action;
    NSDecimalNumber * _amount;
    NSString * _currency;
    long long  _displayStyle;
    unsigned long long  _environmentType;
    unsigned long long  _theme;
}

@property (nonatomic) long long action;
@property (nonatomic, copy) NSDecimalNumber *amount;
@property (nonatomic, copy) NSString *currency;
@property (nonatomic) long long displayStyle;
@property (nonatomic) unsigned long long environmentType;
@property (nonatomic) unsigned long long theme;

+ (id)_numberFormatter;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)action;
- (id)amount;
- (id)amountString;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currency;
- (id)description;
- (long long)displayStyle;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)environmentType;
- (unsigned long long)hash;
- (id)initWithAmount:(id)arg1 currency:(id)arg2 displayStyle:(long long)arg3 action:(long long)arg4 theme:(unsigned long long)arg5 environmentType:(unsigned long long)arg6;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToConfiguration:(id)arg1;
- (id)localeString;
- (id)region;
- (void)setAction:(long long)arg1;
- (void)setAmount:(id)arg1;
- (void)setCurrency:(id)arg1;
- (void)setDisplayStyle:(long long)arg1;
- (void)setEnvironmentType:(unsigned long long)arg1;
- (void)setTheme:(unsigned long long)arg1;
- (id)stringValueForProperty:(unsigned long long)arg1;
- (unsigned long long)theme;

@end
