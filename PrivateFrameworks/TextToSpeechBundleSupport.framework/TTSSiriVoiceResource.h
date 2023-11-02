
@interface TTSSiriVoiceResource : NSObject {
    NSData * _resourceData;
    NSString * _resourceName;
    NSString * _resourceString;
    TTSRuleset * _ruleSet;
    struct shared_ptr<SiriTTS::VoiceResource> { 
        struct VoiceResource {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _siriVoiceResource;
    unsigned long long  _type;
}

@property (nonatomic, retain) NSData *resourceData;
@property (nonatomic, retain) NSString *resourceName;
@property (nonatomic, retain) NSString *resourceString;
@property (nonatomic, retain) TTSRuleset *ruleSet;
@property (nonatomic) struct shared_ptr<SiriTTS::VoiceResource> { struct VoiceResource {} *x1; struct __shared_weak_count {} *x2; } siriVoiceResource;
@property (nonatomic) unsigned long long type;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)resourceData;
- (id)resourceName;
- (id)resourceString;
- (id)ruleSet;
- (void)setResourceData:(id)arg1;
- (void)setResourceName:(id)arg1;
- (void)setResourceString:(id)arg1;
- (void)setRuleSet:(id)arg1;
- (void)setSiriVoiceResource:(struct shared_ptr<SiriTTS::VoiceResource> { struct VoiceResource {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (void)setType:(unsigned long long)arg1;
- (struct shared_ptr<SiriTTS::VoiceResource> { struct VoiceResource {} *x1; struct __shared_weak_count {} *x2; })siriVoiceResource;
- (unsigned long long)type;

@end
