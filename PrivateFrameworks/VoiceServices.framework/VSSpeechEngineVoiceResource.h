
@interface VSSpeechEngineVoiceResource : NSObject {
    struct shared_ptr<SiriTTS::VoiceResource> { 
        struct VoiceResource {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _resource;
}

@property struct shared_ptr<SiriTTS::VoiceResource> { struct VoiceResource {} *x1; struct __shared_weak_count {} *x2; } resource;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct shared_ptr<SiriTTS::VoiceResource> { struct VoiceResource {} *x1; struct __shared_weak_count {} *x2; })resource;
- (void)setResource:(struct shared_ptr<SiriTTS::VoiceResource> { struct VoiceResource {} *x1; struct __shared_weak_count {} *x2; })arg1;

@end
