
@interface GEOSpatialEventLookupParameters : NSObject {
    NSArray * _categories;
    struct { 
        double latitude; 
        double longitude; 
    }  _coordinate;
    NSDateInterval * _dateInterval;
    int  _maxResultCount;
    double  _radius;
}

@property (nonatomic, readonly) NSArray *categories;
@property (nonatomic, readonly) struct { double x1; double x2; } coordinate;
@property (nonatomic, readonly) NSDateInterval *dateInterval;
@property (nonatomic, readonly) int maxResultCount;
@property (nonatomic, readonly) double radius;

- (void).cxx_destruct;
- (id)categories;
- (struct { double x1; double x2; })coordinate;
- (id)dateInterval;
- (id)init;
- (id)initWithCoordinate:(struct { double x1; double x2; })arg1 radius:(double)arg2 categories:(id)arg3 dateInterval:(id)arg4;
- (id)initWithCoordinate:(struct { double x1; double x2; })arg1 radius:(double)arg2 categories:(id)arg3 dateInterval:(id)arg4 maxResultCount:(int)arg5;
- (int)maxResultCount;
- (double)radius;

@end
