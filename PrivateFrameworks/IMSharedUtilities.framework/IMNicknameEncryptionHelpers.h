
@interface IMNicknameEncryptionHelpers : NSObject

+ (id)_decryptAndVerifyCipherFields:(id)arg1 withPreKey:(id)arg2 recordTagToVerify:(id)arg3 error:(id*)arg4;
+ (id)_decryptCipherField:(id)arg1 withFieldEncryptionKey:(id)arg2 fieldTaggingKey:(id)arg3 error:(id*)arg4;
+ (id)_decryptCipherFields:(id)arg1 withFieldEncryptionKey:(id)arg2 fieldTaggingKey:(id)arg3 error:(id*)arg4;
+ (id)_encryptAndTagPlainFields:(id)arg1 withPreKey:(id)arg2 returningRecordTag:(id*)arg3 error:(id*)arg4;
+ (id)_encryptPlainField:(id)arg1 withFieldEncryptionKey:(id)arg2 fieldTaggingKey:(id)arg3 error:(id*)arg4;
+ (id)_encryptPlainFields:(id)arg1 withFieldEncryptionKey:(id)arg2 fieldTaggingKey:(id)arg3 error:(id*)arg4;
+ (id)_fieldTagForFieldName:(id)arg1 cipherData:(id)arg2 IV:(id)arg3 fieldTaggingKey:(id)arg4 error:(id*)arg5;
+ (id)_hmacForData:(id)arg1 key:(id)arg2;
+ (id)_performOperation:(unsigned int)arg1 onData:(id)arg2 withFieldEncryptionKey:(id)arg3 iv:(id)arg4 error:(id*)arg5;
+ (id)_randomBytesWithLength:(unsigned long long)arg1 error:(id*)arg2;
+ (id)_recordTagForCipherFields:(id)arg1 recordTaggingKey:(id)arg2 error:(id*)arg3;
+ (id)_tagForData:(id)arg1 key:(id)arg2 error:(id*)arg3;
+ (id)decryptAndVerifyCipherFields:(id)arg1 withPreKey:(id)arg2 recordTagToVerify:(id)arg3 error:(id*)arg4;
+ (id)encryptAndTagPlainField:(id)arg1 withPreKey:(id)arg2 returningFieldTag:(id*)arg3 error:(id*)arg4;
+ (id)encryptAndTagPlainFields:(id)arg1 withPreKey:(id)arg2 returningRecordTag:(id*)arg3 error:(id*)arg4;

@end
