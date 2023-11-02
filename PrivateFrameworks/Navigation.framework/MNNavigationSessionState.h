
@interface MNNavigationSessionState : NSObject <NSCopying> {
    NSArray * _alternateRouteInfos;
    long long  _arrivalState;
    GEOApplicationAuditToken * _auditToken;
    MNActiveRouteInfo * _currentRouteInfo;
    GEOComposedWaypoint * _currentWaypoint;
    MNLocation * _location;
    NSString * _requestingAppIdentifier;
    unsigned long long  _targetLegIndex;
    GEOMapServiceTraits * _traits;
}

@property (nonatomic, copy) NSArray *alternateRouteInfos;
@property (nonatomic) long long arrivalState;
@property (nonatomic, retain) GEOApplicationAuditToken *auditToken;
@property (nonatomic, retain) MNActiveRouteInfo *currentRouteInfo;
@property (nonatomic, retain) GEOComposedWaypoint *currentWaypoint;
@property (nonatomic, readonly) bool isOnLastLeg;
@property (nonatomic, retain) MNLocation *location;
@property (nonatomic, retain) NSString *requestingAppIdentifier;
@property (nonatomic, readonly) GEOComposedRouteLeg *targetLeg;
@property (nonatomic) unsigned long long targetLegIndex;
@property (nonatomic, retain) GEOMapServiceTraits *traits;

- (void).cxx_destruct;
- (id)_locationStateAsString:(unsigned long long)arg1;
- (id)alternateRouteInfos;
- (long long)arrivalState;
- (id)auditToken;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currentRouteInfo;
- (id)currentWaypoint;
- (id)description;
- (id)initWithLocation:(id)arg1 currentRouteInfo:(id)arg2 alternateRouteInfos:(id)arg3 targetLegIndex:(unsigned long long)arg4;
- (bool)isOnLastLeg;
- (id)location;
- (id)requestingAppIdentifier;
- (void)setAlternateRouteInfos:(id)arg1;
- (void)setArrivalState:(long long)arg1;
- (void)setAuditToken:(id)arg1;
- (void)setCurrentRouteInfo:(id)arg1;
- (void)setCurrentWaypoint:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setRequestingAppIdentifier:(id)arg1;
- (void)setTargetLegIndex:(unsigned long long)arg1;
- (void)setTraits:(id)arg1;
- (id)targetLeg;
- (unsigned long long)targetLegIndex;
- (id)traits;

@end
