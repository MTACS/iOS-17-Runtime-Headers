
@interface TTSSynthesisProviderPlayableBuffer : NSObject {
    AVAudioPCMBuffer * _buffer;
    unsigned int  _startFrameOffset;
}

@property (nonatomic, retain) AVAudioPCMBuffer *buffer;
@property (nonatomic, readonly) unsigned int endFrameOffset;
@property (nonatomic) unsigned int startFrameOffset;

- (void).cxx_destruct;
- (id)buffer;
- (unsigned int)endFrameOffset;
- (void)setBuffer:(id)arg1;
- (void)setStartFrameOffset:(unsigned int)arg1;
- (unsigned int)startFrameOffset;

@end
