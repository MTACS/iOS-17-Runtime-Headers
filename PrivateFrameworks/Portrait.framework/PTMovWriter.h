
@interface PTMovWriter : NSObject {
    NSURL * _fileURL;
    int  _frameNo;
    float  _framesPerSecond;
    AVAssetWriterInputPixelBufferAdaptor * _pbAdaptor;
    AVAssetWriter * _writer;
    AVAssetWriterInput * _writerInput;
}

@property (nonatomic) NSURL *fileURL;

- (void).cxx_destruct;
- (void)addFrame:(struct __CVBuffer { }*)arg1;
- (void)addFrame:(struct __CVBuffer { }*)arg1 time:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (id)fileURL;
- (void)finalize;
- (id)initWithURL:(id)arg1 settings:(id)arg2;
- (void)setFileURL:(id)arg1;

@end
