
@interface SecExperiment : NSObject {
    SecExperimentConfig * _cachedConfig;
    NSString * _name;
    bool  _samplingDisabled;
}

@property (retain) SecExperimentConfig *cachedConfig;
@property (readonly) NSString *identifier;
@property (retain) NSString *name;
@property (nonatomic) bool samplingDisabled;

- (void).cxx_destruct;
- (id)cachedConfig;
- (id)copyExperimentConfiguration;
- (id)copyExperimentConfigurationFromUserDefaults;
- (id)copyRandomExperimentConfigurationFromAsset:(id)arg1;
- (id)copyRemoteExperimentAsset;
- (bool)experimentIsAllowedForProcess;
- (id)identifier;
- (id)initWithName:(const char *)arg1;
- (bool)isSamplingDisabled;
- (bool)isSamplingDisabledWithDefault:(bool)arg1;
- (id)name;
- (bool)samplingDisabled;
- (void)setCachedConfig:(id)arg1;
- (void)setName:(id)arg1;
- (void)setSamplingDisabled:(bool)arg1;

@end
