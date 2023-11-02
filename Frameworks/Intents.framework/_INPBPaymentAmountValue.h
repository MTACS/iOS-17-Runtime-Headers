
@interface _INPBPaymentAmountValue : PBCodable <NSCopying, NSSecureCoding, _INPBPaymentAmountValue> {
    int  _amountType;
    struct { 
        unsigned int amountType : 1; 
    }  _has;
    _INPBCurrencyAmountValue * _value;
}

@property (nonatomic) int amountType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasAmountType;
@property (nonatomic, readonly) bool hasValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) _INPBCurrencyAmountValue *value;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (int)StringAsAmountType:(id)arg1;
- (int)amountType;
- (id)amountTypeAsString:(int)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasAmountType;
- (bool)hasValue;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAmountType:(int)arg1;
- (void)setHasAmountType:(bool)arg1;
- (void)setValue:(id)arg1;
- (id)value;
- (void)writeTo:(id)arg1;

@end
