
@interface HMDCameraConfigurationsLogEvent : HMMLogEvent {
    NSArray * _homeSettingsConfigurations;
}

@property (nonatomic, readonly) NSArray *homeSettingsConfigurations;

- (void).cxx_destruct;
- (id)homeSettingsConfigurations;
- (id)initWithHomes:(id)arg1;

@end
