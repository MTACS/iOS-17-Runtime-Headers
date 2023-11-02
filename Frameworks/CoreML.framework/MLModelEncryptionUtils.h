
@interface MLModelEncryptionUtils : NSObject

+ (bool)addEncryptionHeaderToUnencryptedFile:(id)arg1 saveToFile:(id)arg2 error:(id*)arg3;
+ (bool)encryptFile:(id)arg1 withKey:(id)arg2 iv:(id)arg3 saveToFile:(id)arg4 error:(id*)arg5;
+ (id)sinfData;

@end
