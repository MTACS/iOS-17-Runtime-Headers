
@interface VKAVCaptureFrame : VKFrame {
    unsigned int  _orientation;
    struct opaqueCMSampleBuffer { } * _sampleBuffer;
}

@property (nonatomic) unsigned int orientation;
@property (nonatomic) struct opaqueCMSampleBuffer { }*sampleBuffer;

- (struct __CVBuffer { }*)CVImageBuffer;
- (void)dealloc;
- (id)imageRequestHandler;
- (unsigned int)orientation;
- (struct opaqueCMSampleBuffer { }*)sampleBuffer;
- (void)setOrientation:(unsigned int)arg1;
- (void)setSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;

@end
