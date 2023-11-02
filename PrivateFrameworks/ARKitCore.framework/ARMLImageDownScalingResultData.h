
@interface ARMLImageDownScalingResultData : NSObject <ARResultData> {
    NSArray * _downScalingResults;
    ARMLImageDownScalingResultData * _latestResizedUltraWideImageData;
    ARImageData * _originalImageData;
    long long  _rotationOfResultTensor;
    double  _timestamp;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSArray *downScalingResults;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) ARMLImageDownScalingResultData *latestResizedUltraWideImageData;
@property (nonatomic, readonly) ARImageData *originalImageData;
@property (nonatomic, readonly) long long rotationOfResultTensor;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double timestamp;

- (void).cxx_destruct;
- (id)downScalingResults;
- (id)initWithResultDataArray:(id)arg1 timestamp:(double)arg2 rotationOfResultTensor:(long long)arg3 originalImageData:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)latestResizedUltraWideImageData;
- (id)originalImageData;
- (long long)rotationOfResultTensor;
- (void)setLatestResizedUltraWideImageData:(id)arg1;
- (double)timestamp;

@end
