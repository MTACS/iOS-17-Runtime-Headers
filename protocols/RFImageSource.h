
@protocol RFImageSource <NSObject>

@required

- (RFAppIconImage *)app_icon;
- (RFAvatarImage *)avatar;
- (RFBadgedImage *)badged_image;
- (RFDefaultBrowserAppIconImage *)default_browser_app_icon;
- (NSDictionary *)dictionaryRepresentation;
- (NSData *)jsonData;
- (RFMonogramImage *)monogram;
- (void)setApp_icon:(RFAppIconImage *)arg1;
- (void)setAvatar:(RFAvatarImage *)arg1;
- (void)setBadged_image:(RFBadgedImage *)arg1;
- (void)setDefault_browser_app_icon:(RFDefaultBrowserAppIconImage *)arg1;
- (void)setMonogram:(RFMonogramImage *)arg1;
- (void)setSymbol:(RFSymbolImage *)arg1;
- (void)setUrl:(RFUrlImage *)arg1;
- (RFSymbolImage *)symbol;
- (RFUrlImage *)url;

@end
