
@protocol _INPBTransferMoneyIntentResponse <NSObject>

@required

- (_INPBFinancialAccountValue *)fromAccount;
- (bool)hasFromAccount;
- (bool)hasToAccount;
- (bool)hasTransactionAmount;
- (bool)hasTransactionNote;
- (bool)hasTransactionScheduledDate;
- (bool)hasTransferFee;
- (void)setFromAccount:(_INPBFinancialAccountValue *)arg1;
- (void)setToAccount:(_INPBFinancialAccountValue *)arg1;
- (void)setTransactionAmount:(_INPBPaymentAmountValue *)arg1;
- (void)setTransactionNote:(NSString *)arg1;
- (void)setTransactionScheduledDate:(_INPBDateTimeRange *)arg1;
- (void)setTransferFee:(_INPBCurrencyAmountValue *)arg1;
- (_INPBFinancialAccountValue *)toAccount;
- (_INPBPaymentAmountValue *)transactionAmount;
- (NSString *)transactionNote;
- (_INPBDateTimeRange *)transactionScheduledDate;
- (_INPBCurrencyAmountValue *)transferFee;

@end
