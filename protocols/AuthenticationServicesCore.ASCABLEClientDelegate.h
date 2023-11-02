
@protocol AuthenticationServicesCore.ASCABLEClientDelegate

@required

- (void)cableClientWillAuthenticate:(_TtC26AuthenticationServicesCore13ASCABLEClient *)arg1;
- (void)cableClientWillConnect:(_TtC26AuthenticationServicesCore13ASCABLEClient *)arg1;
- (WBSPair *)encodeGetAssertionCTAPCommandForAuthenticatorWithUserVerificationAvailability:(unsigned long long)arg1 authenticatorSupportedExtensions:(NSArray *)arg2;
- (WBSPair *)encodeMakeCredentialCTAPCommandForAuthenticatorWithUserVerificationAvailability:(unsigned long long)arg1 authenticatorSupportedExtensions:(NSArray *)arg2;

@end
