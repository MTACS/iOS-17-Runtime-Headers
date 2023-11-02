
@interface WFSSHKeyFormatED25519 : NSObject <WFSSHKeyFormat>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)defaultKeySize;
+ (id)generateKeyPairWithKeySize:(unsigned long long)arg1 comment:(id)arg2;
+ (id)keyPairFromPrivateKey:(id)arg1 comment:(id)arg2 error:(id*)arg3;
+ (id)localizedDisplayName;
+ (id)possibleKeySizes;
+ (id)privateKeySpecifier;
+ (id)privateKeyType;
+ (id)publicKeySpecifier;
+ (id)publicKeyType;
+ (id)sshPrivateKeyFromED25519PrivateKey:(id)arg1 publicKey:(id)arg2 comment:(id)arg3;
+ (id)sshPublicKeyFromED25519Data:(id)arg1;

@end
