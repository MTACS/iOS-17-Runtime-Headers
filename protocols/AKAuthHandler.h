
@protocol AKAuthHandler <NSObject>

@required

- (AKAppleIDAuthenticationContext *)buildReauthenticationContextFromContext:(AKAppleIDAuthenticationContext *)arg1 error:(id*)arg2;
- (void)reauthenticateWithContext:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: AKAppleIDAuthenticationContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)reauthenticateWithContext:(void *)arg1 completionWithResults:(void *)arg2; // needs 2 arg types, found 8: AKAppleIDAuthenticationContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*

@end
