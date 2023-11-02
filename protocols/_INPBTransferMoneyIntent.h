
@protocol _INPBTransferMoneyIntent <NSObject>

@required

- (_INPBFinancialAccountValue *)fromAccount;
- (bool)hasFromAccount;
- (bool)hasIntentMetadata;
- (bool)hasToAccount;
- (bool)hasTransactionAmount;
- (bool)hasTransactionNote;
- (bool)hasTransactionScheduledDate;
- (_INPBIntentMetadata *)intentMetadata;
- (void)setFromAccount:(_INPBFinancialAccountValue *)arg1;
- (void)setIntentMetadata:(_INPBIntentMetadata *)arg1;
- (void)setToAccount:(_INPBFinancialAccountValue *)arg1;
- (void)setTransactionAmount:(_INPBPaymentAmountValue *)arg1;
- (void)setTransactionNote:(NSString *)arg1;
- (void)setTransactionScheduledDate:(_INPBDateTimeRange *)arg1;
- (_INPBFinancialAccountValue *)toAccount;
- (_INPBPaymentAmountValue *)transactionAmount;
- (NSString *)transactionNote;
- (_INPBDateTimeRange *)transactionScheduledDate;

@end
