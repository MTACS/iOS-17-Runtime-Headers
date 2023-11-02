
@protocol _SFPBRFSymbolImage <NSObject>

@required

- (_SFPBRFColor *)background_color;
- (int)image_style;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (NSString *)name;
- (_SFPBRFColor *)primary_color;
- (bool)punches_through_background;
- (_SFPBRFColor *)secondary_color;
- (void)setBackground_color:(_SFPBRFColor *)arg1;
- (void)setImage_style:(int)arg1;
- (void)setName:(NSString *)arg1;
- (void)setPrimary_color:(_SFPBRFColor *)arg1;
- (void)setPunches_through_background:(bool)arg1;
- (void)setSecondary_color:(_SFPBRFColor *)arg1;
- (void)setSymbol_rendering_mode:(int)arg1;
- (int)symbol_rendering_mode;

@end
