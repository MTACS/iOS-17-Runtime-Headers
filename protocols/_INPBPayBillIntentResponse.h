
@protocol _INPBPayBillIntentResponse <NSObject>

@required

- (_INPBBillDetailsValue *)billDetails;
- (_INPBFinancialAccountValue *)fromAccount;
- (bool)hasBillDetails;
- (bool)hasFromAccount;
- (bool)hasTransactionAmount;
- (bool)hasTransactionNote;
- (bool)hasTransactionScheduledDate;
- (void)setBillDetails:(_INPBBillDetailsValue *)arg1;
- (void)setFromAccount:(_INPBFinancialAccountValue *)arg1;
- (void)setTransactionAmount:(_INPBPaymentAmountValue *)arg1;
- (void)setTransactionNote:(_INPBString *)arg1;
- (void)setTransactionScheduledDate:(_INPBDateTimeRange *)arg1;
- (_INPBPaymentAmountValue *)transactionAmount;
- (_INPBString *)transactionNote;
- (_INPBDateTimeRange *)transactionScheduledDate;

@end
