
@interface _INPBSendPaymentIntent : PBCodable <NSCopying, NSSecureCoding, _INPBSendPaymentIntent> {
    _INPBCurrencyAmount * _currencyAmount;
    struct { }  _has;
    _INPBIntentMetadata * _intentMetadata;
    _INPBString * _note;
    _INPBContact * _payee;
}

@property (nonatomic, retain) _INPBCurrencyAmount *currencyAmount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasCurrencyAmount;
@property (nonatomic, readonly) bool hasIntentMetadata;
@property (nonatomic, readonly) bool hasNote;
@property (nonatomic, readonly) bool hasPayee;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBIntentMetadata *intentMetadata;
@property (nonatomic, retain) _INPBString *note;
@property (nonatomic, retain) _INPBContact *payee;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currencyAmount;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasCurrencyAmount;
- (bool)hasIntentMetadata;
- (bool)hasNote;
- (bool)hasPayee;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)intentMetadata;
- (bool)isEqual:(id)arg1;
- (id)note;
- (id)payee;
- (bool)readFrom:(id)arg1;
- (void)setCurrencyAmount:(id)arg1;
- (void)setIntentMetadata:(id)arg1;
- (void)setNote:(id)arg1;
- (void)setPayee:(id)arg1;
- (void)writeTo:(id)arg1;

@end
