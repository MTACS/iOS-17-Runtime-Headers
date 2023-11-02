
@interface CSAudioChunkWithBufferedTimestamp : NSObject {
    CSAudioChunk * _audioChunk;
    NSNumber * _bufferedTimestamp;
}

@property (nonatomic, retain) CSAudioChunk *audioChunk;
@property (nonatomic, retain) NSNumber *bufferedTimestamp;

- (void).cxx_destruct;
- (id)audioChunk;
- (id)bufferedTimestamp;
- (id)initWithAudioChunk:(id)arg1 bufferedTimestamp:(id)arg2;
- (void)setAudioChunk:(id)arg1;
- (void)setBufferedTimestamp:(id)arg1;

@end
