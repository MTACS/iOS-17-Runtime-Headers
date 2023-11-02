
@interface AXMAXElementDetectorNode : AXMMobileAssetEvaluationNode {
    AXMindNetDetector * _clickabilityDetector;
    AXMIconClassDetectorNode * _iconDetector;
    AXMindNetDetector * _mindNetDetector;
}

@property (nonatomic, readonly) AXMindNetDetector *clickabilityDetector;
@property (nonatomic, readonly) AXMindNetDetector *mindNetDetector;

+ (bool)isSupported;
+ (bool)supportsSecureCoding;
+ (id)title;

- (void).cxx_destruct;
- (double)IoUForbb1:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 bb2:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)_evaluateANOD:(id)arg1 metrics:(id)arg2;
- (id)_imageByWipingTextFromRects:(id)arg1 image:(id)arg2 colorSpace:(struct CGColorSpace { }*)arg3 ciContext:(id)arg4;
- (void)_initializeClickabilityModel;
- (void)_initializeIconDetector;
- (void)_initializeMindNetDetector;
- (id)_nonMaxSupression:(id)arg1 iouThreshold:(double)arg2;
- (id)_performCrossClassNMSForDetections:(id)arg1 iouThreshold:(double)arg2;
- (id)_screenEquivalenceToken:(id)arg1;
- (id)clickabilityDetector;
- (id)contentVersionKey;
- (void)evaluate:(id)arg1 metrics:(id)arg2;
- (unsigned long long)maxSupportedFormatVersion;
- (unsigned long long)minSupportedFormatVersion;
- (id)mindNetDetector;
- (id)mlModelClasses;
- (id)mobileAssetType;
- (id)modelResourceNames;
- (long long)remapUIClassForClickability:(int)arg1 andClass:(long long)arg2;

@end
