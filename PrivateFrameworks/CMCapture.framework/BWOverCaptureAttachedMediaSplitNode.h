
@interface BWOverCaptureAttachedMediaSplitNode : BWAttachedMediaSplitNode {
    BWNodeOutput * _primaryFrameOutput;
    BWNodeOutput * _synchronizedSlaveFrameOutput;
}

@property (nonatomic, readonly) BWNodeOutput *primaryFrameOutput;
@property (nonatomic, readonly) BWNodeOutput *synchronizedSlaveFrameOutput;

+ (void)initialize;

- (void)dealloc;
- (id)initWithBackPressureExtraRetainBufferCount:(int)arg1;
- (id)primaryFrameOutput;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;
- (id)synchronizedSlaveFrameOutput;

@end
