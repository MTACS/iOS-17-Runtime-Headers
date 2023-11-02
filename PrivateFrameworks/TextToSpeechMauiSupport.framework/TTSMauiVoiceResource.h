
@interface TTSMauiVoiceResource : NSObject {
    NSData * _resourceData;
    NSString * _resourceName;
    NSString * _resourceString;
    TTSRuleset * _ruleSet;
    unsigned long long  _type;
    struct _VE_HSAFE { 
        void *pHandleData; 
        unsigned int u32Check; 
    }  _voiceResourceHandle;
}

@property (nonatomic, retain) NSData *resourceData;
@property (nonatomic, retain) NSString *resourceName;
@property (nonatomic, retain) NSString *resourceString;
@property (nonatomic, retain) TTSRuleset *ruleSet;
@property (nonatomic) unsigned long long type;
@property (nonatomic) struct _VE_HSAFE { void *x1; unsigned int x2; } voiceResourceHandle;

- (void).cxx_destruct;
- (id)resourceData;
- (id)resourceName;
- (id)resourceString;
- (id)ruleSet;
- (void)setResourceData:(id)arg1;
- (void)setResourceName:(id)arg1;
- (void)setResourceString:(id)arg1;
- (void)setRuleSet:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (void)setVoiceResourceHandle:(struct _VE_HSAFE { void *x1; unsigned int x2; })arg1;
- (unsigned long long)type;
- (struct _VE_HSAFE { void *x1; unsigned int x2; })voiceResourceHandle;

@end
