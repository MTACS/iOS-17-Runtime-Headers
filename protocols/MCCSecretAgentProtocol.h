
@protocol MCCSecretAgentProtocol

@required

- (void)fetchSigningAndEncryptingStatusForEmailAddress:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)fetchSigningAndEncrytionMessagesStatusForEmailAddress:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, MCCSigningAndEncryptionMessagesStatus *, NSError *, void*
- (void)generateCertificateWithContext:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: MCCSecretAgentContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)listCertificatesForEmail:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)listCertificatesWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)refreshCertificateWithContext:(void *)arg1 certId:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: MCCSecretAgentContext *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)setEncryptIsEnabled:(void *)arg1 forEmailAddress:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: bool, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)setSignIsEnabled:(void *)arg1 forEmailAddress:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: bool, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)setSigningAndEncrytingStatusTo:(void *)arg1 forEmailAddress:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: bool, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)updateCertificateDefaultsForEmailAddress:(void *)arg1 certInfo:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: NSString *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
