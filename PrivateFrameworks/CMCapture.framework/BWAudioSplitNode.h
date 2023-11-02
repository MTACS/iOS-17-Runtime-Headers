
@interface BWAudioSplitNode : BWNode {
    BWNodeInput * _input;
    unsigned int  _inputChannelLayoutTag;
    unsigned int  _inputNumberOfChannels;
    BWNodeOutput * _output1;
    unsigned int  _output1ChannelLayoutTag;
    BWNodeOutput * _output2;
    unsigned int  _output2ChannelLayoutTag;
    unsigned int  _splitAtIndex;
}

+ (void)initialize;

- (void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3;
- (void)dealloc;
- (void)didReachEndOfDataForInput:(id)arg1;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2 forAttachedMediaKey:(id)arg3;
- (id)initWithInputChannelLayoutTag:(unsigned int)arg1 output1ChannelLayoutTag:(unsigned int)arg2 output2ChannelLayoutTag:(unsigned int)arg3;
- (id)nodeSubType;
- (id)nodeType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;

@end
