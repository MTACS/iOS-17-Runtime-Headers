
@interface GEOComposedETARoute : NSObject <NSSecureCoding, _GEORouteHypothesisMonitorETAProvider> {
    NSUUID * _etauResponseID;
    GEOETATrafficUpdateWaypointRoute * _geoETAWaypointRoute;
    bool  _hasValidTravelDurations;
    double  _historicTravelDuration;
    NSArray * _legs;
    double  _length;
    NSDate * _serverDisplayETA;
    struct { 
        unsigned int index; 
        float offset; 
    }  _startRouteCoordinate;
    unsigned long long  _startingStepIndex;
    double  _travelDuration;
    double  _travelDurationAggressiveEstimate;
    double  _travelDurationConservativeEstimate;
    NSUUID * _uniqueRouteID;
}

@property (nonatomic, readonly) double _hypothesis_travelDuration;
@property (nonatomic, readonly) double _hypothesis_travelDurationAggressiveEstimate;
@property (nonatomic, readonly) double _hypothesis_travelDurationConservativeEstimate;
@property (nonatomic, readonly) NSUUID *etauResponseID;
@property (nonatomic, readonly) bool hasValidTravelDurations;
@property (nonatomic, readonly) double historicTravelDuration;
@property (nonatomic, readonly) NSArray *legs;
@property (nonatomic, readonly) double length;
@property (nonatomic, readonly) NSDate *serverDisplayETA;
@property (nonatomic, readonly) struct { unsigned int x1; float x2; } startRouteCoordinate;
@property (nonatomic, readonly) double travelDuration;
@property (nonatomic, readonly) double travelDurationAggressiveEstimate;
@property (nonatomic, readonly) double travelDurationConservativeEstimate;
@property (nonatomic, readonly) NSUUID *uniqueRouteID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (double)_hypothesis_travelDuration;
- (double)_hypothesis_travelDurationAggressiveEstimate;
- (double)_hypothesis_travelDurationConservativeEstimate;
- (double)_hypothesis_travelDurationFromStep:(id)arg1 stepRemainingDistance:(double)arg2;
- (double)_travelDurationFromStepID:(unsigned long long)arg1 toStepID:(unsigned long long)arg2 currentStepRemainingDistance:(double)arg3;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)etauResponseID;
- (id)evChargingStationInfos;
- (id)evStepInfos;
- (id)geoETAWaypointRoute;
- (id)geoTrafficBannerTexts;
- (bool)hasValidTravelDurations;
- (double)historicTravelDuration;
- (id)initWithCoder:(id)arg1;
- (id)initWithRouteForTesting:(id)arg1;
- (void)invalidateServerDisplayETA;
- (id)legs;
- (double)length;
- (id)navigabilityInfo;
- (bool)prepareForRequest:(id)arg1 route:(id)arg2 routeMatch:(id)arg3 targetLegIndex:(unsigned long long)arg4 state:(int)arg5;
- (id)serverDisplayETA;
- (struct { unsigned int x1; float x2; })startRouteCoordinate;
- (double)travelDuration;
- (double)travelDurationAggressiveEstimate;
- (double)travelDurationConservativeEstimate;
- (double)travelDurationToEndOfLegFromStepID:(unsigned long long)arg1 currentStepRemainingDistance:(double)arg2;
- (double)travelDurationToEndOfRouteFromStepID:(unsigned long long)arg1 currentStepRemainingDistance:(double)arg2;
- (id)uniqueRouteID;
- (bool)updateForResponse:(id)arg1 route:(id)arg2;

@end
