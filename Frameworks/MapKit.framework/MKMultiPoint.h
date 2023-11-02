
@interface MKMultiPoint : MKShape <MKGeoJSONObject> {
    struct { 
        struct { 
            double x; 
            double y; 
        } origin; 
        struct { 
            double width; 
            double height; 
        } size; 
    }  _boundingRect;
    struct GEOOnce_s { 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } lock; 
        bool didRun; 
    }  _calculatedMapPointsLength;
    struct GEOOnce_s { 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } lock; 
        bool didRun; 
    }  _calculatedSelfIntersecting;
    double * _elevations;
    double  _mapPointsLength;
    unsigned long long  _pointCount;
    struct { double x1; double x2; } * _points;
    bool  _selfIntersecting;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long pointCount;
@property (readonly) Class superclass;

- (void)_assignPoints:(struct { double x1; double x2; }*)arg1 count:(unsigned long long)arg2;
- (void)_calculateBounds;
- (bool)_determineSelfIntersecting;
- (id)_initWithGeoJSONObject:(id)arg1 error:(id*)arg2;
- (bool)_isSelfIntersecting;
- (double)_mapPointsLength;
- (void)_pointsDidChange;
- (void)_setBounds:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_setCoordinates:(const struct CLLocationCoordinate2D { double x1; double x2; }*)arg1 count:(unsigned long long)arg2;
- (void)_setCoordinates:(const struct CLLocationCoordinate2D { double x1; double x2; }*)arg1 elevations:(const double*)arg2 count:(unsigned long long)arg3;
- (void)_setPoints:(const struct { double x1; double x2; }*)arg1 count:(unsigned long long)arg2;
- (void)_wrapAroundTheDateline:(const struct CLLocationCoordinate2D { double x1; double x2; }*)arg1 elevations:(const double*)arg2 count:(unsigned long long)arg3;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })boundingMapRect;
- (struct CLLocationCoordinate2D { double x1; double x2; })coordinate;
- (void)dealloc;
- (double*)elevations;
- (void)encodeWithCoder:(id)arg1;
- (void)getCoordinates:(struct CLLocationCoordinate2D { double x1; double x2; }*)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)initWithCoder:(id)arg1;
- (bool)intersectsMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)locationAtPointIndex:(unsigned long long)arg1;
- (id)locationsAtPointIndexes:(id)arg1;
- (unsigned long long)pointCount;
- (struct { double x1; double x2; }*)points;

@end
