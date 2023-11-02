
@protocol GEOServerFormattedString <NSObject, NSCoding>

@required

- (<GEOServerConditionalString> *)alternativeString;
- (NSString *)basicString;
- (NSArray *)formatStrings;
- (NSArray *)formatStyles;
- (NSArray *)formatTokens;
- (bool)isPrivate;
- (NSArray *)separators;
- (NSString *)stringWithDefaultValues;

@end
