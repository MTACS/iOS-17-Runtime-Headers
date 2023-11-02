
@protocol WebPolicyDelegate <NSObject>

@optional

- (void)webView:(WebView *)arg1 decidePolicyForMIMEType:(NSString *)arg2 request:(NSURLRequest *)arg3 frame:(WebFrame *)arg4 decisionListener:(id <WebPolicyDecisionListener>)arg5;
- (void)webView:(WebView *)arg1 decidePolicyForNavigationAction:(NSDictionary *)arg2 request:(NSURLRequest *)arg3 frame:(WebFrame *)arg4 decisionListener:(id <WebPolicyDecisionListener>)arg5;
- (void)webView:(WebView *)arg1 decidePolicyForNewWindowAction:(NSDictionary *)arg2 request:(NSURLRequest *)arg3 newFrameName:(NSString *)arg4 decisionListener:(id <WebPolicyDecisionListener>)arg5;
- (void)webView:(WebView *)arg1 unableToImplementPolicyWithError:(NSError *)arg2 frame:(WebFrame *)arg3;

@end
