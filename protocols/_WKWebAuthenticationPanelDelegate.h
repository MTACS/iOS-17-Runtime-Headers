
@protocol _WKWebAuthenticationPanelDelegate <NSObject>

@optional

- (void)panel:(void *)arg1 decidePolicyForLocalAuthenticatorWithCompletionHandler:(void *)arg2; // needs 2 arg types, found 7: _WKWebAuthenticationPanel *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, void*
- (void)panel:(_WKWebAuthenticationPanel *)arg1 dismissWebAuthenticationPanelWithResult:(long long)arg2;
- (void)panel:(void *)arg1 requestLAContextForUserVerificationWithCompletionHandler:(void *)arg2; // needs 2 arg types, found 7: _WKWebAuthenticationPanel *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, LAContext *, void*
- (void)panel:(void *)arg1 requestPINWithRemainingRetries:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: _WKWebAuthenticationPanel *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*
- (void)panel:(void *)arg1 selectAssertionResponse:(void *)arg2 source:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 9: _WKWebAuthenticationPanel *, NSArray *, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, _WKWebAuthenticationAssertionResponse *, void*
- (void)panel:(_WKWebAuthenticationPanel *)arg1 updateWebAuthenticationPanel:(long long)arg2;

@end
