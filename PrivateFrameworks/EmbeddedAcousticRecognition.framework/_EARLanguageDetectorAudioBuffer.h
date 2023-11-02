
@interface _EARLanguageDetectorAudioBuffer : NSObject {
    struct shared_ptr<quasar::RecogAudioBuffer> { 
        struct RecogAudioBuffer {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _buffer;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_initWithAudioBuffer:(const void*)arg1;
- (void)addAudioSampleData:(id)arg1;
- (void)addAudioSamples:(const short*)arg1 count:(unsigned long long)arg2;
- (void)endAudio;

@end
