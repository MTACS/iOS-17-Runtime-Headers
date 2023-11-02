
@interface AVAudioEnvironmentReverbParameters : NSObject {
    void * _impl;
}

@property (nonatomic) bool enable;
@property (nonatomic, readonly) AVAudioUnitEQFilterParameters *filterParameters;
@property (nonatomic) float level;

- (void)dealloc;
- (bool)enable;
- (id)filterParameters;
- (id)init;
- (id)initWithEnvironment:(void*)arg1;
- (float)level;
- (void)loadFactoryReverbPreset:(long long)arg1;
- (void)setEnable:(bool)arg1;
- (void)setLevel:(float)arg1;

@end
