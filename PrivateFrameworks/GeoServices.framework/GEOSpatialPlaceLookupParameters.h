
@interface GEOSpatialPlaceLookupParameters : NSObject {
    NSArray * _categories;
    struct { 
        double latitude; 
        double longitude; 
    }  _coordinate;
    GEOMapRegion * _mapRegion;
    int  _maxResultCount;
    GEOPOICategoryFilter * _poiCategoryFilter;
    double  _radius;
}

@property (nonatomic, readonly) NSArray *categories;
@property (nonatomic, readonly) struct { double x1; double x2; } coordinate;
@property (nonatomic, readonly) GEOMapRegion *mapRegion;
@property (nonatomic, readonly) int maxResultCount;
@property (nonatomic, readonly) GEOPOICategoryFilter *poiCategoryFilter;
@property (nonatomic, readonly) double radius;

- (void).cxx_destruct;
- (id)categories;
- (struct { double x1; double x2; })coordinate;
- (id)init;
- (id)initWithCoordinate:(struct { double x1; double x2; })arg1 radius:(double)arg2 categories:(id)arg3;
- (id)initWithCoordinate:(struct { double x1; double x2; })arg1 radius:(double)arg2 categories:(id)arg3 maxResultCount:(int)arg4;
- (id)initWithCoordinate:(struct { double x1; double x2; })arg1 radius:(double)arg2 poiCategoryFilter:(id)arg3;
- (id)initWithMapRegion:(id)arg1 poiCategoryFilter:(id)arg2;
- (id)mapRegion;
- (int)maxResultCount;
- (id)poiCategoryFilter;
- (double)radius;

@end
