
@interface PBReader : OCBReader {
    const void * mBuffer;
    struct PptObjectFactory { int (**x1)(); struct PptEshObjectFactory {} *x2; } * mPptObjectFactory;
}

@property (nonatomic, readonly) void*pptReader;

- (struct OCCBinaryStreamer { int (**x1)(); struct OCCCryptoKey {} *x2; char *x3; }*)allocBinaryStreamerWithCryptoKey:(struct OCCCryptoKey { }*)arg1 baseOutputFilenameInUTF8:(const char *)arg2;
- (void)dealloc;
- (struct OCCEncryptionInfoReader { int (**x1)(); }*)encryptionInfoReader;
- (id)initWithCancelDelegate:(id)arg1;
- (void*)pptReader;
- (id)read;
- (bool)start;

@end
