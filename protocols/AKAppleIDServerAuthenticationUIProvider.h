
@protocol AKAppleIDServerAuthenticationUIProvider <NSObject>

@required

- (void)dismissServerProvidedUIWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)presentServerProvidedUIWithConfiguration:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 9: AKServerRequestConfiguration *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSHTTPURLResponse *, NSDictionary *, NSError *, void*

@end
