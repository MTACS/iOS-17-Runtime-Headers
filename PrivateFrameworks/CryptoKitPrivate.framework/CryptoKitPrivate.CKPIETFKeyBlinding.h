
@interface CryptoKitPrivate.CKPIETFKeyBlinding : NSObject

+ (struct __SecKey { }*)blindPublicKeyWithPublicKey:(struct __SecKey { }*)arg1 with:(struct __SecKey { }*)arg2 context:(id)arg3 error:(id*)arg4;
+ (id)blindSign:(id)arg1 blindedBy:(struct __SecKey { }*)arg2 with:(struct __SecKey { }*)arg3 context:(id)arg4 error:(id*)arg5;
+ (id)compressedRepresentationFromSecKey:(struct __SecKey { }*)arg1;
+ (bool)isValidWithSignature:(id)arg1 for:(id)arg2 with:(struct __SecKey { }*)arg3 context:(id)arg4;
+ (id)privateScalarFromSecKey:(struct __SecKey { }*)arg1;
+ (struct __SecKey { }*)secKeyFromCompressedRepresentation:(id)arg1;
+ (struct __SecKey { }*)unblindPublicKey:(struct __SecKey { }*)arg1 with:(struct __SecKey { }*)arg2 context:(id)arg3 error:(id*)arg4;

- (void).cxx_destruct;
- (id)init;

@end
