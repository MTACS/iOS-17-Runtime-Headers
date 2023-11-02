
@protocol MUFactoidViewModel <NSObject>

@required

- (UIImage *)buildSymbolWithFont:(UIFont *)arg1;
- (UIColor *)darkSymbolColor;
- (bool)shouldReverseForRTLLayout;
- (UIColor *)symbolColor;
- (NSString *)symbolName;
- (NSString *)titleString;
- (NSString *)valueString;

@end
