
@interface BWSoftISPProcessorControllerInput : BWStillImageProcessorControllerInput {
    struct opaqueCMSampleBuffer { } * _frame;
    bool  _gdcEnabled;
    int  _processingMode;
}

@property (nonatomic, retain) struct opaqueCMSampleBuffer { }*frame;
@property (nonatomic, readonly) bool gdcEnabled;
@property (nonatomic, readonly) int processingMode;

- (void)addFrame:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)addFrame:(struct opaqueCMSampleBuffer { }*)arg1 processingMode:(int)arg2;
- (void)addFrame:(struct opaqueCMSampleBuffer { }*)arg1 processingMode:(int)arg2 transferOwnership:(bool)arg3;
- (void)dealloc;
- (id)description;
- (struct opaqueCMSampleBuffer { }*)frame;
- (bool)gdcEnabled;
- (id)initWithSettings:(id)arg1 portType:(id)arg2;
- (id)initWithSettings:(id)arg1 portType:(id)arg2 gdcEnabled:(bool)arg3;
- (int)processingMode;
- (void)setFrame:(struct opaqueCMSampleBuffer { }*)arg1;

@end
