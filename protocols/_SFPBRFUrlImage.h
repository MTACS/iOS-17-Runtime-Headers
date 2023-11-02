
@protocol _SFPBRFUrlImage <NSObject>

@required

- (_SFPBRFAspectRatio *)aspect_ratio;
- (NSString *)dark_mode_url;
- (int)image_rendering_mode;
- (int)image_style;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (void)setAspect_ratio:(_SFPBRFAspectRatio *)arg1;
- (void)setDark_mode_url:(NSString *)arg1;
- (void)setImage_rendering_mode:(int)arg1;
- (void)setImage_style:(int)arg1;
- (void)setSizing_mode:(int)arg1;
- (void)setSymbol_placeholder_image:(_SFPBRFSymbolImage *)arg1;
- (void)setUrl:(NSString *)arg1;
- (int)sizing_mode;
- (_SFPBRFSymbolImage *)symbol_placeholder_image;
- (NSString *)url;
- (unsigned long long)whichPlaceholder_Image;

@end
