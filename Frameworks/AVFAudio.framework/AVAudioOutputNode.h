
@interface AVAudioOutputNode : AVAudioIONode

- (id)manualRenderingFormat;
- (unsigned int)manualRenderingMaximumFrameCount;
- (bool)setManualRenderingPCMFormat:(id)arg1 maximumFrameCount:(unsigned int)arg2;

@end
