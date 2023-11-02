
@interface SIPeopleSegmentationNetworkConfiguration : SINetworkConfiguration {
    NSString * _imageScalerIdentifier;
    unsigned int  _inputImageFormat;
    long long  _modelConfig;
    long long  _networkModeEnum;
}

@property (nonatomic, readonly) NSString *imageScalerIdentifier;
@property (nonatomic, readonly) unsigned int inputImageFormat;
@property (nonatomic) long long modelConfig;
@property (nonatomic) long long networkModeEnum;

- (void).cxx_destruct;
- (id)imageScalerIdentifier;
- (id)init;
- (unsigned int)inputImageFormat;
- (long long)modelConfig;
- (long long)networkModeEnum;
- (void)setModelConfig:(long long)arg1;
- (void)setNetworkModeEnum:(long long)arg1;

@end
