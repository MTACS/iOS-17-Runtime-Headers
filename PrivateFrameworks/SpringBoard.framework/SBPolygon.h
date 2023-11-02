
@interface SBPolygon : NSObject {
    struct CGPoint { 
        double x; 
        double y; 
    }  _centroid;
    NSMutableArray * _mutablePoints;
    struct CGPoint { 
        double x; 
        double y; 
    }  _weightedCentroid;
    NSMutableArray * _weights;
}

@property (getter=_centroid, setter=_setCentroid:, nonatomic) struct CGPoint { double x1; double x2; } centroid;
@property (nonatomic, readonly) double distanceOfFarthestPointFromCentroid;
@property (getter=_points, setter=_setPoints:, nonatomic, retain) NSMutableArray *mutablePoints;
@property (getter=_perimeter, nonatomic, readonly) double perimeter;
@property (nonatomic, readonly) unsigned long long pointCount;
@property (getter=_weightedCentroid, setter=_setWeightedCentroid:, nonatomic) struct CGPoint { double x1; double x2; } weightedCentroid;
@property (getter=_weights, setter=_setWeights:, nonatomic, retain) NSMutableArray *weights;

+ (struct CGPoint { double x1; double x2; })_pointAtIndex:(unsigned long long)arg1 ofPointArray:(id)arg2;
+ (id)_sortPoints:(id)arg1;

- (void).cxx_destruct;
- (void)_applyTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (double)_baseOrientation;
- (struct CGPoint { double x1; double x2; })_centroid;
- (void)_flipHorizontally;
- (bool)_isLeftHanded;
- (double)_meanFingertipRowAngle;
- (double)_meanRadius;
- (double)_perimeter;
- (struct CGPoint { double x1; double x2; })_pointAtIndex:(unsigned long long)arg1;
- (id)_points;
- (void)_rotate:(double)arg1;
- (void)_scale:(double)arg1;
- (void)_setCentroid:(struct CGPoint { double x1; double x2; })arg1;
- (void)_setPoints:(id)arg1;
- (void)_setWeightedCentroid:(struct CGPoint { double x1; double x2; })arg1;
- (void)_setWeights:(id)arg1;
- (unsigned long long)_thumbIndex;
- (void)_translate:(struct CGPoint { double x1; double x2; })arg1;
- (void)_updateCentroid;
- (void)_updateProperties;
- (void)_updateWeightedCentroid;
- (void)_updateWeights;
- (double)_weightAtIndex:(unsigned long long)arg1;
- (struct CGPoint { double x1; double x2; })_weightedCentroid;
- (id)_weights;
- (id)description;
- (double)distanceOfFarthestPointFromCentroid;
- (void)enumeratePointsUsingBlock:(id /* block */)arg1;
- (id)initWithPoints:(id)arg1;
- (id)initWithPoints:(struct CGPoint { double x1; double x2; }*)arg1 pointCount:(unsigned long long)arg2;
- (bool)isEqual:(id)arg1;
- (unsigned long long)pointCount;
- (id)points;

@end
