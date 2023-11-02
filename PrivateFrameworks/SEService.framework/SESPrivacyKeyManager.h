
@interface SESPrivacyKeyManager : NSObject

+ (id)sharedManager;

- (id)createPrivacyKeyForGroupIdentifier:(id)arg1 withOptions:(id)arg2 outError:(id*)arg3;
- (id)createPrivacyKeysForGroupIdentifier:(id)arg1 withOptions:(id)arg2 outError:(id*)arg3;
- (id)decryptPayload:(id)arg1 withGroupIdentifier:(id)arg2 outError:(id*)arg3;
- (bool)deletePrivacyKey:(id)arg1 outError:(id*)arg2;
- (id)encryptData:(id)arg1 scheme:(id)arg2 recipientPublicKey:(id)arg3 outError:(id*)arg4;
- (id)privacyKeysForGroupIdentifier:(id)arg1 privacyKeyIdentifier:(id)arg2 outError:(id*)arg3;

@end
