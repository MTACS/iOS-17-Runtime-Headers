
@protocol INPayBillIntentResponseExport <NSObject, JSExport>

@required

- (INBillDetails *)billDetails;
- (long long)code;
- (INPaymentAccount *)fromAccount;
- (void)setBillDetails:(INBillDetails *)arg1;
- (void)setFromAccount:(INPaymentAccount *)arg1;
- (void)setTransactionAmount:(INPaymentAmount *)arg1;
- (void)setTransactionNote:(NSString *)arg1;
- (void)setTransactionScheduledDate:(INDateComponentsRange *)arg1;
- (INPaymentAmount *)transactionAmount;
- (NSString *)transactionNote;
- (INDateComponentsRange *)transactionScheduledDate;

@end
