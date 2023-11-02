
@interface VNImageAnalyzerCompoundRequestConfiguration : VNRequestConfiguration {
    NSDictionary * _detectorConfigurationOptions;
    NSString * _detectorType;
    NSArray * _originalRequestConfigurations;
}

@property (nonatomic, copy) NSDictionary *detectorConfigurationOptions;
@property (nonatomic, copy) NSString *detectorType;
@property (nonatomic, copy) NSArray *originalRequestConfigurations;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)detectorConfigurationOptions;
- (id)detectorType;
- (id)originalRequestConfigurations;
- (void)setDetectorConfigurationOptions:(id)arg1;
- (void)setDetectorType:(id)arg1;
- (void)setOriginalRequestConfigurations:(id)arg1;

@end
