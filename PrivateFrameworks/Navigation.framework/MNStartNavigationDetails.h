
@interface MNStartNavigationDetails : NSObject <NSCopying, NSSecureCoding> {
    GEODirectionsRequest * _directionsRequest;
    GEODirectionsResponse * _directionsResponse;
    unsigned long long  _guidanceType;
    MNLocation * _initialUserLocation;
    bool  _isResumingMultipointRoute;
    long long  _navigationType;
    MNStartNavigationReconnectionDetails * _reconnectionDetails;
    NSString * _requestingAppIdentifier;
    GEORouteAttributes * _routeAttributes;
    NSArray * _routes;
    unsigned long long  _selectedRouteIndex;
    long long  _simulationType;
    NSString * _tracePlaybackPath;
    MNTraceRecordingData * _traceRecordingData;
    NSString * _traceRecordingNameOverride;
    NSDictionary * _traffic;
    GEOMapServiceTraits * _traits;
}

@property (nonatomic, retain) GEODirectionsRequest *directionsRequest;
@property (nonatomic, retain) GEODirectionsResponse *directionsResponse;
@property (nonatomic, readonly) NSString *fullDescription;
@property (nonatomic) unsigned long long guidanceType;
@property (nonatomic, retain) MNLocation *initialUserLocation;
@property (nonatomic) bool isReconnecting;
@property (nonatomic) bool isResumingMultipointRoute;
@property (nonatomic) long long navigationType;
@property (nonatomic, retain) MNStartNavigationReconnectionDetails *reconnectionDetails;
@property (nonatomic, copy) NSString *requestingAppIdentifier;
@property (nonatomic, retain) GEORouteAttributes *routeAttributes;
@property (nonatomic, retain) NSArray *routes;
@property (nonatomic) unsigned long long selectedRouteIndex;
@property (nonatomic) long long simulationType;
@property (nonatomic, copy) NSString *tracePlaybackPath;
@property (nonatomic, retain) MNTraceRecordingData *traceRecordingData;
@property (nonatomic, copy) NSString *traceRecordingNameOverride;
@property (nonatomic, retain) NSDictionary *traffic;
@property (nonatomic, copy) GEOMapServiceTraits *traits;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)directionsRequest;
- (id)directionsResponse;
- (void)encodeWithCoder:(id)arg1;
- (id)fullDescription;
- (unsigned long long)guidanceType;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initialUserLocation;
- (bool)isReconnecting;
- (bool)isResumingMultipointRoute;
- (long long)navigationType;
- (id)reconnectionDetails;
- (id)requestingAppIdentifier;
- (id)routeAttributes;
- (id)routes;
- (unsigned long long)selectedRouteIndex;
- (void)setDirectionsRequest:(id)arg1;
- (void)setDirectionsResponse:(id)arg1;
- (void)setGuidanceType:(unsigned long long)arg1;
- (void)setInitialUserLocation:(id)arg1;
- (void)setIsReconnecting:(bool)arg1;
- (void)setIsResumingMultipointRoute:(bool)arg1;
- (void)setNavigationType:(long long)arg1;
- (void)setReconnectionDetails:(id)arg1;
- (void)setRequestingAppIdentifier:(id)arg1;
- (void)setRouteAttributes:(id)arg1;
- (void)setRoutes:(id)arg1;
- (void)setSelectedRouteIndex:(unsigned long long)arg1;
- (void)setSimulationType:(long long)arg1;
- (void)setTracePlaybackPath:(id)arg1;
- (void)setTraceRecordingData:(id)arg1;
- (void)setTraceRecordingNameOverride:(id)arg1;
- (void)setTraffic:(id)arg1;
- (void)setTraits:(id)arg1;
- (long long)simulationType;
- (id)tracePlaybackPath;
- (id)traceRecordingData;
- (id)traceRecordingNameOverride;
- (id)traffic;
- (id)traits;

@end
