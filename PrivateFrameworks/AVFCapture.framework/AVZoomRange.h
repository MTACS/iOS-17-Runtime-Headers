
@interface AVZoomRange : NSObject {
    double  _maxZoomFactor;
    double  _minZoomFactor;
}

@property (nonatomic, readonly) double maxZoomFactor;
@property (nonatomic, readonly) double minZoomFactor;

+ (id)zoomRangeWithMinZoomFactor:(double)arg1 maxZoomFactor:(double)arg2;

- (bool)containsZoomFactor:(double)arg1;
- (id)description;
- (id)initWithMinZoomFactor:(double)arg1 maxZoomFactor:(double)arg2;
- (bool)isEqual:(id)arg1;
- (double)maxZoomFactor;
- (double)minZoomFactor;

@end
