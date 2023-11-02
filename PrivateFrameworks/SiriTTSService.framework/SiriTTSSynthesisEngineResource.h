
@interface SiriTTSSynthesisEngineResource : NSObject {
    struct shared_ptr<SiriTTS::VoiceResource> { 
        struct VoiceResource {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _handle;
    NSString * _mimeType;
    NSString * _path;
}

@property struct shared_ptr<SiriTTS::VoiceResource> { struct VoiceResource {} *x1; struct __shared_weak_count {} *x2; } handle;
@property (nonatomic, retain) NSString *mimeType;
@property (nonatomic, retain) NSString *path;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct shared_ptr<SiriTTS::VoiceResource> { struct VoiceResource {} *x1; struct __shared_weak_count {} *x2; })handle;
- (id)mimeType;
- (id)path;
- (void)setHandle:(struct shared_ptr<SiriTTS::VoiceResource> { struct VoiceResource {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (void)setMimeType:(id)arg1;
- (void)setPath:(id)arg1;

@end
