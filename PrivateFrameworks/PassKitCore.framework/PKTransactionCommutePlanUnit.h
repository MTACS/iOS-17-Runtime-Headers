
@interface PKTransactionCommutePlanUnit : NSObject <NSCopying, NSSecureCoding> {
    NSString * _identifier;
    NSString * _label;
    unsigned long long  _planType;
    PKCurrencyAmount * _valueCount;
}

@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, copy) NSString *label;
@property (nonatomic, readonly) unsigned long long planType;
@property (nonatomic, readonly, copy) PKCurrencyAmount *valueCount;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithCountPlanIdentifier:(id)arg1 currencyCode:(id)arg2 value:(long long)arg3 label:(id)arg4;
- (id)initWithDictionary:(id)arg1;
- (id)initWithTimedPlanIdentifier:(id)arg1 label:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)label;
- (unsigned long long)planType;
- (void)setLabel:(id)arg1;
- (id)valueCount;

@end
