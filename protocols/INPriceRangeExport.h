
@protocol INPriceRangeExport <NSObject, JSExport>

@required

+ (id)_priceWithPriceRangeValue:(_INPBPriceRangeValue *)arg1;

- (NSString *)currencyCode;
- (id)init;
- (NSDecimalNumber *)maximumPrice;
- (NSDecimalNumber *)minimumPrice;
- (void)setCurrencyCode:(NSString *)arg1;
- (void)setMaximumPrice:(NSDecimalNumber *)arg1;
- (void)setMinimumPrice:(NSDecimalNumber *)arg1;

@end
