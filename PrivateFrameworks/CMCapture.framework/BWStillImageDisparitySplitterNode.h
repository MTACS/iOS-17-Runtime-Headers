
@interface BWStillImageDisparitySplitterNode : BWNode {
    unsigned long long  _numberOfOutputs;
    id * _outputs;
}

@property (nonatomic, readonly) BWNodeOutput *disparityOutput;
@property (nonatomic, readonly) BWNodeOutput *processedOutput;

+ (void)initialize;

- (void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3;
- (void)dealloc;
- (void)didReachEndOfDataForInput:(id)arg1;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2 forAttachedMediaKey:(id)arg3;
- (id)disparityOutput;
- (void)handleDroppedSample:(id)arg1 forInput:(id)arg2;
- (void)handleNodeError:(id)arg1 forInput:(id)arg2;
- (id)init;
- (id)nodeSubType;
- (id)nodeType;
- (id)processedOutput;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;

@end
