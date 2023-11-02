
@protocol AKFidoInterface <NSObject>

@required

- (void)registerFidoKeyWithContext:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: AKFidoContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, AKFidoRegistrationResponse *, NSError *, void*
- (void)verifyFidoKeyWithContext:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 9: AKAppleIDAuthenticationContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, AKFidoAuthenticationResponse *, NSDictionary *, NSError *, void*
- (void)verifyFidoKeyWithFidoContext:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: AKFidoContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, AKFidoAuthenticationResponse *, NSError *, void*
- (void)verifyFidoRecoveryWithContext:(void *)arg1 recoveryToken:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 10: AKAppleIDAuthenticationContext *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, AKFidoAuthenticationResponse *, NSDictionary *, NSError *, void*

@end
