
@interface BWStillImageProcessorControllerRequest : NSObject {
    <BWStillImageProcessorControllerDelegate> * _delegate;
    int  _err;
    BWStillImageProcessorControllerInput * _input;
}

@property (nonatomic, readonly) <BWStillImageProcessorControllerDelegate> *delegate;
@property (nonatomic) int err;
@property (nonatomic, readonly) BWStillImageProcessorControllerInput *input;

- (void)dealloc;
- (id)delegate;
- (id)description;
- (int)err;
- (id)initWithInput:(id)arg1 delegate:(id)arg2;
- (id)input;
- (struct opaqueCMSampleBuffer { }*)outputFrame;
- (unsigned long long)outputType;
- (bool)readyForProcessing;
- (void)setErr:(int)arg1;

@end
