
@interface CKPATKeyBlinding : NSObject

+ (struct __SecKey { }*)blindPublicKey:(struct __SecKey { }*)arg1 withPrivateKey:(struct __SecKey { }*)arg2 context:(id)arg3 error:(id*)arg4;
+ (id)blindSignMessage:(id)arg1 blindedBy:(struct __SecKey { }*)arg2 withKey:(struct __SecKey { }*)arg3 context:(id)arg4 error:(id*)arg5;
+ (id)compressedRepresentationFromSecKey:(struct __SecKey { }*)arg1;
+ (bool)isValidSignature:(id)arg1 forMessage:(id)arg2 signedBy:(struct __SecKey { }*)arg3 context:(id)arg4;
+ (id)privateScalarFromSecKey:(struct __SecKey { }*)arg1;
+ (struct __SecKey { }*)secKeyFromCompressedRepresentation:(id)arg1;
+ (struct __SecKey { }*)unblindPublicKey:(struct __SecKey { }*)arg1 withPrivateKey:(struct __SecKey { }*)arg2 context:(id)arg3 error:(id*)arg4;

@end
