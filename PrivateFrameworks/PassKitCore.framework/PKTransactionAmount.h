
@interface PKTransactionAmount : NSObject <NSCopying, NSSecureCoding> {
    PKCurrencyAmount * _amount;
    NSString * _label;
    bool  _pending;
    NSString * _unitIdentifier;
}

@property (nonatomic, retain) PKCurrencyAmount *amount;
@property (nonatomic, copy) NSString *label;
@property (getter=isPending, nonatomic) bool pending;
@property (nonatomic, copy) NSString *unitIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)amount;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithCurrencyAmount:(id)arg1;
- (id)initWithCurrencyAmount:(id)arg1 label:(id)arg2;
- (id)initWithCurrencyAmount:(id)arg1 label:(id)arg2 unitIdentifier:(id)arg3;
- (id)initWithDictionary:(id)arg1;
- (id)initWithPendingCurrencyAmount:(id)arg1 unitIdentifier:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isPending;
- (id)label;
- (void)setAmount:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setPending:(bool)arg1;
- (void)setUnitIdentifier:(id)arg1;
- (id)unitIdentifier;

@end
