
@interface _INPBSearchForBillsIntent : PBCodable <NSCopying, NSSecureCoding, _INPBSearchForBillsIntent> {
    _INPBBillPayeeValue * _billPayee;
    int  _billType;
    _INPBDateTimeRange * _dueDateRange;
    struct { 
        unsigned int billType : 1; 
        unsigned int status : 1; 
    }  _has;
    _INPBIntentMetadata * _intentMetadata;
    _INPBDateTimeRange * _paymentDateRange;
    int  _status;
}

@property (nonatomic, retain) _INPBBillPayeeValue *billPayee;
@property (nonatomic) int billType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) _INPBDateTimeRange *dueDateRange;
@property (nonatomic, readonly) bool hasBillPayee;
@property (nonatomic) bool hasBillType;
@property (nonatomic, readonly) bool hasDueDateRange;
@property (nonatomic, readonly) bool hasIntentMetadata;
@property (nonatomic, readonly) bool hasPaymentDateRange;
@property (nonatomic) bool hasStatus;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBIntentMetadata *intentMetadata;
@property (nonatomic, retain) _INPBDateTimeRange *paymentDateRange;
@property (nonatomic) int status;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (int)StringAsBillType:(id)arg1;
- (int)StringAsStatus:(id)arg1;
- (id)billPayee;
- (int)billType;
- (id)billTypeAsString:(int)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (id)dueDateRange;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasBillPayee;
- (bool)hasBillType;
- (bool)hasDueDateRange;
- (bool)hasIntentMetadata;
- (bool)hasPaymentDateRange;
- (bool)hasStatus;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)intentMetadata;
- (bool)isEqual:(id)arg1;
- (id)paymentDateRange;
- (bool)readFrom:(id)arg1;
- (void)setBillPayee:(id)arg1;
- (void)setBillType:(int)arg1;
- (void)setDueDateRange:(id)arg1;
- (void)setHasBillType:(bool)arg1;
- (void)setHasStatus:(bool)arg1;
- (void)setIntentMetadata:(id)arg1;
- (void)setPaymentDateRange:(id)arg1;
- (void)setStatus:(int)arg1;
- (int)status;
- (id)statusAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
