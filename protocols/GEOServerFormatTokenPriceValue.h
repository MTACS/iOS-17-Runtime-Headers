
@protocol GEOServerFormatTokenPriceValue <NSObject, NSCoding>

@required

- (NSString *)currencyCode;
- (double)value;

@end
