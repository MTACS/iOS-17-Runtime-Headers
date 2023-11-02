
@protocol _INPBRideFareLineItem <NSObject>

@required

- (NSString *)currencyCode;
- (bool)hasCurrencyCode;
- (bool)hasPrice;
- (bool)hasTitle;
- (_INPBDecimalNumberValue *)price;
- (void)setCurrencyCode:(NSString *)arg1;
- (void)setPrice:(_INPBDecimalNumberValue *)arg1;
- (void)setTitle:(NSString *)arg1;
- (NSString *)title;

@end
