
@interface CSAudioCircularBuffer : NSObject {
    CSAudioTimeConverter * _audioTimeConverter;
    unsigned long long  _bufferLength;
    struct unique_ptr<corespeech::CSAudioCircularBufferImpl<unsigned short>, std::default_delete<corespeech::CSAudioCircularBufferImpl<unsigned short>>> { 
        struct __compressed_pair<corespeech::CSAudioCircularBufferImpl<unsigned short> *, std::default_delete<corespeech::CSAudioCircularBufferImpl<unsigned short>>> { 
            void *__value_; 
        } __ptr_; 
    }  _csAudioCircularBufferImpl;
    float  _inputRecordingDuration;
    unsigned long long  _numInputChannels;
}

@property (nonatomic, retain) CSAudioTimeConverter *audioTimeConverter;
@property (nonatomic) unsigned long long bufferLength;
@property (nonatomic) float inputRecordingDuration;
@property (nonatomic) unsigned long long numInputChannels;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addSamples:(const void*)arg1 numSamples:(unsigned long long)arg2;
- (void)addSamples:(const void*)arg1 numSamples:(unsigned long long)arg2 atHostTime:(unsigned long long)arg3;
- (id)audioTimeConverter;
- (unsigned long long)bufferLength;
- (id)copyBufferWithNumSamplesCopiedIn:(unsigned long long*)arg1;
- (id)copySamplesFrom:(unsigned long long)arg1 to:(unsigned long long)arg2;
- (id)copySamplesFrom:(unsigned long long)arg1 to:(unsigned long long)arg2 channelIdx:(unsigned long long)arg3;
- (id)copySamplesFromHostTime:(unsigned long long)arg1;
- (id)copybufferFrom:(unsigned long long)arg1 to:(unsigned long long)arg2;
- (id)initWithNumChannels:(unsigned long long)arg1 recordingDuration:(float)arg2 samplingRate:(float)arg3;
- (id)initWithNumChannels:(unsigned long long)arg1 recordingDuration:(float)arg2 samplingRate:(float)arg3 audioTimeConverter:(id)arg4;
- (float)inputRecordingDuration;
- (unsigned long long)numInputChannels;
- (void)reset;
- (unsigned long long)sampleCount;
- (void)setAudioTimeConverter:(id)arg1;
- (void)setBufferLength:(unsigned long long)arg1;
- (void)setInputRecordingDuration:(float)arg1;
- (void)setNumInputChannels:(unsigned long long)arg1;

@end
