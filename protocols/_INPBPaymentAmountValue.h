
@protocol _INPBPaymentAmountValue <NSObject>

@required

- (int)StringAsAmountType:(NSString *)arg1;
- (int)amountType;
- (NSString *)amountTypeAsString:(int)arg1;
- (bool)hasAmountType;
- (bool)hasValue;
- (void)setAmountType:(int)arg1;
- (void)setHasAmountType:(bool)arg1;
- (void)setValue:(_INPBCurrencyAmountValue *)arg1;
- (_INPBCurrencyAmountValue *)value;

@end
