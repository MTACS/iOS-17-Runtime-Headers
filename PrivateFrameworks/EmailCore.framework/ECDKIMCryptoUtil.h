
@interface ECDKIMCryptoUtil : NSObject

+ (bool)verifySignedData:(id)arg1 withSignatureData:(id)arg2 publicKeyData:(id)arg3 hashingAlgorithm:(unsigned long long)arg4 error:(out id*)arg5;

@end
