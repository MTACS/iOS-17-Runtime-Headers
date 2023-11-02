
@interface _INPBPaymentRecord : PBCodable <NSCopying, NSSecureCoding, _INPBPaymentRecord> {
    _INPBCurrencyAmount * _currencyAmount;
    _INPBCurrencyAmount * _feeAmount;
    struct { 
        unsigned int status : 1; 
    }  _has;
    _INPBString * _note;
    _INPBContact * _payee;
    _INPBContact * _payer;
    _INPBPaymentMethodValue * _paymentMethod;
    int  _status;
}

@property (nonatomic, retain) _INPBCurrencyAmount *currencyAmount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) _INPBCurrencyAmount *feeAmount;
@property (nonatomic, readonly) bool hasCurrencyAmount;
@property (nonatomic, readonly) bool hasFeeAmount;
@property (nonatomic, readonly) bool hasNote;
@property (nonatomic, readonly) bool hasPayee;
@property (nonatomic, readonly) bool hasPayer;
@property (nonatomic, readonly) bool hasPaymentMethod;
@property (nonatomic) bool hasStatus;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBString *note;
@property (nonatomic, retain) _INPBContact *payee;
@property (nonatomic, retain) _INPBContact *payer;
@property (nonatomic, retain) _INPBPaymentMethodValue *paymentMethod;
@property (nonatomic) int status;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (int)StringAsStatus:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currencyAmount;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)feeAmount;
- (bool)hasCurrencyAmount;
- (bool)hasFeeAmount;
- (bool)hasNote;
- (bool)hasPayee;
- (bool)hasPayer;
- (bool)hasPaymentMethod;
- (bool)hasStatus;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)note;
- (id)payee;
- (id)payer;
- (id)paymentMethod;
- (bool)readFrom:(id)arg1;
- (void)setCurrencyAmount:(id)arg1;
- (void)setFeeAmount:(id)arg1;
- (void)setHasStatus:(bool)arg1;
- (void)setNote:(id)arg1;
- (void)setPayee:(id)arg1;
- (void)setPayer:(id)arg1;
- (void)setPaymentMethod:(id)arg1;
- (void)setStatus:(int)arg1;
- (int)status;
- (id)statusAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
