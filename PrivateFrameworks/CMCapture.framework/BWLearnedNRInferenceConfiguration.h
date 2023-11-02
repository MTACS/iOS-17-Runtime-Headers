
@interface BWLearnedNRInferenceConfiguration : BWTiledEspressoInferenceConfiguration {
    NSString * _outputMediaKey;
    NSDictionary * _sensorConfigurationsByPortType;
}

@property (nonatomic, readonly) NSString *outputMediaKey;
@property (nonatomic, readonly) NSDictionary *sensorConfigurationsByPortType;

+ (id)outputMediaKeyForInferenceType:(int)arg1;

- (void)dealloc;
- (id)initWithMetalCommandQueue:(id)arg1 sensorConfigurationsByPortType:(id)arg2 inferenceType:(int)arg3;
- (id)outputMediaKey;
- (id)sensorConfigurationsByPortType;

@end
