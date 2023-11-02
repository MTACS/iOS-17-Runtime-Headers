
@protocol CDPDAuthProviderInternal <NSObject>

@required

- (void)cdpContext:(void *)arg1 persistMasterKeyVerifier:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: CDPContext *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)cdpContext:(void *)arg1 verifyMasterKey:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: CDPContext *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (bool)isPrimaryAppleIDLoggedIn;

@end
