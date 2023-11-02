
@protocol SFAuthenticatorDialog <NSObject>

@required

- (void)decidePolicyForLocalAuthenticatorWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, void*
- (bool)isForUpdateOnly;
- (_WKWebAuthenticationPanel *)panel;
- (void)requestPINWithRemainingRetries:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*
- (void)selectAssertionResponse:(void *)arg1 source:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: NSArray *, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, _WKWebAuthenticationAssertionResponse *, void*
- (void)setIsForUpdateOnly:(bool)arg1;
- (void)updateWebAuthenticationPanel:(long long)arg1;

@end
