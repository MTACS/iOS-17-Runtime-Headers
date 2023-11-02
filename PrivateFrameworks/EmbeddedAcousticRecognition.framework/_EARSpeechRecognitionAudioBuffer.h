
@interface _EARSpeechRecognitionAudioBuffer : NSObject {
    struct shared_ptr<quasar::RecogAudioBufferBase> { 
        struct RecogAudioBufferBase {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _buffer;
    bool  _cancelled;
    bool  _ended;
    NSObject<OS_dispatch_queue> * _queue;
    _EARSpeechRecognizer * _speechRecognizer;
}

@property (readonly) double bufferedAudioDuration;
@property (readonly) double consumedAudioDuration;

+ (void)initialize;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_detachFromRecognizer;
- (id)_initWithAudioBuffer:(struct shared_ptr<quasar::RecogAudioBufferBase> { struct RecogAudioBufferBase {} *x1; struct __shared_weak_count {} *x2; })arg1 speechRecognizer:(id)arg2;
- (void)_setUnderlyingBuffer:(struct shared_ptr<quasar::RecogAudioBufferBase> { struct RecogAudioBufferBase {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (void)addAudioSampleData:(id)arg1;
- (void)addAudioSamples:(const short*)arg1 count:(unsigned long long)arg2;
- (double)bufferedAudioDuration;
- (void)cancelRecognition;
- (double)consumedAudioDuration;
- (void)endAudio;
- (unsigned long long)packetArrivalTimestampFromAudioTime:(float)arg1;
- (void)stopAudioDecoding;
- (void)triggerServerSideEndPointer;

@end
