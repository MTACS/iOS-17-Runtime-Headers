
@interface HAP2AccessoryServerSecureTransportThreadPaired : HAP2AccessoryServerSecureTransportPairVerify {
    HAPSecuritySessionEncryption * _eventEncryption;
}

@property (nonatomic, retain) HAPSecuritySessionEncryption *eventEncryption;

- (void).cxx_destruct;
- (id)decryptData:(id)arg1 type:(unsigned long long)arg2 error:(id*)arg3;
- (id)eventEncryption;
- (void)securitySession:(id)arg1 didCloseWithError:(id)arg2;
- (void)securitySessionDidOpen:(id)arg1;
- (id)securitySessionDidRequestAdditionalDerivedKeyTuples:(id)arg1;
- (void)setEventEncryption:(id)arg1;

@end
