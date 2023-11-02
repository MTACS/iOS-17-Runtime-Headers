
@interface ICCipherV2 : NSObject

+ (long long)ICCryptoWrappedKeyLengthV2;
+ (id)concatenateCipherData:(id)arg1 initializationVector:(id)arg2 tag:(id)arg3;
+ (void)getParsedCipherData:(id*)arg1 initializationVector:(id*)arg2 tag:(id*)arg3 fromData:(id)arg4;
+ (id)ic_decrypt:(id)arg1 withCipherKey:(id)arg2 additionalAuthenticatedData:(id)arg3 error:(id*)arg4;
+ (id)ic_encrypt:(id)arg1 withCipherKey:(id)arg2 additionalAuthenticatedData:(id)arg3 error:(id*)arg4;
+ (id)ic_unwrap:(id)arg1 withWrapper:(id)arg2 error:(id*)arg3;
+ (id)ic_wrap:(id)arg1 withWrapper:(id)arg2 error:(id*)arg3;

@end
