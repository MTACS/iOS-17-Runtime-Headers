
@interface WFSSHKeyFormatRSA : NSObject <WFSSHKeyFormat>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)defaultKeySize;
+ (id)generateKeyPairWithKeySize:(unsigned long long)arg1 comment:(id)arg2;
+ (id)keyPairFromPrivateKey:(id)arg1 comment:(id)arg2 error:(id*)arg3;
+ (id)localizedDisplayName;
+ (id)pkcs1FromRSAKey:(struct _CCRSACryptor { }*)arg1;
+ (id)possibleKeySizes;
+ (id)privateKeySpecifier;
+ (id)privateKeyType;
+ (id)publicKeySpecifier;
+ (id)publicKeyType;
+ (id)sshPublicKeyFromRSAKey:(struct _CCRSACryptor { }*)arg1;

@end
