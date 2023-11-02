
@protocol RFUrlImage <NSObject>

@required

- (RFAspectRatio *)aspect_ratio;
- (NSString *)dark_mode_url;
- (NSDictionary *)dictionaryRepresentation;
- (int)image_rendering_mode;
- (int)image_style;
- (NSData *)jsonData;
- (void)setAspect_ratio:(RFAspectRatio *)arg1;
- (void)setDark_mode_url:(NSString *)arg1;
- (void)setImage_rendering_mode:(int)arg1;
- (void)setImage_style:(int)arg1;
- (void)setSizing_mode:(int)arg1;
- (void)setSymbol_placeholder_image:(RFSymbolImage *)arg1;
- (void)setUrl:(NSString *)arg1;
- (int)sizing_mode;
- (RFSymbolImage *)symbol_placeholder_image;
- (NSString *)url;

@end
