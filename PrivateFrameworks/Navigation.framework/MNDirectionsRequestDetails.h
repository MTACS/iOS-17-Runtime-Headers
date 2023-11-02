
@interface MNDirectionsRequestDetails : NSObject <NSSecureCoding> {
    GEOCommonOptions * _commonOptions;
    GEOMapRegion * _currentMapRegion;
    GEOLocation * _currentUserLocation;
    GEODirectionsRequestFeedback * _directionsRequestFeedback;
    bool  _isResumingMultipointRoute;
    unsigned long long  _maxRouteCount;
    GEOResumeRouteHandle * _resumeRouteHandle;
    GEORouteAttributes * _routeAttributes;
    NSString * _tracePath;
    GEOMapServiceTraits * _traits;
    NSArray * _waypoints;
}

@property (nonatomic, retain) GEOCommonOptions *commonOptions;
@property (nonatomic, retain) GEOMapRegion *currentMapRegion;
@property (nonatomic, retain) GEOLocation *currentUserLocation;
@property (nonatomic, retain) GEODirectionsRequestFeedback *directionsRequestFeedback;
@property (nonatomic) bool isResumingMultipointRoute;
@property (nonatomic) unsigned long long maxRouteCount;
@property (nonatomic, retain) GEOResumeRouteHandle *resumeRouteHandle;
@property (nonatomic, retain) GEORouteAttributes *routeAttributes;
@property (nonatomic, retain) NSString *tracePath;
@property (nonatomic, retain) GEOMapServiceTraits *traits;
@property (nonatomic, retain) NSArray *waypoints;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)commonOptions;
- (id)currentMapRegion;
- (id)currentUserLocation;
- (id)description;
- (id)directionsRequestFeedback;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithTracePath:(id)arg1;
- (id)initWithWaypoints:(id)arg1 routeAttributes:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isResumingMultipointRoute;
- (unsigned long long)maxRouteCount;
- (id)resumeRouteHandle;
- (id)routeAttributes;
- (void)setCommonOptions:(id)arg1;
- (void)setCurrentMapRegion:(id)arg1;
- (void)setCurrentUserLocation:(id)arg1;
- (void)setDirectionsRequestFeedback:(id)arg1;
- (void)setIsResumingMultipointRoute:(bool)arg1;
- (void)setMaxRouteCount:(unsigned long long)arg1;
- (void)setResumeRouteHandle:(id)arg1;
- (void)setRouteAttributes:(id)arg1;
- (void)setTracePath:(id)arg1;
- (void)setTraits:(id)arg1;
- (void)setWaypoints:(id)arg1;
- (id)tracePath;
- (id)traits;
- (id)waypoints;

@end
