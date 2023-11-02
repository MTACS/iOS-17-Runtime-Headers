
@protocol WebGeolocationProviderInitializationListener <NSObject>

@required

- (void)initializationAllowedWebView:(WebView *)arg1;
- (void)initializationDeniedWebView:(WebView *)arg1;

@end
