
@interface SPCrypto : NSObject

+ (id)antiTrackingKeyFromSharedSecretKey:(id)arg1;
+ (id)compactKey:(id)arg1;
+ (id)deriveKeyWithKeyData:(id)arg1 sharedData:(id)arg2 keyLength:(unsigned long long)arg3;
+ (id)deriveWithPublicKey:(id)arg1 sharedSecretKey:(id*)arg2;
+ (struct _CCECCryptor { }*)diversifyKey:(id)arg1 entropyData:(id)arg2;
+ (id)exportKey:(struct _CCECCryptor { }*)arg1 toFormat:(unsigned int)arg2;
+ (void)generateTokensWithPublicKey:(id)arg1 sharedSecretKey:(id)arg2 initialRatchetsToSkip:(unsigned long long)arg3 ratchetStep:(id /* block */)arg4;
+ (struct _CCECCryptor { }*)importKey:(id)arg1 fromFormat:(unsigned int)arg2;
+ (id)ratchetSharedSecretKey:(id)arg1 ratchetCount:(unsigned long long)arg2;

@end
