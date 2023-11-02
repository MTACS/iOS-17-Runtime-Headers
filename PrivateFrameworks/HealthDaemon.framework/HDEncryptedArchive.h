
@interface HDEncryptedArchive : NSObject {
    struct AAByteStream_impl { } * _byteStream;
    struct AEAContext_impl { } * _context;
    struct AAByteStream_impl { } * _fileStream;
    long long  _mode;
}

+ (id)archiveForDecryptionWithFileHandle:(id)arg1 key:(id)arg2 error:(id*)arg3;
+ (id)archiveForEncryptionWithFileHandle:(id)arg1 key:(id)arg2 error:(id*)arg3;
+ (bool)encryptContentsOfFileHandle:(id)arg1 to:(id)arg2 key:(id)arg3 error:(id*)arg4;
+ (id)randomSymmetricKeyWithError:(id*)arg1;

- (void)close;
- (void)dealloc;
- (id)initWithContext:(struct AEAContext_impl { }*)arg1 fileStream:(struct AAByteStream_impl { }*)arg2 byteStream:(struct AAByteStream_impl { }*)arg3 mode:(long long)arg4;
- (id)readDataOfLength:(long long)arg1 offset:(long long)arg2 error:(id*)arg3;
- (bool)writeData:(id)arg1 error:(id*)arg2;

@end
