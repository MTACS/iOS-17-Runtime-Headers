
@interface VNNOPRequestConfiguration : VNImageBasedRequestConfiguration {
    double  _detectorExecutionTimeInterval;
    VNSupportedImageSize * _detectorPreferredImageSize;
    bool  _detectorWantsAnisotropicScaling;
}

@property (nonatomic) double detectorExecutionTimeInterval;
@property (nonatomic, retain) VNSupportedImageSize *detectorPreferredImageSize;
@property (nonatomic) bool detectorWantsAnisotropicScaling;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)detectorExecutionTimeInterval;
- (id)detectorPreferredImageSize;
- (bool)detectorWantsAnisotropicScaling;
- (id)initWithRequestClass:(Class)arg1;
- (void)setDetectorExecutionTimeInterval:(double)arg1;
- (void)setDetectorPreferredImageSize:(id)arg1;
- (void)setDetectorWantsAnisotropicScaling:(bool)arg1;

@end
