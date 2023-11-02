
@interface _INPBBillDetailsValue : PBCodable <NSCopying, NSSecureCoding, _INPBBillDetailsValue> {
    _INPBCurrencyAmountValue * _amountDue;
    _INPBBillPayeeValue * _billPayee;
    int  _billType;
    _INPBDateTime * _dueDate;
    struct { 
        unsigned int billType : 1; 
        unsigned int status : 1; 
    }  _has;
    _INPBCurrencyAmountValue * _lateFee;
    _INPBCurrencyAmountValue * _minimumDue;
    _INPBDateTime * _paymentDate;
    int  _status;
    _INPBValueMetadata * _valueMetadata;
}

@property (nonatomic, retain) _INPBCurrencyAmountValue *amountDue;
@property (nonatomic, retain) _INPBBillPayeeValue *billPayee;
@property (nonatomic) int billType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) _INPBDateTime *dueDate;
@property (nonatomic, readonly) bool hasAmountDue;
@property (nonatomic, readonly) bool hasBillPayee;
@property (nonatomic) bool hasBillType;
@property (nonatomic, readonly) bool hasDueDate;
@property (nonatomic, readonly) bool hasLateFee;
@property (nonatomic, readonly) bool hasMinimumDue;
@property (nonatomic, readonly) bool hasPaymentDate;
@property (nonatomic) bool hasStatus;
@property (nonatomic, readonly) bool hasValueMetadata;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBCurrencyAmountValue *lateFee;
@property (nonatomic, retain) _INPBCurrencyAmountValue *minimumDue;
@property (nonatomic, retain) _INPBDateTime *paymentDate;
@property (nonatomic) int status;
@property (readonly) Class superclass;
@property (nonatomic, retain) _INPBValueMetadata *valueMetadata;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (int)StringAsBillType:(id)arg1;
- (int)StringAsStatus:(id)arg1;
- (id)amountDue;
- (id)billPayee;
- (int)billType;
- (id)billTypeAsString:(int)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (id)dueDate;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasAmountDue;
- (bool)hasBillPayee;
- (bool)hasBillType;
- (bool)hasDueDate;
- (bool)hasLateFee;
- (bool)hasMinimumDue;
- (bool)hasPaymentDate;
- (bool)hasStatus;
- (bool)hasValueMetadata;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)lateFee;
- (id)minimumDue;
- (id)paymentDate;
- (bool)readFrom:(id)arg1;
- (void)setAmountDue:(id)arg1;
- (void)setBillPayee:(id)arg1;
- (void)setBillType:(int)arg1;
- (void)setDueDate:(id)arg1;
- (void)setHasBillType:(bool)arg1;
- (void)setHasStatus:(bool)arg1;
- (void)setLateFee:(id)arg1;
- (void)setMinimumDue:(id)arg1;
- (void)setPaymentDate:(id)arg1;
- (void)setStatus:(int)arg1;
- (void)setValueMetadata:(id)arg1;
- (int)status;
- (id)statusAsString:(int)arg1;
- (id)valueMetadata;
- (void)writeTo:(id)arg1;

@end