
@interface AppleIDVClient : NSObject

+ (unsigned int)appleIDVAuthorizePresentment:(id)arg1 withLAContextData:(id)arg2 onSESlot:(long long)arg3 andPayloadDigest:(id)arg4;
+ (unsigned int)appleIDVAuthorizePresentment:(id)arg1 withLAContextData:(id)arg2 onSESlot:(long long)arg3 andPublicKey:(id)arg4;
+ (unsigned int)appleIDVCredentialAuthenticationTokenStatus;
+ (unsigned int)appleIDVEstablishPrearmTrustWithCertificate:(id)arg1 protectedPublicKey:(id*)arg2;
+ (unsigned int)appleIDVGenerateNonceOnWatch:(id*)arg1;
+ (unsigned int)appleIDVGeneratePhoneTokenWithNonce:(id)arg1 withReferenceACLBlob:(id)arg2 keyBlob:(id)arg3 keyAttestation:(id)arg4 casdCertificate:(id)arg5 phoneToken:(id*)arg6;
+ (unsigned int)appleIDVGeneratePrearmTrustKeyForWatchAndCopyPrivateKey:(id)arg1 progenitorPublicKey:(id)arg2 encryptedPrivateKey:(id*)arg3 attestation:(id*)arg4 publicKey:(id*)arg5 keyBlob:(id*)arg6;
+ (unsigned int)appleIDVGetStatus:(long long*)arg1 andSIDVVersion:(id*)arg2 andAppleIDVVersion:(id*)arg3;
+ (unsigned int)appleIDVGetStatus:(long long*)arg1 andVersion:(id*)arg2;
+ (unsigned int)appleIDVPersistACLBlob:(id)arg1 intoBlob:(id*)arg2 returnBioUUIDs:(id*)arg3;
+ (unsigned int)appleIDVPersistACLBlob:(id)arg1 intoBlob:(id*)arg2 returnBioUUIDs:(id*)arg3 andRequireDoublePress:(unsigned char)arg4;
+ (unsigned int)appleIDVPersistModifiedACLBlob:(id)arg1 withReferenceACLBlob:(id)arg2 withLAContextData:(id)arg3 intoBlob:(id*)arg4 returnBioUUIDs:(id*)arg5;
+ (unsigned int)appleIDVPersistModifiedSESlot:(long long)arg1 withReferenceBlob:(id)arg2 withLAContextData:(id)arg3 intoBlob:(id*)arg4;
+ (unsigned int)appleIDVPrearmCredentialWithAuthorizationToken:(id)arg1 protectedPublicKey:(id)arg2;
+ (unsigned int)appleIDVRecoverPersistedACLBlob:(id)arg1 intoBlob:(id*)arg2;
+ (unsigned int)appleIDVRevokeCredentialAuthorizationToken;
+ (unsigned int)appleIDVUpdatePrearmTrustKeyForWatch:(id)arg1 progenitorPublicKey:(id)arg2 encryptedPrivateKey:(id*)arg3 attestation:(id*)arg4 publicKey:(id*)arg5 keyBlob:(id*)arg6;
+ (unsigned int)getUUIDsFromACL:(id)arg1 intoArray:(id*)arg2;
+ (unsigned int)prepareACL:(id*)arg1 aclType:(unsigned int)arg2 forAclUsage:(unsigned int)arg3 forBioUUID:(id)arg4;
+ (unsigned int)prepareACLForPhoneDecryption:(id*)arg1 withSubType:(unsigned int)arg2 forBioUUID:(id)arg3;
+ (unsigned int)prepareACLForWatchDecryption:(id*)arg1 withSubType:(unsigned int)arg2 forAclUsage:(unsigned int)arg3;
+ (id)prepareUnboundACLForBinding:(struct __SecAccessControl { }*)arg1 withConstraints:(id)arg2;
+ (unsigned int)prepareUnboundACLForBioBinding:(id*)arg1;
+ (unsigned int)prepareUnboundACLForPasscodeBinding:(id*)arg1;
+ (unsigned int)prepareUnboundACLForWatch:(id*)arg1 withAccessibilityEnabled:(bool)arg2;
+ (unsigned int)requireDoublePressOnACL:(id)arg1 intoACL:(id*)arg2;

@end
