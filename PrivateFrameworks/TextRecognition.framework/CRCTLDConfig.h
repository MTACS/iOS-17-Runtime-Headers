
@interface CRCTLDConfig : NSObject {
    float  _allowedOverlap;
    float  _angleThresholdForRotationCorrection;
    bool  _flatMergeJumps;
    int  _maxQueueCapacity;
    int  _maxRegions;
    float  _minQuadrilateralRotation;
    float  _minSubRectangleSize;
    float  _minWhitespaceHeight;
    float  _minWhitespaceHeightForReadingOrder;
    float  _minWhitespaceWidth;
    int  _numLookupElements;
    int  _numPointsForSegmentsIntersection;
    float  _qualityHeightFactor;
    float  _qualityWidthFactor;
}

@property float allowedOverlap;
@property float angleThresholdForRotationCorrection;
@property bool flatMergeJumps;
@property int maxQueueCapacity;
@property int maxRegions;
@property float minQuadrilateralRotation;
@property float minSubRectangleSize;
@property float minWhitespaceHeight;
@property float minWhitespaceHeightForReadingOrder;
@property float minWhitespaceWidth;
@property int numLookupElements;
@property int numPointsForSegmentsIntersection;
@property float qualityHeightFactor;
@property float qualityWidthFactor;

- (float)allowedOverlap;
- (float)angleThresholdForRotationCorrection;
- (bool)flatMergeJumps;
- (int)maxQueueCapacity;
- (int)maxRegions;
- (float)minQuadrilateralRotation;
- (float)minSubRectangleSize;
- (float)minWhitespaceHeight;
- (float)minWhitespaceHeightForReadingOrder;
- (float)minWhitespaceWidth;
- (int)numLookupElements;
- (int)numPointsForSegmentsIntersection;
- (float)qualityHeightFactor;
- (float)qualityWidthFactor;
- (void)setAllowedOverlap:(float)arg1;
- (void)setAngleThresholdForRotationCorrection:(float)arg1;
- (void)setFlatMergeJumps:(bool)arg1;
- (void)setMaxQueueCapacity:(int)arg1;
- (void)setMaxRegions:(int)arg1;
- (void)setMinQuadrilateralRotation:(float)arg1;
- (void)setMinSubRectangleSize:(float)arg1;
- (void)setMinWhitespaceHeight:(float)arg1;
- (void)setMinWhitespaceHeightForReadingOrder:(float)arg1;
- (void)setMinWhitespaceWidth:(float)arg1;
- (void)setNumLookupElements:(int)arg1;
- (void)setNumPointsForSegmentsIntersection:(int)arg1;
- (void)setQualityHeightFactor:(float)arg1;
- (void)setQualityWidthFactor:(float)arg1;

@end
