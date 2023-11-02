
@interface GEOComposedRouteLeg : NSObject <NSSecureCoding> {
    GEOArrivalParameters * _arrivalParameters;
    GEOComposedWaypoint * _destination;
    GEOComposedString * _destinationListInstruction;
    NSArray * _destinationListSecondaryInstructions;
    double  _distance;
    int  _drivingSide;
    GEOWaypointInfo * _geoDestinationWaypointInfo;
    GEOWaypointInfo * _geoOriginWaypointInfo;
    unsigned long long  _legIndex;
    GEOComposedWaypoint * _origin;
    GEOComposedString * _originListInstruction;
    NSArray * _originListSecondaryInstructions;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _pointRange;
    GEOComposedRoute * _route;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _segmentRange;
    NSData * _serverLegIDForAnalytics;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _stepRange;
}

@property (nonatomic, readonly) GEOArrivalParameters *arrivalParameters;
@property (nonatomic, readonly) double chargingDuration;
@property (nonatomic, readonly) GEOComposedRouteEVChargingStationInfo *chargingStationInfo;
@property (nonatomic, readonly) GEOComposedWaypoint *destination;
@property (nonatomic, readonly) GEOComposedWaypointDisplayInfo *destinationDisplayInfo;
@property (nonatomic, readonly) GEOComposedString *destinationListInstruction;
@property (nonatomic, readonly) NSString *destinationListInstructionString;
@property (nonatomic, readonly) NSArray *destinationListSecondaryInstructions;
@property (nonatomic) double distance;
@property (nonatomic, readonly) int drivingSide;
@property (nonatomic, readonly) unsigned int endPointIndex;
@property (nonatomic, readonly) struct { unsigned int x1; float x2; } endRouteCoordinate;
@property (nonatomic, readonly) unsigned long long endStepIndex;
@property (nonatomic, readonly) GEOWaypointInfo *geoDestinationWaypointInfo;
@property (nonatomic, readonly) GEOWaypointInfo *geoOriginWaypointInfo;
@property (nonatomic, readonly) unsigned long long legIndex;
@property (nonatomic, readonly) GEOComposedWaypoint *origin;
@property (nonatomic, readonly) GEOComposedWaypointDisplayInfo *originDisplayInfo;
@property (nonatomic, readonly) GEOComposedString *originListInstruction;
@property (nonatomic, readonly) NSString *originListInstructionString;
@property (nonatomic, readonly) NSArray *originListSecondaryInstructions;
@property (nonatomic, readonly) unsigned long long pointCount;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } pointRange;
@property (nonatomic) GEOComposedRoute *route;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } segmentRange;
@property (nonatomic, readonly) NSArray *segments;
@property (nonatomic, retain) NSData *serverLegIDForAnalytics;
@property (nonatomic, readonly) unsigned int startPointIndex;
@property (nonatomic, readonly) struct { unsigned int x1; float x2; } startRouteCoordinate;
@property (nonatomic, readonly) unsigned long long startStepIndex;
@property (nonatomic, readonly) unsigned long long stepCount;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } stepRange;
@property (nonatomic, readonly) double travelDuration;

// Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)arrivalParameters;
- (double)chargingDuration;
- (id)chargingStationInfo;
- (id)description;
- (id)destination;
- (id)destinationDisplayInfo;
- (id)destinationListInstruction;
- (id)destinationListSecondaryInstructions;
- (double)distance;
- (int)drivingSide;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)endPointIndex;
- (struct { unsigned int x1; float x2; })endRouteCoordinate;
- (unsigned long long)endStepIndex;
- (id)geoDestinationWaypointInfo;
- (id)geoOriginWaypointInfo;
- (id)initWithCoder:(id)arg1;
- (id)initWithComposedRoute:(id)arg1 geoRouteLeg:(id)arg2 legIndex:(unsigned long long)arg3 origin:(id)arg4 destination:(id)arg5 arrivalParameters:(id)arg6;
- (id)initWithComposedRoute:(id)arg1 legIndex:(unsigned long long)arg2 origin:(id)arg3 destination:(id)arg4 arrivalParameters:(id)arg5;
- (unsigned long long)legIndex;
- (id)origin;
- (id)originDisplayInfo;
- (id)originListInstruction;
- (id)originListSecondaryInstructions;
- (unsigned long long)pointCount;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })pointRange;
- (id)route;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })segmentRange;
- (id)segments;
- (id)serverLegIDForAnalytics;
- (void)setDistance:(double)arg1;
- (void)setPointRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setRoute:(id)arg1;
- (void)setSegmentRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setServerLegIDForAnalytics:(id)arg1;
- (void)setStepRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (unsigned int)startPointIndex;
- (struct { unsigned int x1; float x2; })startRouteCoordinate;
- (unsigned long long)startStepIndex;
- (unsigned long long)stepCount;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })stepRange;
- (double)travelDuration;

// Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation

- (id)destinationListInstructionString;
- (id)originListInstructionString;
- (id)waypointSubstitutedComposedStringForString:(id)arg1 waypoint:(id)arg2 useWaypointAddress:(bool)arg3;

@end
