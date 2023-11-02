
@interface _INPBTransferMoneyIntentResponse : PBCodable <NSCopying, NSSecureCoding, _INPBTransferMoneyIntentResponse> {
    _INPBFinancialAccountValue * _fromAccount;
    struct { }  _has;
    _INPBFinancialAccountValue * _toAccount;
    _INPBPaymentAmountValue * _transactionAmount;
    NSString * _transactionNote;
    _INPBDateTimeRange * _transactionScheduledDate;
    _INPBCurrencyAmountValue * _transferFee;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) _INPBFinancialAccountValue *fromAccount;
@property (nonatomic, readonly) bool hasFromAccount;
@property (nonatomic, readonly) bool hasToAccount;
@property (nonatomic, readonly) bool hasTransactionAmount;
@property (nonatomic, readonly) bool hasTransactionNote;
@property (nonatomic, readonly) bool hasTransactionScheduledDate;
@property (nonatomic, readonly) bool hasTransferFee;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) _INPBFinancialAccountValue *toAccount;
@property (nonatomic, retain) _INPBPaymentAmountValue *transactionAmount;
@property (nonatomic, copy) NSString *transactionNote;
@property (nonatomic, retain) _INPBDateTimeRange *transactionScheduledDate;
@property (nonatomic, retain) _INPBCurrencyAmountValue *transferFee;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)fromAccount;
- (bool)hasFromAccount;
- (bool)hasToAccount;
- (bool)hasTransactionAmount;
- (bool)hasTransactionNote;
- (bool)hasTransactionScheduledDate;
- (bool)hasTransferFee;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setFromAccount:(id)arg1;
- (void)setToAccount:(id)arg1;
- (void)setTransactionAmount:(id)arg1;
- (void)setTransactionNote:(id)arg1;
- (void)setTransactionScheduledDate:(id)arg1;
- (void)setTransferFee:(id)arg1;
- (id)toAccount;
- (id)transactionAmount;
- (id)transactionNote;
- (id)transactionScheduledDate;
- (id)transferFee;
- (void)writeTo:(id)arg1;

@end
