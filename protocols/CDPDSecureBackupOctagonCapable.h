
@protocol CDPDSecureBackupOctagonCapable <NSObject>

@required

- (id)initWithContext:(CDPContext *)arg1 secureBackupProxy:(id <CDPDSecureBackupProxy>)arg2 octagonTrustProxy:(id <CDPDOctagonTrustProxy>)arg3;
- (<CDPDOctagonTrustProxy> *)octagonTrustProxy;
- (OTClique *)performEscrowRecoveryWithRecoveryContext:(CDPDSecureBackupContext *)arg1 error:(id*)arg2;
- (void)setOctagonTrustProxy:(id <CDPDOctagonTrustProxy>)arg1;
- (void)validateAndRepairRecoveryKeyMismatchWithContext:(void *)arg1 authProvider:(void *)arg2 circleProxy:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: CDPDSecureBackupContext *, <CDPDAuthProviderInternal> *, <CDPDCircleProxy> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CDPDRemoteSecretValidationResult *, NSError *, void*
- (void)validateRecoveryKeyWithContext:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: CDPDSecureBackupContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CDPDRemoteSecretValidationResult *, NSError *, void*

@end
