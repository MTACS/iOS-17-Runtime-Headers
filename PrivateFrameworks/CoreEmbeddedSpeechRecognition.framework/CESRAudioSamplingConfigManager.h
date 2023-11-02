
@interface CESRAudioSamplingConfigManager : NSObject {
    NSMutableDictionary * _audioSamplingConfigDict;
}

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)_createConfigFromProductType:(long long)arg1;
- (id)audioSamplingConfigDict;
- (id)init;
- (id)initWithAudioSamplingConfigDict:(id)arg1;
- (void)loadConfigs;
- (bool)shouldSampleFromConfigForProductType:(long long)arg1 language:(id)arg2;

@end
