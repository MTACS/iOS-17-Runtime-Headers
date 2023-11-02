
@interface INPaymentAmount : NSObject <INJSONSerializable, NSCopying, NSSecureCoding> {
    INCurrencyAmount * _amount;
    long long  _amountType;
}

@property (nonatomic, readonly, copy) INCurrencyAmount *amount;
@property (nonatomic, readonly) long long amountType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;
- (id)_intents_readableTitleWithLocalizer:(id)arg1 metadata:(id)arg2;
- (id)amount;
- (long long)amountType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithAmountType:(long long)arg1 amount:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
