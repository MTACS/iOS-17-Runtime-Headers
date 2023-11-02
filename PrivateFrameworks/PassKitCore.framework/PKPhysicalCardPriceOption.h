
@interface PKPhysicalCardPriceOption : NSObject <NSSecureCoding> {
    PKCurrencyAmount * _amount;
    unsigned long long  _reason;
}

@property (nonatomic, retain) PKCurrencyAmount *amount;
@property (nonatomic) unsigned long long reason;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)amount;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionaryRepresentation;
- (unsigned long long)reason;
- (void)setAmount:(id)arg1;
- (void)setReason:(unsigned long long)arg1;

@end
