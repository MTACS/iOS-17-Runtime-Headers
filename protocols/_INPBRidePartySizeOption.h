
@protocol _INPBRidePartySizeOption <NSObject>

@required

- (bool)hasPartySizeRange;
- (bool)hasPriceRange;
- (bool)hasSizeDescription;
- (_INPBRangeValue *)partySizeRange;
- (_INPBPriceRangeValue *)priceRange;
- (void)setPartySizeRange:(_INPBRangeValue *)arg1;
- (void)setPriceRange:(_INPBPriceRangeValue *)arg1;
- (void)setSizeDescription:(NSString *)arg1;
- (NSString *)sizeDescription;

@end
