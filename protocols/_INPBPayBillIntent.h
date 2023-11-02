
@protocol _INPBPayBillIntent <NSObject>

@required

- (int)StringAsBillType:(NSString *)arg1;
- (_INPBBillPayeeValue *)billPayee;
- (int)billType;
- (NSString *)billTypeAsString:(int)arg1;
- (_INPBDateTimeRange *)dueDate;
- (_INPBFinancialAccountValue *)fromAccount;
- (bool)hasBillPayee;
- (bool)hasBillType;
- (bool)hasDueDate;
- (bool)hasFromAccount;
- (bool)hasIntentMetadata;
- (bool)hasTransactionAmount;
- (bool)hasTransactionNote;
- (bool)hasTransactionScheduledDate;
- (_INPBIntentMetadata *)intentMetadata;
- (void)setBillPayee:(_INPBBillPayeeValue *)arg1;
- (void)setBillType:(int)arg1;
- (void)setDueDate:(_INPBDateTimeRange *)arg1;
- (void)setFromAccount:(_INPBFinancialAccountValue *)arg1;
- (void)setHasBillType:(bool)arg1;
- (void)setIntentMetadata:(_INPBIntentMetadata *)arg1;
- (void)setTransactionAmount:(_INPBPaymentAmountValue *)arg1;
- (void)setTransactionNote:(_INPBString *)arg1;
- (void)setTransactionScheduledDate:(_INPBDateTimeRange *)arg1;
- (_INPBPaymentAmountValue *)transactionAmount;
- (_INPBString *)transactionNote;
- (_INPBDateTimeRange *)transactionScheduledDate;

@end
