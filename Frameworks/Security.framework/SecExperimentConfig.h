
@interface SecExperimentConfig : NSObject {
    NSDictionary * _config;
    NSDictionary * _configurationData;
    unsigned int  _deviceSampleRate;
    unsigned int  _fleetSampleRate;
    NSString * _identifier;
}

@property (retain) NSDictionary *config;
@property (retain) NSDictionary *configurationData;
@property unsigned int deviceSampleRate;
@property unsigned int fleetSampleRate;
@property (retain) NSString *identifier;
@property (readonly) bool isSampled;

- (void).cxx_destruct;
- (id)config;
- (id)configurationData;
- (unsigned int)deviceSampleRate;
- (unsigned int)fleetSampleRate;
- (unsigned int)hostHash;
- (id)identifier;
- (id)initWithConfiguration:(id)arg1;
- (bool)isSampled;
- (void)setConfig:(id)arg1;
- (void)setConfigurationData:(id)arg1;
- (void)setDeviceSampleRate:(unsigned int)arg1;
- (void)setFleetSampleRate:(unsigned int)arg1;
- (void)setIdentifier:(id)arg1;
- (bool)shouldRunWithSamplingRate:(id)arg1;

@end
