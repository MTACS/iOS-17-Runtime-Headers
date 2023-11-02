
@interface BWLearnedNRInput : BWStillImageProcessorControllerInput {
    <BWLearnedNRInputDelegate> * _delegate;
    struct opaqueCMSampleBuffer { } * _inputFrame;
}

@property (nonatomic, retain) <BWLearnedNRInputDelegate> *delegate;
@property (nonatomic, readonly) struct opaqueCMSampleBuffer { }*inputFrame;

- (void)dealloc;
- (id)delegate;
- (struct opaqueCMSampleBuffer { }*)inputFrame;
- (void)setDelegate:(id)arg1;
- (void)setInputFrame:(struct opaqueCMSampleBuffer { }*)arg1;

@end
