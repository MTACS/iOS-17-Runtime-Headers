
@protocol AKAuthenticationController <NSObject>

@required

- (void)authenticateWithContext:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: AKAppleIDAuthenticationContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)performPasswordResetWithContext:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: AKAppleIDAuthenticationContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*

@end
