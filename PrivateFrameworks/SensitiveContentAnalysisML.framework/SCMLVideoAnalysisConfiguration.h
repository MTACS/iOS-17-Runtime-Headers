
@interface SCMLVideoAnalysisConfiguration : SCMLAnalysisConfiguration {
    NSString * _debugFramesOutputPathPrefix;
    NSNumber * _frameLimit;
    unsigned long long  _framesPerSync;
    unsigned long long  _sensitiveFrameCountThreshold;
    bool  _useUniformSampling;
}

@property (nonatomic, readonly) NSString *debugFramesOutputPathPrefix;
@property (nonatomic, readonly) NSNumber *frameLimit;
@property (nonatomic, readonly) unsigned long long framesPerSync;
@property (nonatomic, readonly) unsigned long long sensitiveFrameCountThreshold;
@property (nonatomic, readonly) bool useUniformSampling;

+ (id)defaultConfig;

- (void).cxx_destruct;
- (id)debugFramesOutputPathPrefix;
- (id)frameLimit;
- (unsigned long long)framesPerSync;
- (id)init;
- (id)initWithOptions:(id)arg1;
- (id)initWithOptions:(id)arg1 framesPerSync:(unsigned long long)arg2 frameLimit:(id)arg3 sensitiveFrameCountThreshold:(unsigned long long)arg4 useUniformSampling:(bool)arg5;
- (unsigned long long)sensitiveFrameCountThreshold;
- (bool)useUniformSampling;

@end
