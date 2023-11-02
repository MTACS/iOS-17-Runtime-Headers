
@interface TBCentroidCalculator : NSObject {
    NSMutableArray * _points;
}

@property (nonatomic, retain) NSMutableArray *points;

- (void).cxx_destruct;
- (bool)_validLatitudeValue:(double)arg1;
- (bool)_validLongitudeValue:(double)arg1;
- (void)addLatitude:(double)arg1 longitude:(double)arg2;
- (struct CLLocationCoordinate2D { double x1; double x2; })centroid;
- (id)points;
- (void)setPoints:(id)arg1;

@end
