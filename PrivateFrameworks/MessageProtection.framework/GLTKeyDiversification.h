
@interface GLTKeyDiversification : NSObject

+ (struct __SecKey { }*)diversifyPrivateKey:(struct __SecKey { }*)arg1 withDocumentIdentifier:(id)arg2 trackingPreventionSalt:(id)arg3 error:(id*)arg4;
+ (id)diversifyPublicKey:(struct __SecKey { }*)arg1 trackingPreventionSalt:(id)arg2 withDocumentIdentifier:(id)arg3 error:(id*)arg4;
+ (id)diversifyPublicKey:(struct __SecKey { }*)arg1 withDocumentIdentifier:(id)arg2 error:(id*)arg3;

@end
