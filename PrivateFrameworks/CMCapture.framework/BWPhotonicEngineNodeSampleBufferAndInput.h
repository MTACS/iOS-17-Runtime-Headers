
@interface BWPhotonicEngineNodeSampleBufferAndInput : NSObject {
    BWNodeInput * _nodeInput;
    struct opaqueCMSampleBuffer { } * _sampleBuffer;
}

@property (nonatomic, readonly) BWNodeInput *nodeInput;
@property (nonatomic, readonly) struct opaqueCMSampleBuffer { }*sampleBuffer;

- (void)dealloc;
- (id)initWithSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 nodeInput:(id)arg2;
- (id)nodeInput;
- (struct opaqueCMSampleBuffer { }*)sampleBuffer;

@end
