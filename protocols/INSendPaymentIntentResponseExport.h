
@protocol INSendPaymentIntentResponseExport <NSObject, JSExport>

@required

- (long long)code;
- (INPaymentRecord *)paymentRecord;
- (void)setPaymentRecord:(INPaymentRecord *)arg1;

@end
