
@interface BWSoftISPResult : NSObject {
    int  _error;
    BWSoftISPProcessorControllerInput * _input;
    struct opaqueCMSampleBuffer { } * _outputSampleBuffer;
}

@property (nonatomic, readonly) int error;
@property (nonatomic, readonly) BWSoftISPProcessorControllerInput *input;
@property (nonatomic, readonly) struct opaqueCMSampleBuffer { }*outputSampleBuffer;

- (void)dealloc;
- (int)error;
- (id)initWithInput:(id)arg1 outputSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2 error:(int)arg3;
- (id)input;
- (struct opaqueCMSampleBuffer { }*)outputSampleBuffer;

@end
