
@protocol _INPBRequestPaymentIntentResponse <NSObject>

@required

- (bool)hasPaymentRecord;
- (_INPBPaymentRecord *)paymentRecord;
- (void)setPaymentRecord:(_INPBPaymentRecord *)arg1;

@end
