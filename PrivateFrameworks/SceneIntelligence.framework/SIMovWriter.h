
@interface SIMovWriter : NSObject {
    AVAssetWriterInputPixelBufferAdaptor * _inputAdaptor;
    NSString * _trackName;
    AVAssetWriter * _writer;
    AVAssetWriterInput * _writerInput;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)finishRecording;
- (id)initWriterWithVideoURL:(id)arg1 frameSize:(struct CGSize { double x1; double x2; })arg2;
- (void)startRecording;
- (void)writeFrame:(struct __CVBuffer { }*)arg1 andTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;

@end
