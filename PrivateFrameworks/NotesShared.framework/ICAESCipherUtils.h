
@interface ICAESCipherUtils : NSObject

+ (id)_ic_decrypt:(id)arg1 withCipherKey:(id)arg2 standardKeyLength:(unsigned long long)arg3 additionalAuthenticatedData:(id)arg4 inputTag:(id)arg5 standardTagLength:(unsigned long long)arg6 inputInitializationVector:(id)arg7 standardInitializationVectorLength:(unsigned long long)arg8 error:(id*)arg9;
+ (id)_ic_encrypt:(id)arg1 withCipherKey:(id)arg2 standardKeyLength:(unsigned long long)arg3 additionalAuthenticatedData:(id)arg4 outputTag:(id*)arg5 standardTagLength:(unsigned long long)arg6 outputInitializationVector:(id*)arg7 standardInitializationVectorLength:(unsigned long long)arg8 error:(id*)arg9;
+ (id)_ic_unwrap:(id)arg1 withWrapper:(id)arg2 standardKeyLength:(unsigned long long)arg3 standardWrappedKeyLength:(unsigned long long)arg4 error:(id*)arg5;
+ (id)_ic_wrap:(id)arg1 withWrapper:(id)arg2 standardKeyLength:(unsigned long long)arg3 standardWrappedKeyLength:(unsigned long long)arg4 error:(id*)arg5;

@end
