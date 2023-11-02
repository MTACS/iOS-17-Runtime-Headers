
@interface _INPBTransferMoneyIntent : PBCodable <NSCopying, NSSecureCoding, _INPBTransferMoneyIntent> {
    _INPBFinancialAccountValue * _fromAccount;
    struct { }  _has;
    _INPBIntentMetadata * _intentMetadata;
    _INPBFinancialAccountValue * _toAccount;
    _INPBPaymentAmountValue * _transactionAmount;
    NSString * _transactionNote;
    _INPBDateTimeRange * _transactionScheduledDate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) _INPBFinancialAccountValue *fromAccount;
@property (nonatomic, readonly) bool hasFromAccount;
@property (nonatomic, readonly) bool hasIntentMetadata;
@property (nonatomic, readonly) bool hasToAccount;
@property (nonatomic, readonly) bool hasTransactionAmount;
@property (nonatomic, readonly) bool hasTransactionNote;
@property (nonatomic, readonly) bool hasTransactionScheduledDate;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBIntentMetadata *intentMetadata;
@property (readonly) Class superclass;
@property (nonatomic, retain) _INPBFinancialAccountValue *toAccount;
@property (nonatomic, retain) _INPBPaymentAmountValue *transactionAmount;
@property (nonatomic, copy) NSString *transactionNote;
@property (nonatomic, retain) _INPBDateTimeRange *transactionScheduledDate;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)fromAccount;
- (bool)hasFromAccount;
- (bool)hasIntentMetadata;
- (bool)hasToAccount;
- (bool)hasTransactionAmount;
- (bool)hasTransactionNote;
- (bool)hasTransactionScheduledDate;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)intentMetadata;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setFromAccount:(id)arg1;
- (void)setIntentMetadata:(id)arg1;
- (void)setToAccount:(id)arg1;
- (void)setTransactionAmount:(id)arg1;
- (void)setTransactionNote:(id)arg1;
- (void)setTransactionScheduledDate:(id)arg1;
- (id)toAccount;
- (id)transactionAmount;
- (id)transactionNote;
- (id)transactionScheduledDate;
- (void)writeTo:(id)arg1;

@end
