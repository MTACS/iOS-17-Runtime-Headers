
@protocol AAAppleIDLoginPlugin <NSObject>

@required

- (void)handleLoginResponse:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (NSDictionary *)parametersForIdentityEstablishmentRequest;
- (NSDictionary *)parametersForLoginRequest;
- (NSString *)serviceIdentifier;

@end
