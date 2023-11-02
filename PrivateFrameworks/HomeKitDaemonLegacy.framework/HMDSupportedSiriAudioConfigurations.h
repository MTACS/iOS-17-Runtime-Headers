
@interface HMDSupportedSiriAudioConfigurations : NSObject {
    HAPAudioStreamCodecConfiguration * _selectedConfiguration;
    long long  _siriInputType;
    NSArray * _supportedConfigurations;
}

@property (nonatomic, retain) HAPAudioStreamCodecConfiguration *selectedConfiguration;
@property (nonatomic) long long siriInputType;
@property (nonatomic, retain) NSArray *supportedConfigurations;

- (void).cxx_destruct;
- (id)selectedConfiguration;
- (void)setSelectedConfiguration:(id)arg1;
- (void)setSiriInputType:(long long)arg1;
- (void)setSupportedConfigurations:(id)arg1;
- (long long)siriInputType;
- (id)supportedConfigurations;

@end
