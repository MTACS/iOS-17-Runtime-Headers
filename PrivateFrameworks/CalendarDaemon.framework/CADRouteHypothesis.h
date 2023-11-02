
@interface CADRouteHypothesis : NSObject <NSSecureCoding> {
    NSDate * _aggressiveDepartureDate;
    double  _aggressiveTravelTime;
    NSDate * _conservativeDepartureDate;
    double  _conservativeTravelTime;
    unsigned long long  _currentTrafficDensity;
    double  _estimatedTravelTime;
    NSString * _routeName;
    NSDate * _suggestedDepartureDate;
    bool  _supportsLiveTraffic;
    NSString * _trafficDensityDescription;
    int  _transportType;
    long long  _travelState;
}

@property (nonatomic, readonly, copy) NSDate *aggressiveDepartureDate;
@property (nonatomic, readonly) double aggressiveTravelTime;
@property (nonatomic, readonly, copy) NSDate *conservativeDepartureDate;
@property (nonatomic, readonly) double conservativeTravelTime;
@property (nonatomic, readonly) unsigned long long currentTrafficDensity;
@property (nonatomic, readonly) double estimatedTravelTime;
@property (nonatomic, readonly, copy) NSString *routeName;
@property (nonatomic, readonly, copy) NSDate *suggestedDepartureDate;
@property (nonatomic, readonly) bool supportsLiveTraffic;
@property (nonatomic, readonly, copy) NSString *trafficDensityDescription;
@property (nonatomic, readonly) int transportType;
@property (nonatomic, readonly) long long travelState;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)aggressiveDepartureDate;
- (double)aggressiveTravelTime;
- (id)conservativeDepartureDate;
- (double)conservativeTravelTime;
- (unsigned long long)currentTrafficDensity;
- (void)encodeWithCoder:(id)arg1;
- (double)estimatedTravelTime;
- (id)initWithCoder:(id)arg1;
- (id)initWithTransportType:(int)arg1 conservativeDepartureDate:(id)arg2 conservativeTravelTime:(double)arg3 suggestedDepartureDate:(id)arg4 estimatedTravelTime:(double)arg5 aggressiveDepartureDate:(id)arg6 aggressiveTravelTime:(double)arg7 routeName:(id)arg8 supportsLiveTraffic:(bool)arg9 currentTrafficDensity:(unsigned long long)arg10 trafficDensityDescription:(id)arg11 travelState:(long long)arg12;
- (id)routeName;
- (id)suggestedDepartureDate;
- (bool)supportsLiveTraffic;
- (id)trafficDensityDescription;
- (int)transportType;
- (long long)travelState;

@end
