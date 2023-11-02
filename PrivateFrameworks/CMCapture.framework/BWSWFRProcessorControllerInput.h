
@interface BWSWFRProcessorControllerInput : BWStillImageProcessorControllerInput {
    bool  _addFrameFailed;
    struct opaqueCMSampleBuffer { } * _ambientFrame;
    struct opaqueCMSampleBuffer { } * _flashFrame;
}

@property (nonatomic, readonly) bool addFrameFailed;
@property (nonatomic, readonly) struct opaqueCMSampleBuffer { }*ambientFrame;
@property (nonatomic, readonly) struct opaqueCMSampleBuffer { }*flashFrame;

- (void)addFrame:(struct opaqueCMSampleBuffer { }*)arg1;
- (bool)addFrameFailed;
- (struct opaqueCMSampleBuffer { }*)ambientFrame;
- (void)dealloc;
- (struct opaqueCMSampleBuffer { }*)flashFrame;

@end
