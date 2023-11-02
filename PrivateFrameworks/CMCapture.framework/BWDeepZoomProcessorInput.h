
@interface BWDeepZoomProcessorInput : BWStillImageProcessorControllerInput {
    unsigned long long  _bufferType;
    <BWDeepZoomProcessorInputDelegate> * _delegate;
    struct opaqueCMSampleBuffer { } * _sampleBuffer;
    bool  _sampleBufferSet;
}

@property (nonatomic, readonly) unsigned long long bufferType;
@property (nonatomic, retain) <BWDeepZoomProcessorInputDelegate> *delegate;
@property (nonatomic, readonly) struct opaqueCMSampleBuffer { }*sampleBuffer;
@property (nonatomic) bool sampleBufferSet;

- (void)addSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 bufferType:(unsigned long long)arg2;
- (unsigned long long)bufferType;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (struct opaqueCMSampleBuffer { }*)sampleBuffer;
- (bool)sampleBufferSet;
- (void)setDelegate:(id)arg1;
- (void)setSampleBufferSet:(bool)arg1;

@end
