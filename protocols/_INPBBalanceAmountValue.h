
@protocol _INPBBalanceAmountValue <NSObject>

@required

- (int)StringAsType:(NSString *)arg1;
- (_INPBCurrencyAmountValue *)currencyAmount;
- (_INPBDecimalNumberValue *)customAmount;
- (bool)hasCurrencyAmount;
- (bool)hasCustomAmount;
- (bool)hasType;
- (bool)hasValueMetadata;
- (void)setCurrencyAmount:(_INPBCurrencyAmountValue *)arg1;
- (void)setCustomAmount:(_INPBDecimalNumberValue *)arg1;
- (void)setHasType:(bool)arg1;
- (void)setType:(int)arg1;
- (void)setValueMetadata:(_INPBValueMetadata *)arg1;
- (int)type;
- (NSString *)typeAsString:(int)arg1;
- (_INPBValueMetadata *)valueMetadata;

@end
