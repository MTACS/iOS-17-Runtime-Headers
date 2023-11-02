
@protocol _INPBPaymentRecord <NSObject>

@required

- (int)StringAsStatus:(NSString *)arg1;
- (_INPBCurrencyAmount *)currencyAmount;
- (_INPBCurrencyAmount *)feeAmount;
- (bool)hasCurrencyAmount;
- (bool)hasFeeAmount;
- (bool)hasNote;
- (bool)hasPayee;
- (bool)hasPayer;
- (bool)hasPaymentMethod;
- (bool)hasStatus;
- (_INPBString *)note;
- (_INPBContact *)payee;
- (_INPBContact *)payer;
- (_INPBPaymentMethodValue *)paymentMethod;
- (void)setCurrencyAmount:(_INPBCurrencyAmount *)arg1;
- (void)setFeeAmount:(_INPBCurrencyAmount *)arg1;
- (void)setHasStatus:(bool)arg1;
- (void)setNote:(_INPBString *)arg1;
- (void)setPayee:(_INPBContact *)arg1;
- (void)setPayer:(_INPBContact *)arg1;
- (void)setPaymentMethod:(_INPBPaymentMethodValue *)arg1;
- (void)setStatus:(int)arg1;
- (int)status;
- (NSString *)statusAsString:(int)arg1;

@end
