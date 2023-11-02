
@interface AXMAudioDataSource : NSObject {
    bool  _circular;
    unsigned long long  _currentSampleIndex;
    NSArray * _effectsChain;
    unsigned long long  _length;
    double  _level;
    NSString * _name;
    void * _sampleBuffer;
    double  _sampleRate;
}

@property (getter=isCircular, nonatomic) bool circular;
@property (nonatomic) unsigned long long currentSampleIndex;
@property (nonatomic, readonly) NSArray *effectsChain;
@property (nonatomic) unsigned long long length;
@property (nonatomic) double level;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, readonly) void*sampleBuffer;
@property (nonatomic, readonly) double sampleRate;

- (void).cxx_destruct;
- (void)addEffectToChain:(id)arg1;
- (unsigned long long)currentSampleIndex;
- (void)dealloc;
- (id)description;
- (id)effectsChain;
- (id)init;
- (id)initWithName:(id)arg1 sampleRate:(double)arg2 circular:(bool)arg3;
- (bool)isCircular;
- (unsigned long long)length;
- (double)level;
- (id)name;
- (void)normalizeAudio;
- (void)processEffects:(unsigned long long)arg1;
- (void)removeEffectFromChain:(id)arg1;
- (void*)sampleBuffer;
- (double)sampleRate;
- (void)setCircular:(bool)arg1;
- (void)setCurrentSampleIndex:(unsigned long long)arg1;
- (void)setLength:(unsigned long long)arg1;
- (void)setLevel:(double)arg1;
- (void)setName:(id)arg1;

@end
