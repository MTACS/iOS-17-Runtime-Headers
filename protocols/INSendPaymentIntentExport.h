
@protocol INSendPaymentIntentExport <NSObject, JSExport>

@required

- (INCurrencyAmount *)currencyAmount;
- (id)init;
- (NSString *)note;
- (INPerson *)payee;
- (void)setCurrencyAmount:(INCurrencyAmount *)arg1;
- (void)setNote:(NSString *)arg1;
- (void)setPayee:(INPerson *)arg1;

@end
