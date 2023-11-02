
@interface SISceneSegmentationNetworkConfiguration : SINetworkConfiguration {
    bool  _isResampleOutput;
    long long  _modelConfig;
    long long  _networkModeEnum;
    float  _uncertaintyThreshold;
}

@property (nonatomic) bool isResampleOutput;
@property (nonatomic) long long modelConfig;
@property (nonatomic) long long networkModeEnum;
@property (nonatomic) float uncertaintyThreshold;

- (id)init;
- (bool)isResampleOutput;
- (long long)modelConfig;
- (long long)networkModeEnum;
- (void)setIsResampleOutput:(bool)arg1;
- (void)setModelConfig:(long long)arg1;
- (void)setNetworkModeEnum:(long long)arg1;
- (void)setUncertaintyThreshold:(float)arg1;
- (float)uncertaintyThreshold;

@end
