
@interface PFAppleArchiveStream : NSObject {
    bool  _appendToExistingArchive;
    NSURL * _archiveURL;
    unsigned long long  _blockSize;
    long long  _compression;
    struct AAByteStream_impl { } * _compressionStream;
    NSDictionary * _encryptedArchiveMetadata;
    struct AEAContext_impl { } * _encryptionContext;
    NSData * _encryptionKey;
    struct AAByteStream_impl { } * _encryptionStream;
    struct AAByteStream_impl { } * _inputStream;
    struct AAByteStream_impl { } * _outputStream;
}

@property bool appendToExistingArchive;
@property (readonly) NSURL *archiveURL;
@property unsigned long long blockSize;
@property long long compression;
@property (retain) NSDictionary *encryptedArchiveMetadata;
@property (retain) NSData *encryptionKey;

- (void).cxx_destruct;
- (struct AAByteStream_impl { }*)_byteStreamToBeReadByArchiveDecodingStream;
- (struct AAByteStream_impl { }*)_byteStreamToBeTargetedByArchiveEncodingStream;
- (bool)_openForReadingEncryptionStreamWithError:(id*)arg1;
- (bool)_openForWritingCompressionStreamShouldAppend:(bool)arg1 error:(id*)arg2;
- (bool)_openForWritingEncryptionStreamWithError:(id*)arg1;
- (bool)_setupEncryptionContextForWritingWithError:(id*)arg1;
- (unsigned int)aaCompressionAlgorithm;
- (bool)appendToExistingArchive;
- (id)archiveURL;
- (unsigned long long)blockSize;
- (bool)close:(id*)arg1;
- (long long)compression;
- (void)dealloc;
- (id)description;
- (id)encryptedArchiveMetadata;
- (id)encryptionKey;
- (id)init;
- (id)initWithArchiveURL:(id)arg1;
- (bool)openForReading:(id*)arg1;
- (bool)openForWriting:(id*)arg1;
- (void)setAppendToExistingArchive:(bool)arg1;
- (void)setBlockSize:(unsigned long long)arg1;
- (void)setCompression:(long long)arg1;
- (void)setEncryptedArchiveMetadata:(id)arg1;
- (void)setEncryptionKey:(id)arg1;

@end
