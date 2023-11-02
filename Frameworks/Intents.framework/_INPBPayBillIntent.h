
@interface _INPBPayBillIntent : PBCodable <NSCopying, NSSecureCoding, _INPBPayBillIntent> {
    _INPBBillPayeeValue * _billPayee;
    int  _billType;
    _INPBDateTimeRange * _dueDate;
    _INPBFinancialAccountValue * _fromAccount;
    struct { 
        unsigned int billType : 1; 
    }  _has;
    _INPBIntentMetadata * _intentMetadata;
    _INPBPaymentAmountValue * _transactionAmount;
    _INPBString * _transactionNote;
    _INPBDateTimeRange * _transactionScheduledDate;
}

@property (nonatomic, retain) _INPBBillPayeeValue *billPayee;
@property (nonatomic) int billType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) _INPBDateTimeRange *dueDate;
@property (nonatomic, retain) _INPBFinancialAccountValue *fromAccount;
@property (nonatomic, readonly) bool hasBillPayee;
@property (nonatomic) bool hasBillType;
@property (nonatomic, readonly) bool hasDueDate;
@property (nonatomic, readonly) bool hasFromAccount;
@property (nonatomic, readonly) bool hasIntentMetadata;
@property (nonatomic, readonly) bool hasTransactionAmount;
@property (nonatomic, readonly) bool hasTransactionNote;
@property (nonatomic, readonly) bool hasTransactionScheduledDate;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBIntentMetadata *intentMetadata;
@property (readonly) Class superclass;
@property (nonatomic, retain) _INPBPaymentAmountValue *transactionAmount;
@property (nonatomic, retain) _INPBString *transactionNote;
@property (nonatomic, retain) _INPBDateTimeRange *transactionScheduledDate;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (int)StringAsBillType:(id)arg1;
- (id)billPayee;
- (int)billType;
- (id)billTypeAsString:(int)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (id)dueDate;
- (void)encodeWithCoder:(id)arg1;
- (id)fromAccount;
- (bool)hasBillPayee;
- (bool)hasBillType;
- (bool)hasDueDate;
- (bool)hasFromAccount;
- (bool)hasIntentMetadata;
- (bool)hasTransactionAmount;
- (bool)hasTransactionNote;
- (bool)hasTransactionScheduledDate;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)intentMetadata;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBillPayee:(id)arg1;
- (void)setBillType:(int)arg1;
- (void)setDueDate:(id)arg1;
- (void)setFromAccount:(id)arg1;
- (void)setHasBillType:(bool)arg1;
- (void)setIntentMetadata:(id)arg1;
- (void)setTransactionAmount:(id)arg1;
- (void)setTransactionNote:(id)arg1;
- (void)setTransactionScheduledDate:(id)arg1;
- (id)transactionAmount;
- (id)transactionNote;
- (id)transactionScheduledDate;
- (void)writeTo:(id)arg1;

@end
