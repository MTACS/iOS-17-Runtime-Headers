
@interface ICCipherV1Neo : NSObject

+ (id)decrypt:(id)arg1 withCipherKey:(id)arg2 additionalAuthenticatedData:(id)arg3 error:(id*)arg4;
+ (id)encrypt:(id)arg1 withCipherKey:(id)arg2 additionalAuthenticatedData:(id)arg3 error:(id*)arg4;
+ (id)keyForPassphrase:(id)arg1 salt:(id)arg2 iterationCount:(unsigned long long)arg3 error:(id*)arg4;
+ (id)unwrap:(id)arg1 withWrapper:(id)arg2 error:(id*)arg3;
+ (id)wrap:(id)arg1 withWrapper:(id)arg2 error:(id*)arg3;

@end
