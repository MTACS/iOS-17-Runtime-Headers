
@interface CRTextFeatureOrderV1 : NSObject <CRTextFeatureOrdering> {
    double  _angleThresholdForRotatedCrops;
}

@property double angleThresholdForRotatedCrops;

+ (id)_sortedTextRegions:(id)arg1;

- (double)angleThresholdForRotatedCrops;
- (id)initWithAngleThresholdForRotatedCrops:(double)arg1;
- (id)orderAndGroupRegions:(id)arg1;
- (void)setAngleThresholdForRotatedCrops:(double)arg1;

@end
