
@interface IPAImageSizePolicy : NSObject <NSCoding>

+ (id)bestFitPolicyInSize:(struct CGSize { double x1; double x2; })arg1;
+ (id)bestFitPolicyInSquare:(double)arg1;
+ (id)bestFitPolicyShortestEdge:(double)arg1;
+ (id)bestFitPolicyThumbnail;
+ (id)bestFitPolicyWithEvenTotalPixelCount:(long long)arg1;
+ (id)bestFitPolicyWithEvenWidthTotalPixelCount:(long long)arg1;
+ (id)bestFitPolicyWithHeight:(double)arg1;
+ (id)bestFitPolicyWithNominalShortSide:(long long)arg1 minLongSide:(long long)arg2 maxLongSide:(long long)arg3;
+ (id)bestFitPolicyWithTotalPixelCount:(long long)arg1;
+ (id)bestFitPolicyWithWidth:(double)arg1;
+ (id)largestPolicyWithPolicies:(id)arg1;
+ (id)originalSizePolicy;
+ (id)scalePolicyWithScale:(double)arg1;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (struct PFIntSize_st { unsigned long long x1; unsigned long long x2; })integralTransformSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)isBestFitPolicy;
- (bool)isOriginalSizePolicy;
- (double)transformScaleForSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })transformSize:(struct CGSize { double x1; double x2; })arg1;

@end
