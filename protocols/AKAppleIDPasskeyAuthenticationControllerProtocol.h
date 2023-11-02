
@protocol AKAppleIDPasskeyAuthenticationControllerProtocol <NSObject>

@required

- (void)appleIDPasskeyStatusForAccount:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 8: ACAccount *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)appleIDPasskeysForAccount:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 8: ACAccount *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)canCreateiCloudKeychainPasskeyForAccount:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 8: ACAccount *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)createPasskeyWithContext:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: AKAppleIDPasskeyCredentialRequestContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, AKAppleIDPasskeyCredential *, NSError *, void*
- (void)deleteAllPasskeysForAccount:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 8: ACAccount *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@end
