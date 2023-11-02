
@interface CAMZoomPoint : NSObject {
    CAMZoomPoint * _baseZoomPoint;
    long long  _customLens;
    double  _displayZoomFactor;
    double  _zoomFactor;
}

@property (nonatomic, readonly) NSArray *allZoomPoints;
@property (nonatomic, readonly) CAMZoomPoint *baseZoomPoint;
@property (nonatomic, readonly) long long customLens;
@property (nonatomic, readonly) double displayZoomFactor;
@property (nonatomic, readonly) CAMZoomPoint *fundamentalZoomPoint;
@property (nonatomic, readonly) bool isCustomLens;
@property (nonatomic, readonly) double zoomFactor;

+ (bool)_canExtendFromCustomLens:(long long)arg1 toLens:(long long)arg2 withIntermediateLens:(out long long*)arg3;
+ (id)displayZoomFactorsFromZoomPoints:(id)arg1;
+ (id)significantIndexesInZoomPoints:(id)arg1;
+ (id)zoomFactorsFromZoomPoints:(id)arg1;
+ (id)zoomPointWithCustomLens:(long long)arg1 baseZoomPoint:(id)arg2;
+ (id)zoomPointWithFactor:(double)arg1 displayed:(double)arg2;
+ (id)zoomPointsWithFactors:(id)arg1 displayZoomFactors:(id)arg2;

- (void).cxx_destruct;
- (id)allZoomPoints;
- (id)baseZoomPoint;
- (long long)customLens;
- (id)description;
- (double)displayZoomFactor;
- (id)fundamentalZoomPoint;
- (bool)isCustomLens;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToZoomPoint:(id)arg1;
- (double)zoomFactor;

@end
