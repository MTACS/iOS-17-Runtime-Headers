
@interface EBReader : OCBReader {
    const void * mBuffer;
    bool  mIsFileStructuredStorage;
    NSString * mTemporaryDirectory;
    bool  mUseStringOptimization;
    struct XlObjectFactory { int (**x1)(); struct XlEshObjectFactory {} *x2; } * mXlObjectFactory;
}

@property (nonatomic) bool isFileStructuredStorage;
@property (nonatomic, retain) NSString *temporaryDirectory;
@property (nonatomic) bool useStringOptimization;
@property (nonatomic, readonly) void*xlReader;

- (void).cxx_destruct;
- (struct OCCBinaryStreamer { int (**x1)(); struct OCCCryptoKey {} *x2; char *x3; }*)allocBinaryStreamerWithCryptoKey:(struct OCCCryptoKey { }*)arg1 baseOutputFilenameInUTF8:(const char *)arg2;
- (void)dealloc;
- (struct OCCEncryptionInfoReader { int (**x1)(); }*)encryptionInfoReader;
- (id)initWithCancelDelegate:(id)arg1;
- (bool)isFileStructuredStorage;
- (id)read;
- (void)setIsFileStructuredStorage:(bool)arg1;
- (void)setTemporaryDirectory:(id)arg1;
- (void)setUseStringOptimization:(bool)arg1;
- (bool)start;
- (id)temporaryDirectory;
- (bool)useStringOptimization;
- (void*)xlReader;

@end
