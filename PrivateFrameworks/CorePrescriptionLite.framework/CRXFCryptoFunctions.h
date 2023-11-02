
@interface CRXFCryptoFunctions : NSObject

+ (bool)cryptFromText:(id)arg1 withPassword:(id)arg2 toText:(id*)arg3 encrypt:(bool)arg4 error:(id*)arg5;
+ (bool)decryptText:(id)arg1 withPassword:(id)arg2 toString:(id*)arg3 error:(id*)arg4;
+ (bool)encryptText:(id)arg1 withPassword:(id)arg2 toString:(id*)arg3 error:(id*)arg4;

@end
