
@protocol AKInAppAuthenticationUIProvider <NSObject, AKAppleIDAuthenticationUIProvider>

@required

- (void)presentIDPProvidedUIWithConfiguration:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 9: AKServerRequestConfiguration *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSHTTPURLResponse *, NSDictionary *, NSError *, void*

@end
