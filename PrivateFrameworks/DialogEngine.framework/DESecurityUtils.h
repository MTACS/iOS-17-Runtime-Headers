
@interface DESecurityUtils : NSObject

+ (id)getKeyFromData:(id)arg1;
+ (id)getRandomIV;
+ (id)getRandomKey;
+ (id)randomDataOfLength:(unsigned long long)arg1;
+ (id)sign:(id)arg1 privateKey:(id)arg2;
+ (bool)verify:(id)arg1 expected:(id)arg2 publicKey:(id)arg3;

@end
