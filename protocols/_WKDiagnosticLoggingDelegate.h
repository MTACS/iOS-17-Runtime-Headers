
@protocol _WKDiagnosticLoggingDelegate <NSObject>

@optional

- (void)_webView:(WKWebView *)arg1 logDiagnosticMessage:(NSString *)arg2 description:(NSString *)arg3;
- (void)_webView:(WKWebView *)arg1 logDiagnosticMessage:(NSString *)arg2 description:(NSString *)arg3 valueDictionary:(NSDictionary *)arg4;
- (void)_webView:(WKWebView *)arg1 logDiagnosticMessageWithDomain:(NSString *)arg2 domain:(long long)arg3;
- (void)_webView:(WKWebView *)arg1 logDiagnosticMessageWithEnhancedPrivacy:(NSString *)arg2 description:(NSString *)arg3;
- (void)_webView:(WKWebView *)arg1 logDiagnosticMessageWithResult:(NSString *)arg2 description:(NSString *)arg3 result:(long long)arg4;
- (void)_webView:(WKWebView *)arg1 logDiagnosticMessageWithValue:(NSString *)arg2 description:(NSString *)arg3 value:(NSString *)arg4;

@end
