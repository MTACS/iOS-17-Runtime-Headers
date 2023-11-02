
@interface HMDHomeWalletKeyISOCredential : HMFObject <CIDCPayloadBuilderDelegate, HMDHomeWalletKeyISOCredential> {
    CIDCPayloadBuilder * _credentialBuilder;
    NSData * _deviceCredentialKeyExternalRepresentation;
    HAPPairingIdentity * _pairingIdentity;
}

@property (readonly) CIDCPayloadBuilder *credentialBuilder;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSData *deviceCredentialKeyExternalRepresentation;
@property (readonly) unsigned long long hash;
@property (readonly, copy) HAPPairingIdentity *pairingIdentity;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)credentialBuilder;
- (id)deviceCredentialKeyExternalRepresentation;
- (void)encodeWithCompletion:(id /* block */)arg1;
- (id)initWithHAPPairingIdentity:(id)arg1 deviceCredentialKeyExternalRepresentation:(id)arg2;
- (id)pairingIdentity;
- (void)signPayloadWithBuilder:(id)arg1 data:(id)arg2 completion:(id /* block */)arg3;

@end
