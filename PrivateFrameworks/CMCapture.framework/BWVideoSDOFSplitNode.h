
@interface BWVideoSDOFSplitNode : BWFanOutNode {
    BWNodeOutput * _originalOutput;
    struct opaqueCMFormatDescription { } * _originalVideoFormatDescription;
    BWNodeOutput * _sdofOutput;
}

@property (nonatomic, readonly) BWNodeOutput *originalOutput;
@property (nonatomic, readonly) BWNodeOutput *sdofOutput;

+ (void)initialize;

- (void)dealloc;
- (id)init;
- (id)nodeSubType;
- (id)originalOutput;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;
- (id)sdofOutput;

@end
