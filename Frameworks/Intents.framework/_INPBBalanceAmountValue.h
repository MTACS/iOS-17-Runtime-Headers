
@interface _INPBBalanceAmountValue : PBCodable <NSCopying, NSSecureCoding, _INPBBalanceAmountValue> {
    _INPBCurrencyAmountValue * _currencyAmount;
    _INPBDecimalNumberValue * _customAmount;
    struct { 
        unsigned int type : 1; 
    }  _has;
    int  _type;
    _INPBValueMetadata * _valueMetadata;
}

@property (nonatomic, retain) _INPBCurrencyAmountValue *currencyAmount;
@property (nonatomic, retain) _INPBDecimalNumberValue *customAmount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasCurrencyAmount;
@property (nonatomic, readonly) bool hasCustomAmount;
@property (nonatomic) bool hasType;
@property (nonatomic, readonly) bool hasValueMetadata;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) int type;
@property (nonatomic, retain) _INPBValueMetadata *valueMetadata;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (int)StringAsType:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currencyAmount;
- (id)customAmount;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasCurrencyAmount;
- (bool)hasCustomAmount;
- (bool)hasType;
- (bool)hasValueMetadata;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCurrencyAmount:(id)arg1;
- (void)setCustomAmount:(id)arg1;
- (void)setHasType:(bool)arg1;
- (void)setType:(int)arg1;
- (void)setValueMetadata:(id)arg1;
- (int)type;
- (id)typeAsString:(int)arg1;
- (id)valueMetadata;
- (void)writeTo:(id)arg1;

@end
