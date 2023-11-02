
@interface HMIObjectDetectionUtils : NSObject

+ (id)convertObjectDetections:(id)arg1 cropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 originalImageSize:(struct CGSize { double x1; double x2; })arg3;
+ (void)nmsMultiClass:(id)arg1 output:(id)arg2 nmsConfiguration:(id)arg3;
+ (void)nonMaximumSuppression:(id)arg1 output:(id)arg2 withThreshold:(double)arg3 withMetric:(long long)arg4;

@end
