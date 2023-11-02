
@protocol _INPBCurrencyAmountValue <NSObject>

@required

- (_INPBDecimalNumberValue *)amount;
- (NSString *)currencyCode;
- (bool)hasAmount;
- (bool)hasCurrencyCode;
- (bool)hasValueMetadata;
- (void)setAmount:(_INPBDecimalNumberValue *)arg1;
- (void)setCurrencyCode:(NSString *)arg1;
- (void)setValueMetadata:(_INPBValueMetadata *)arg1;
- (_INPBValueMetadata *)valueMetadata;

@end
