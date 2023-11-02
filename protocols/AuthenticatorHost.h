
@protocol AuthenticatorHost <NSObject>

@required

- (void)authenticatorServiceDidFinishWithError:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 6: NSError *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)authenticatorServiceDidObtainAuthenticationWithReply:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
