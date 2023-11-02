
@protocol _INPBPriceRangeValue <NSObject>

@required

- (NSString *)currencyCode;
- (bool)hasCurrencyCode;
- (bool)hasMaximumPrice;
- (bool)hasMinimumPrice;
- (bool)hasValueMetadata;
- (_INPBDecimalNumberValue *)maximumPrice;
- (_INPBDecimalNumberValue *)minimumPrice;
- (void)setCurrencyCode:(NSString *)arg1;
- (void)setMaximumPrice:(_INPBDecimalNumberValue *)arg1;
- (void)setMinimumPrice:(_INPBDecimalNumberValue *)arg1;
- (void)setValueMetadata:(_INPBValueMetadata *)arg1;
- (_INPBValueMetadata *)valueMetadata;

@end
