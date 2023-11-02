
@interface NTKBezierPathPointModel : NSObject {
    NSDictionary * _horizontalPercentageCache;
    UIBezierPath * _path;
    NSArray * _pathElements;
}

@property (nonatomic, readonly) UIBezierPath *path;

- (void).cxx_destruct;
- (id)_buildHorizontalPercentageCache;
- (double)_computeDistanceBetweenPointA:(struct CGPoint { double x1; double x2; })arg1 andPointB:(struct CGPoint { double x1; double x2; })arg2;
- (struct CGPoint { double x1; double x2; })_computePointOnPathForHorizontalPercentage:(double)arg1;
- (double)_estimatePercentageForEndPadding:(double)arg1;
- (id)initWithPath:(id)arg1;
- (id)path;
- (struct CGPoint { double x1; double x2; })pointOnPathForHorizontalPercentage:(double)arg1;
- (struct CGPoint { double x1; double x2; })pointOnPathForHorizontalPercentage:(double)arg1 withEndPadding:(double)arg2;

@end
