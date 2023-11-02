
@protocol WFSSHKeyFormat <NSObject>

@required

+ (NSNumber *)defaultKeySize;
+ (WFSSHKeyPair *)generateKeyPairWithKeySize:(unsigned long long)arg1 comment:(NSString *)arg2;
+ (WFSSHKeyPair *)keyPairFromPrivateKey:(NSData *)arg1 comment:(NSString *)arg2 error:(id*)arg3;
+ (NSString *)localizedDisplayName;
+ (NSArray *)possibleKeySizes;
+ (NSString *)privateKeySpecifier;
+ (NSString *)privateKeyType;
+ (NSString *)publicKeySpecifier;
+ (NSString *)publicKeyType;

@end
