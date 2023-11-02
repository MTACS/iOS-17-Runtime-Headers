
@interface PKPaymentTransactionAmountModifier : NSObject <NSCopying, NSSecureCoding> {
    PKTransactionAmount * _amount;
    NSString * _modifierDescription;
    long long  _order;
    long long  _type;
    NSString * _typeString;
}

@property (nonatomic, copy) PKTransactionAmount *amount;
@property (nonatomic, copy) NSString *modifierDescription;
@property (nonatomic) long long order;
@property (nonatomic) long long type;
@property (nonatomic, copy) NSString *typeString;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)amount;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToPaymentTransactionAmountModifier:(id)arg1;
- (id)modifierDescription;
- (long long)order;
- (void)setAmount:(id)arg1;
- (void)setModifierDescription:(id)arg1;
- (void)setOrder:(long long)arg1;
- (void)setType:(long long)arg1;
- (void)setTypeString:(id)arg1;
- (long long)type;
- (id)typeString;

@end
