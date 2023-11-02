
@protocol RFSymbolImage <NSObject>

@required

- (RFColor *)background_color;
- (NSDictionary *)dictionaryRepresentation;
- (int)image_style;
- (NSData *)jsonData;
- (NSString *)name;
- (RFColor *)primary_color;
- (bool)punches_through_background;
- (RFColor *)secondary_color;
- (void)setBackground_color:(RFColor *)arg1;
- (void)setImage_style:(int)arg1;
- (void)setName:(NSString *)arg1;
- (void)setPrimary_color:(RFColor *)arg1;
- (void)setPunches_through_background:(bool)arg1;
- (void)setSecondary_color:(RFColor *)arg1;
- (void)setSymbol_rendering_mode:(int)arg1;
- (int)symbol_rendering_mode;

@end
