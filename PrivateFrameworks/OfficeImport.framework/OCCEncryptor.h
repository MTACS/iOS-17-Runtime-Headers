
@interface OCCEncryptor : NSObject {
    NSString * mOutputFilename;
    struct OCCStreamer { int (**x1)(); struct OCCCryptoKey {} *x2; char *x3; } * mStreamer;
}

@property (nonatomic, readonly) NSString *outputFilename;

+ (id)allocTempFileWithBase:(id)arg1 filename:(id*)arg2;

- (void).cxx_destruct;
- (void)dealloc;
- (bool)encrypt;
- (bool)encryptIntoOutputFile;
- (id)initWithStreamer:(struct OCCStreamer { int (**x1)(); struct OCCCryptoKey {} *x2; char *x3; }*)arg1;
- (id)outputFilename;

@end
