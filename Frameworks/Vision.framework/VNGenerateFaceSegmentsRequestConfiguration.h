
@interface VNGenerateFaceSegmentsRequestConfiguration : VNImageBasedRequestConfiguration {
    float  _faceBoundingBoxExpansionRatio;
}

@property (nonatomic) float faceBoundingBoxExpansionRatio;

+ (float)beginRangeFaceBoundingBoxExpansionRatio;
+ (float)defaultFaceBoundingBoxExpansionRatio;
+ (float)endRangeFaceBoundingBoxExpansionRatio;
+ (bool)expansionRatioWithinValidRange:(float)arg1;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (float)faceBoundingBoxExpansionRatio;
- (id)initWithRequestClass:(Class)arg1;
- (void)setFaceBoundingBoxExpansionRatio:(float)arg1;

@end
