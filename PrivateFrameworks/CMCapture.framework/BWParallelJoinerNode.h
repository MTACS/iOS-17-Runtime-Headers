
@interface BWParallelJoinerNode : BWFunnelNode {
    int  _inputsCount;
    NSMutableDictionary * _receivedBuffers;
    NSMutableDictionary * _sentErrorCountForID;
}

- (void)dealloc;
- (void)handleNodeError:(id)arg1 forInput:(id)arg2;
- (id)initWithNumberOfInputs:(int)arg1 mediaType:(unsigned int)arg2;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;

@end
