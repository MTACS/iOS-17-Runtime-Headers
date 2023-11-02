
@interface VKTrafficFeature : NSObject <NSCopying> {
    double  _approachingDistanceInMeters;
    struct PolylineCoordinate { 
        unsigned int index; 
        float offset; 
    }  _approachingRouteOffset;
    unsigned char  _collisionPriority;
    double  _facingAzimuth;
    int  _groupIdentifier;
    unsigned int  _groupItemHorizontalDisplayOrder;
    unsigned int  _groupItemVerticalDisplayOrder;
    float  _maxZoom;
    float  _minZoom;
    struct { 
        double latitude; 
        double longitude; 
        double altitude; 
    }  _position;
    struct optional<gss::RouteLegWhen> { 
        bool _hasValue; 
        union ValueUnion { 
            unsigned char data[1]; 
            unsigned char type; 
        } _value; 
    }  _routeLegWhen;
    struct PolylineCoordinate { 
        unsigned int index; 
        float offset; 
    }  _routeOffset;
    double  _routeOffsetInMeters;
    bool  _shouldUpdateStyle;
    long long  _state;
    long long  _trafficFeatureType;
    NSString * _uniqueIdentifier;
    struct { 
        double x; 
        double y; 
        double z; 
    }  _worldPoint;
}

@property (nonatomic, readonly) struct PolylineCoordinate { unsigned int x1; float x2; } approachingRouteOffset;
@property (nonatomic, readonly) /* Warning: unhandled struct encoding: '{vector<GeoCodecsFeatureStylePair' */ struct  attributes; /* unknown property attribute:  mdm::Allocator>=^{Allocator}}}} */
@property (nonatomic, readonly) unsigned char collisionPriority;
@property (nonatomic, readonly) double facingAzimuth;
@property (nonatomic, readonly) int groupIdentifier;
@property (nonatomic, readonly) unsigned int groupItemHorizontalDisplayOrder;
@property (nonatomic, readonly) unsigned int groupItemVerticalDisplayOrder;
@property (nonatomic, readonly) float maxZoom;
@property (nonatomic, readonly) struct Mercator3<double> { double x1[3]; } mercatorPoint;
@property (nonatomic, readonly) float minZoom;
@property (nonatomic) long long navigationState;
@property (nonatomic, readonly) struct { double x1; double x2; double x3; } position;
@property (nonatomic) struct optional<gss::RouteLegWhen> { bool x1; union ValueUnion { unsigned char x_2_1_1[1]; unsigned char x_2_1_2; } x2; } routeLegWhen;
@property (nonatomic, readonly) struct PolylineCoordinate { unsigned int x1; float x2; } routeOffset;
@property (nonatomic, readonly) double routeOffsetInMeters;
@property (nonatomic) bool shouldUpdateStyle;
@property (nonatomic, readonly) GEOFeatureStyleAttributes *styleAttributes;
@property (nonatomic, readonly) long long trafficFeatureType;
@property (nonatomic, readonly) NSString *uniqueIdentifier;

+ (id)newTrafficFeatureForEnrouteNotice:(id)arg1 onRoute:(id)arg2;
+ (id)stringForFeatureType:(long long)arg1;
+ (id)stringForNavState:(long long)arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct PolylineCoordinate { unsigned int x1; float x2; })approachingRouteOffset;
- (struct vector<GeoCodecsFeatureStylePair, geo::StdAllocator<GeoCodecsFeatureStylePair, mdm::Allocator>> { struct GeoCodecsFeatureStylePair {} *x1; struct GeoCodecsFeatureStylePair {} *x2; struct __compressed_pair<GeoCodecsFeatureStylePair *, geo::StdAllocator<GeoCodecsFeatureStylePair, mdm::Allocator>> { struct GeoCodecsFeatureStylePair {} *x_3_1_1; struct StdAllocator<GeoCodecsFeatureStylePair, mdm::Allocator> { struct Allocator {} *x_2_2_1; } x_3_1_2; } x3; })attributes;
- (unsigned char)collisionPriority;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)facingAzimuth;
- (int)groupIdentifier;
- (unsigned int)groupItemHorizontalDisplayOrder;
- (unsigned int)groupItemVerticalDisplayOrder;
- (id)initWithEnrouteNotice:(id)arg1 onRoute:(id)arg2;
- (id)initWithFeatureType:(long long)arg1 uniqueIdentifier:(id)arg2 position:(struct { double x1; double x2; double x3; })arg3 direction:(double)arg4 routeOffset:(struct PolylineCoordinate { unsigned int x1; float x2; })arg5 routeOffsetInMeters:(double)arg6;
- (id)initWithFeatureType:(long long)arg1 uniqueIdentifier:(id)arg2 position:(struct { double x1; double x2; double x3; })arg3 onRoute:(id)arg4;
- (id)initWithFeatureType:(long long)arg1 uniqueIdentifier:(id)arg2 routeOffset:(struct PolylineCoordinate { unsigned int x1; float x2; })arg3 onRoute:(id)arg4;
- (bool)isAheadButNotApproaching;
- (bool)isApproaching;
- (bool)isBehind;
- (bool)isCamera;
- (bool)isEqual:(id)arg1;
- (bool)isGrouped;
- (bool)isIncident;
- (bool)isRouteAnnotation;
- (bool)isSignal;
- (bool)isUserReportedIncident;
- (float)maxZoom;
- (struct Mercator3<double> { double x1[3]; })mercatorPoint;
- (float)minZoom;
- (long long)navigationState;
- (void)populateDebugNode:(void*)arg1;
- (struct { double x1; double x2; double x3; })position;
- (struct optional<gss::RouteLegWhen> { bool x1; union ValueUnion { unsigned char x_2_1_1[1]; unsigned char x_2_1_2; } x2; })routeLegWhen;
- (struct PolylineCoordinate { unsigned int x1; float x2; })routeOffset;
- (double)routeOffsetInMeters;
- (void)setNavigationState:(long long)arg1;
- (void)setRouteLegWhen:(struct optional<gss::RouteLegWhen> { bool x1; union ValueUnion { unsigned char x_2_1_1[1]; unsigned char x_2_1_2; } x2; })arg1;
- (void)setShouldUpdateStyle:(bool)arg1;
- (bool)shouldUpdateStyle;
- (id)styleAttributes;
- (long long)trafficFeatureType;
- (id)uniqueIdentifier;
- (void)updateNavigationStateForRouteUserOffset:(const struct PolylineCoordinate { unsigned int x1; float x2; }*)arg1;

@end
