
@interface PKPaymentTransactionTag : NSObject <NSSecureCoding> {
    NSString * _localeIdentifier;
    NSString * _localizedTitle;
    NSDecimalNumber * _rank;
    unsigned long long  _type;
}

@property (nonatomic, retain) NSString *localeIdentifier;
@property (nonatomic, retain) NSString *localizedTitle;
@property (nonatomic, retain) NSDecimalNumber *rank;
@property (nonatomic) unsigned long long type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)localeIdentifier;
- (id)localizedTitle;
- (id)rank;
- (void)setLocaleIdentifier:(id)arg1;
- (void)setLocalizedTitle:(id)arg1;
- (void)setRank:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (unsigned long long)type;

@end
