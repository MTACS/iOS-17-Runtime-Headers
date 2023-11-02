
@protocol SVXAudioStreamBasicDescriptionMutating <NSObject>

@required

- (void)setBitsPerChannel:(unsigned int)arg1;
- (void)setBytesPerFrame:(unsigned int)arg1;
- (void)setBytesPerPacket:(unsigned int)arg1;
- (void)setChannelsPerFrame:(unsigned int)arg1;
- (void)setFormatFlags:(unsigned int)arg1;
- (void)setFormatID:(unsigned int)arg1;
- (void)setFramesPerPacket:(unsigned int)arg1;
- (void)setReserved:(unsigned int)arg1;
- (void)setSampleRate:(double)arg1;

@end
