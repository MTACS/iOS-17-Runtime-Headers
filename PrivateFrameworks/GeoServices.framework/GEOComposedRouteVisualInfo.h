
@interface GEOComposedRouteVisualInfo : NSObject <NSSecureCoding> {
    GEOFormattedString * _detail;
    GEOComposedString * _detailString;
    struct { 
        double latitude; 
        double longitude; 
        double altitude; 
    }  _endCoordinate;
    GEOPBTransitArtwork * _icon;
    NSArray * _laneChangeInfos;
    struct GEOPolylineCoordinateRange { 
        struct { 
            unsigned int index; 
            float offset; 
        } start; 
        struct { 
            unsigned int index; 
            float offset; 
        } end; 
    }  _routeCoordinateRange;
    struct { 
        double latitude; 
        double longitude; 
        double altitude; 
    }  _startCoordinate;
    GEOStyleAttributes * _styleAttributes;
    GEOFormattedString * _title;
    GEOComposedString * _titleString;
}

@property (nonatomic, readonly) <GEOServerFormattedString> *detail;
@property (nonatomic, readonly) GEOComposedString *detailString;
@property (nonatomic, readonly) struct { double x1; double x2; double x3; } endCoordinate;
@property (nonatomic, readonly) <GEOTransitArtworkDataSource> *icon;
@property (nonatomic, readonly) NSArray *laneChangeInfos;
@property (nonatomic, readonly) struct GEOPolylineCoordinateRange { struct { unsigned int x_1_1_1; float x_1_1_2; } x1; struct { unsigned int x_2_1_1; float x_2_1_2; } x2; } routeCoordinateRange;
@property (nonatomic, readonly) struct { double x1; double x2; double x3; } startCoordinate;
@property (nonatomic, readonly) GEOStyleAttributes *styleAttributes;
@property (nonatomic, readonly) <GEOServerFormattedString> *title;
@property (nonatomic, readonly) GEOComposedString *titleString;

+ (id)_infosForRouteLineStyleInfos:(id)arg1 pathIndex:(unsigned long long)arg2 coordinates:(id)arg3 updateable:(bool)arg4;
+ (id)cameraInfosForGeoWaypointRoute:(id)arg1 coordinates:(id)arg2 updateable:(bool)arg3;
+ (id)cameraInfosForRoute:(id)arg1 etaRoute:(id)arg2;
+ (bool)supportsSecureCoding;
+ (id)visualInfosForGeoWaypointRoute:(id)arg1 coordinates:(id)arg2 updateable:(bool)arg3;
+ (id)visualInfosForRoute:(id)arg1 etaRoute:(id)arg2;
+ (id)visualInfosForRouteLabelsForGeoWaypointRoute:(id)arg1 coordinates:(id)arg2;

- (void).cxx_destruct;
- (id)description;
- (id)detail;
- (id)detailString;
- (void)encodeWithCoder:(id)arg1;
- (struct { double x1; double x2; double x3; })endCoordinate;
- (id)icon;
- (id)initWithCoder:(id)arg1;
- (id)initWithGeoRouteLineStyleInfo:(id)arg1 pathIndex:(unsigned long long)arg2 coordinates:(id)arg3 distanceOffset:(double)arg4;
- (id)initWithTitle:(id)arg1 detail:(id)arg2 routeCoordinate:(struct { unsigned int x1; float x2; })arg3 locationCoordinate:(struct { double x1; double x2; double x3; })arg4;
- (id)initWithTitle:(id)arg1 routeCoordinateRange:(struct GEOPolylineCoordinateRange { struct { unsigned int x_1_1_1; float x_1_1_2; } x1; struct { unsigned int x_2_1_1; float x_2_1_2; } x2; })arg2;
- (id)laneChangeInfos;
- (struct GEOPolylineCoordinateRange { struct { unsigned int x_1_1_1; float x_1_1_2; } x1; struct { unsigned int x_2_1_1; float x_2_1_2; } x2; })routeCoordinateRange;
- (struct { double x1; double x2; double x3; })startCoordinate;
- (id)styleAttributes;
- (id)title;
- (id)titleString;

@end
