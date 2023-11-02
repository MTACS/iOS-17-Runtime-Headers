
@interface EKTravelEngineHypothesis : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    NSDate * _aggressiveDepartureDate;
    double  _aggressiveTravelTime;
    NSDate * _conservativeDepartureDate;
    double  _conservativeTravelTime;
    NSDate * _creationDate;
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
@property (nonatomic, readonly, copy) NSDate *creationDate;
@property (nonatomic, readonly) unsigned long long currentTrafficDensity;
@property (nonatomic, readonly) double estimatedTravelTime;
@property (nonatomic, readonly, copy) NSString *routeName;
@property (nonatomic, readonly, copy) NSDate *suggestedDepartureDate;
@property (nonatomic, readonly) bool supportsLiveTraffic;
@property (nonatomic, readonly, copy) NSString *trafficDensityDescription;
@property (nonatomic, readonly) int transportType;
@property (nonatomic, readonly) long long travelState;

+ (bool)supportsSecureCoding;
+ (id)syntheticHypothesisWithStartDate:(id)arg1 conservativeTravelTime:(double)arg2 estimatedTravelTime:(double)arg3 aggressiveTravelTime:(double)arg4;

- (void).cxx_destruct;
- (id)aggressiveDepartureDate;
- (double)aggressiveTravelTime;
- (id)conservativeDepartureDate;
- (double)conservativeTravelTime;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)creationDate;
- (unsigned long long)currentTrafficDensity;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (double)estimatedTravelTime;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithTransportType:(int)arg1 conservativeDepartureDate:(id)arg2 conservativeTravelTime:(double)arg3 suggestedDepartureDate:(id)arg4 estimatedTravelTime:(double)arg5 aggressiveDepartureDate:(id)arg6 aggressiveTravelTime:(double)arg7 routeName:(id)arg8 supportsLiveTraffic:(bool)arg9 currentTrafficDensity:(unsigned long long)arg10 trafficDensityDescription:(id)arg11 travelState:(long long)arg12;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToHypothesis:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)routeName;
- (id)suggestedDepartureDate;
- (bool)supportsLiveTraffic;
- (id)trafficDensityDescription;
- (int)transportType;
- (long long)travelState;

@end
