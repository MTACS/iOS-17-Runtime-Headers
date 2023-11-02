
@interface MKDirectionsRequest : NSObject <NSCopying> {
    NSArray * _additionalTransportTypesRequested;
    NSDate * _arrivalDate;
    GEOAutomobileOptions * _automobileOptions;
    GEOCyclingOptions * _cyclingOptions;
    NSDate * _departureDate;
    MKMapItem * _destination;
    long long  _highwayPreference;
    bool  _includeDistanceInETA;
    bool  _includeRoutePoints;
    bool  _includeTrafficIncidents;
    bool  _includeTravelTimes;
    bool  _requestsAlternateRoutes;
    bool  _resolveExtraAutomobileOptions;
    MKMapItem * _source;
    long long  _tollPreference;
    GEOTransitOptions * _transitOptions;
    unsigned long long  _transportType;
    bool  _useBackgroundURL;
    GEOWalkingOptions * _walkingOptions;
}

@property (nonatomic, readonly) bool _includeRoutePoints;
@property (nonatomic, readonly) bool _includeTrafficIncidents;
@property (nonatomic, readonly) bool _includeTravelTimes;
@property (nonatomic, readonly) bool _resolveExtraAutomobileOptions;
@property (getter=_additionalTransportTypesRequested, setter=_setAdditionalTransportTypesRequested:, nonatomic, retain) NSArray *additionalTransportTypesRequested;
@property (getter=_automobileOptions, setter=_setAutomobileOptions:, nonatomic, retain) GEOAutomobileOptions *automobileOptions;
@property (getter=_cyclingOptions, setter=_setCyclingOptions:, nonatomic, retain) GEOCyclingOptions *cyclingOptions;
@property (nonatomic, retain) MKMapItem *destination;
@property (getter=_includeDistanceInETA, setter=_setIncludeDistanceInETA:, nonatomic) bool includeDistanceInETA;
@property (nonatomic, retain) MKMapItem *source;
@property (getter=_transitOptions, setter=_setTransitOptions:, nonatomic, retain) GEOTransitOptions *transitOptions;
@property (getter=_useBackgroundURL, setter=_setUseBackgroundURL:, nonatomic) bool useBackgroundURL;
@property (getter=_walkingOptions, setter=_setWalkingOptions:, nonatomic, retain) GEOWalkingOptions *walkingOptions;

+ (bool)isDirectionsRequestURL:(id)arg1;

- (void).cxx_destruct;
- (id)_additionalTransportTypesRequested;
- (id)_arrivalDate;
- (id)_automobileOptions;
- (id)_cyclingOptions;
- (id)_departureDate;
- (bool)_includeDistanceInETA;
- (bool)_includeRoutePoints;
- (bool)_includeTrafficIncidents;
- (bool)_includeTravelTimes;
- (id)_mapkit_initWithDictionaryRepresentation:(id)arg1;
- (id)_mapkit_initWithSource:(id)arg1 destination:(id)arg2 transportType:(unsigned long long)arg3 arrivalDate:(id)arg4;
- (id)_mapkit_initWithSource:(id)arg1 destination:(id)arg2 transportType:(unsigned long long)arg3 departureDate:(id)arg4 includeTravelTimes:(bool)arg5 includeTrafficIncidents:(bool)arg6 includeRoutePoints:(bool)arg7 resolveExtraAutomobileOptions:(bool)arg8;
- (bool)_resolveExtraAutomobileOptions;
- (void)_setAdditionalTransportTypesRequested:(id)arg1;
- (void)_setAutomobileOptions:(id)arg1;
- (void)_setCyclingOptions:(id)arg1;
- (void)_setIncludeDistanceInETA:(bool)arg1;
- (void)_setTransitOptions:(id)arg1;
- (void)_setUseBackgroundURL:(bool)arg1;
- (void)_setWalkingOptions:(id)arg1;
- (id)_transitOptions;
- (unsigned long long)_transportType;
- (bool)_useBackgroundURL;
- (id)_walkingOptions;
- (id)arrivalDate;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)departureDate;
- (id)description;
- (id)destination;
- (id)dictionaryRepresentation;
- (long long)highwayPreference;
- (id)init;
- (id)initWithContentsOfURL:(id)arg1;
- (bool)requestsAlternateRoutes;
- (void)setArrivalDate:(id)arg1;
- (void)setDepartureDate:(id)arg1;
- (void)setDestination:(id)arg1;
- (void)setHighwayPreference:(long long)arg1;
- (void)setRequestsAlternateRoutes:(bool)arg1;
- (void)setSource:(id)arg1;
- (void)setTollPreference:(long long)arg1;
- (void)setTransportType:(unsigned long long)arg1;
- (id)source;
- (long long)tollPreference;
- (unsigned long long)transportType;
- (bool)writeToURL:(id)arg1 error:(id*)arg2;

@end
