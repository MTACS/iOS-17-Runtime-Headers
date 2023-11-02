
@interface SCMLVideoFrame : NSObject {
    struct opaqueCMSampleBuffer { } * _frameBuffer;
    unsigned long long  _frameIndex;
}

@property (readonly) struct opaqueCMSampleBuffer { }*frameBuffer;
@property (readonly) unsigned long long frameIndex;

- (double)_timestamp;
- (void)dealloc;
- (struct opaqueCMSampleBuffer { }*)frameBuffer;
- (unsigned long long)frameIndex;
- (id)initWithFrameBuffer:(struct opaqueCMSampleBuffer { }*)arg1 frameIndex:(long long)arg2;
- (id)metaDataInfo;
- (bool)saveToPngWithUrl:(id)arg1;

@end
