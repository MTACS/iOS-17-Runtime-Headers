
@interface DYMTLShaderProfilerResult : DYShaderProfilerResult {
    NSArray * _encoderTilerParamBufBytesUsedArray;
    NSNumber * _parameterBufferMaxSize;
    NSNumber * _parameterBufferMaxSizeEverMemless;
    NSNumber * _parameterBufferMaxSizeNeverMemless;
    NSDictionary * _parameterBufferPercentFullDict;
    NSMutableDictionary * _perRingPerFrameLimiterData;
    NSDictionary * _softwareCounterInfo;
    NSMutableData * _unknownUSCSamples;
}

@property (nonatomic, retain) NSArray *encoderTilerParamBufBytesUsedArray;
@property (nonatomic, retain) NSNumber *parameterBufferMaxSize;
@property (nonatomic, retain) NSNumber *parameterBufferMaxSizeEverMemless;
@property (nonatomic, retain) NSNumber *parameterBufferMaxSizeNeverMemless;
@property (nonatomic, retain) NSDictionary *parameterBufferPercentFullDict;
@property (nonatomic, retain) NSMutableDictionary *perRingPerFrameLimiterData;
@property (nonatomic, retain) NSDictionary *softwareCounterInfo;
@property (nonatomic, retain) NSMutableData *unknownUSCSamples;

- (void).cxx_destruct;
- (id)encoderTilerParamBufBytesUsedArray;
- (id)init;
- (id)parameterBufferMaxSize;
- (id)parameterBufferMaxSizeEverMemless;
- (id)parameterBufferMaxSizeNeverMemless;
- (id)parameterBufferPercentFullDict;
- (id)perRingPerFrameLimiterData;
- (void)setEncoderTilerParamBufBytesUsedArray:(id)arg1;
- (void)setParameterBufferMaxSize:(id)arg1;
- (void)setParameterBufferMaxSizeEverMemless:(id)arg1;
- (void)setParameterBufferMaxSizeNeverMemless:(id)arg1;
- (void)setParameterBufferPercentFullDict:(id)arg1;
- (void)setPerRingPerFrameLimiterData:(id)arg1;
- (void)setSoftwareCounterInfo:(id)arg1;
- (void)setUnknownUSCSamples:(id)arg1;
- (id)softwareCounterInfo;
- (id)unknownUSCSamples;

@end
