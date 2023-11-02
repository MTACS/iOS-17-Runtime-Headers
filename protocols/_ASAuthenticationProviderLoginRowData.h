
@protocol _ASAuthenticationProviderLoginRowData <NSObject>

@required

- (long long)loginRowAuthenticationType;
- (NSString *)loginRowDetailText;
- (UIImage *)loginRowIconImage;
- (NSString *)loginRowPaneTitleText;
- (NSString *)loginRowText;
- (void)setLoginRowAuthenticationType:(long long)arg1;
- (void)setLoginRowDetailText:(NSString *)arg1;
- (void)setLoginRowIconImage:(UIImage *)arg1;
- (void)setLoginRowPaneTitleText:(NSString *)arg1;
- (void)setLoginRowText:(NSString *)arg1;

@end
