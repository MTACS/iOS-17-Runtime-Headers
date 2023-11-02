
@interface SIPersonDetectorNetworkConfiguration : SINetworkConfiguration {
    NSString * _imageScalerIdentifier;
    long long  _modelConfig;
    long long  _networkModeEnum;
}

@property (nonatomic, readonly) NSString *imageScalerIdentifier;
@property (nonatomic) long long modelConfig;
@property (nonatomic) long long networkModeEnum;

- (void).cxx_destruct;
- (id)imageScalerIdentifier;
- (id)init;
- (long long)modelConfig;
- (long long)networkModeEnum;
- (void)setModelConfig:(long long)arg1;
- (void)setNetworkModeEnum:(long long)arg1;

@end
