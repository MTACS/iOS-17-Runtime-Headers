
@protocol _SFPBRFImageSource <NSObject>

@required

- (_SFPBRFAppIconImage *)app_icon;
- (_SFPBRFAvatarImage *)avatar;
- (_SFPBRFBadgedImage *)badged_image;
- (_SFPBRFDefaultBrowserAppIconImage *)default_browser_app_icon;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (_SFPBRFMonogramImage *)monogram;
- (void)setApp_icon:(_SFPBRFAppIconImage *)arg1;
- (void)setAvatar:(_SFPBRFAvatarImage *)arg1;
- (void)setBadged_image:(_SFPBRFBadgedImage *)arg1;
- (void)setDefault_browser_app_icon:(_SFPBRFDefaultBrowserAppIconImage *)arg1;
- (void)setMonogram:(_SFPBRFMonogramImage *)arg1;
- (void)setSymbol:(_SFPBRFSymbolImage *)arg1;
- (void)setUrl:(_SFPBRFUrlImage *)arg1;
- (_SFPBRFSymbolImage *)symbol;
- (_SFPBRFUrlImage *)url;
- (unsigned long long)whichValue;

@end
