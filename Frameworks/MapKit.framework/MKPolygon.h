
@interface MKPolygon : MKMultiPoint <MKGeoJSONObject, MKOverlay, NSSecureCoding> {
    struct CLLocationCoordinate2D { 
        double latitude; 
        double longitude; 
    }  _centroid;
    struct GEOOnce_s { 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } lock; 
        bool didRun; 
    }  _determinedSimple;
    NSArray * _interiorPolygons;
    bool  _isDefinitelyConvex;
    bool  _simple;
}

@property (nonatomic) bool _isDefinitelyConvex;
@property (nonatomic, readonly) struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; } boundingMapRect;
@property (nonatomic, readonly) struct CLLocationCoordinate2D { double x1; double x2; } coordinate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSArray *interiorPolygons;
@property (getter=_isSimple, nonatomic, readonly) bool simple;
@property (nonatomic, readonly, copy) NSString *subtitle;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *title;

+ (id)_polygonWithMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
+ (id)polygonEnclosingMapPoints:(struct { double x1; double x2; }*)arg1 count:(unsigned long long)arg2;
+ (id)polygonWithCoordinates:(const struct CLLocationCoordinate2D { double x1; double x2; }*)arg1 count:(unsigned long long)arg2;
+ (id)polygonWithCoordinates:(const struct CLLocationCoordinate2D { double x1; double x2; }*)arg1 count:(unsigned long long)arg2 interiorPolygons:(id)arg3;
+ (id)polygonWithPoints:(const struct { double x1; double x2; }*)arg1 count:(unsigned long long)arg2;
+ (id)polygonWithPoints:(const struct { double x1; double x2; }*)arg1 count:(unsigned long long)arg2 interiorPolygons:(id)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_calculateBounds;
- (bool)_determineSelfIntersecting;
- (void)_determineSimple;
- (id)_initWithGeoJSONCoordinateArrays:(id)arg1 error:(id*)arg2;
- (id)_initWithGeoJSONObject:(id)arg1 error:(id*)arg2;
- (id)_initWithPointsNoCopy:(struct { double x1; double x2; }*)arg1 count:(unsigned long long)arg2 interiorPolygons:(id)arg3;
- (bool)_isDefinitelyConvex;
- (bool)_isSimple;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })boundingMapRect;
- (struct CLLocationCoordinate2D { double x1; double x2; })coordinate;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)interiorPolygons;
- (bool)intersectsMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)set_isDefinitelyConvex:(bool)arg1;

@end
