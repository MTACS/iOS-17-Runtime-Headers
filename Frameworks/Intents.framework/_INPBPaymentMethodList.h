
@interface _INPBPaymentMethodList : PBCodable <NSCopying, NSSecureCoding, _INPBPaymentMethodList> {
    _INPBCondition * _condition;
    struct { }  _has;
    NSArray * _paymentMethods;
}

@property (nonatomic, retain) _INPBCondition *condition;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasCondition;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *paymentMethods;
@property (nonatomic, readonly) unsigned long long paymentMethodsCount;
@property (readonly) Class superclass;

+ (Class)paymentMethodsType;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addPaymentMethods:(id)arg1;
- (void)clearPaymentMethods;
- (id)condition;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasCondition;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)paymentMethods;
- (id)paymentMethodsAtIndex:(unsigned long long)arg1;
- (unsigned long long)paymentMethodsCount;
- (bool)readFrom:(id)arg1;
- (void)setCondition:(id)arg1;
- (void)setPaymentMethods:(id)arg1;
- (void)writeTo:(id)arg1;

@end
