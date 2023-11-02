
@interface BWPointCloudDensificationNode : BWNode {
    BWPointCloudDensificationNodeConfiguration * _configuration;
    ADJasperColorV2Executor * _executor;
}

+ (void)initialize;

- (id)_newPointCloudFromSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)_setupPointCloudMediaConfigurationForInput:(id)arg1 inputAttachedMediaKey:(id)arg2;
- (void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3;
- (void)dealloc;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2 forAttachedMediaKey:(id)arg3;
- (id)initWithConfiguration:(id)arg1;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;

@end
