
@interface _LTSpeechCompressor : NSObject {
    struct OpaqueAudioConverter { } * _audioConverter;
    NSMutableData * _bufferedAudio;
    unsigned long long  _bytesConsumed;
    <_LTSpeechCompressorDelegate> * _delegate;
    unsigned long long  _packetIndex;
}

- (void).cxx_destruct;
- (void)addAudioSampleData:(id)arg1;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;
- (void)reset;
- (void)startCompressionNarrowband:(bool)arg1;

@end
