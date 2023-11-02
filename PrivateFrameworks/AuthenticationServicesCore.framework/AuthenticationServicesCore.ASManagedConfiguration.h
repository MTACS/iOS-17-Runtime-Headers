
@interface AuthenticationServicesCore.ASManagedConfiguration : NSObject {
    void declarationKeyToPasskeyAttestationConfigurationKey;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  plistURL;
}

+ (id)loadFromDiskWithPlistURL:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)entepriseAttestationIdentityPersistentReferenceForRelyingParty:(id)arg1;
- (id)init;
- (bool)isConfiguredForEnterpriseAttestationForRelyingParty:(id)arg1;

@end
