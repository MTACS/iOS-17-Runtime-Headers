
@interface HAP2AccessoryServerSecureTransportPairSetupPassThroughEncryptedSession : NSObject <HAPEncryptedSession>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)decryptData:(id)arg1 additionalAuthenticatedData:(id)arg2 error:(id*)arg3;
- (id)encryptData:(id)arg1 additionalAuthenticatedData:(id)arg2 error:(id*)arg3;

@end
