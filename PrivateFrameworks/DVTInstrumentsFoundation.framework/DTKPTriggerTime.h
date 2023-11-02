
@interface DTKPTriggerTime : DTKPTrigger {
    bool  _profileEveryThread;
    unsigned long long  _sampleRate;
    unsigned int  _timerID;
}

@property (nonatomic) bool profileEveryThread;
@property (nonatomic) unsigned long long sampleRate;
@property (nonatomic, readonly) unsigned int timerID;

+ (int)reinitializeKperf:(id*)arg1;

- (int)_configureTimer:(unsigned int)arg1 actionID:(unsigned int)arg2 period:(unsigned long long)arg3 userData:(unsigned int)arg4;
- (unsigned long long)_recordConfigWordsIntoBuffer:(unsigned long long*)arg1;
- (unsigned int)_timerIDAlloc;
- (void)_timerIDDdealloc:(unsigned int)arg1;
- (void)dealloc;
- (id)initWithCounterAllocatorProvider:(id)arg1;
- (bool)profileEveryThread;
- (unsigned long long)sampleRate;
- (void)setProfileEveryThread:(bool)arg1;
- (void)setSampleRate:(unsigned long long)arg1;
- (int)start:(id*)arg1;
- (int)stop:(id*)arg1;
- (unsigned int)timerID;
- (unsigned long long)triggerKind;

@end
