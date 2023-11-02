
@interface MessageProtection.GLTKeyDiversificationSwift : NSObject

+ (struct __SecKey { }*)diversifyWithPrivateKey:(struct __SecKey { }*)arg1 docId:(id)arg2 trackingPreventionSalt:(id)arg3 error:(id*)arg4;
+ (id)diversifyWithPublicKey:(struct __SecKey { }*)arg1 trackingPreventionSalt:(id)arg2 docId:(id)arg3 error:(id*)arg4;

- (id)init;

@end
