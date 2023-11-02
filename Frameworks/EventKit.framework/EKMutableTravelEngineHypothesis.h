
@interface EKMutableTravelEngineHypothesis : EKTravelEngineHypothesis

@property (nonatomic, copy) NSDate *aggressiveDepartureDate;
@property (nonatomic) double aggressiveTravelTime;
@property (nonatomic, copy) NSDate *conservativeDepartureDate;
@property (nonatomic) double conservativeTravelTime;
@property (nonatomic, copy) NSDate *creationDate;
@property (nonatomic) unsigned long long currentTrafficDensity;
@property (nonatomic) double estimatedTravelTime;
@property (nonatomic, copy) NSString *routeName;
@property (nonatomic, copy) NSDate *suggestedDepartureDate;
@property (nonatomic) bool supportsLiveTraffic;
@property (nonatomic, copy) NSString *trafficDensityDescription;
@property (nonatomic) int transportType;
@property (nonatomic) long long travelState;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setAggressiveDepartureDate:(id)arg1;
- (void)setAggressiveTravelTime:(double)arg1;
- (void)setConservativeDepartureDate:(id)arg1;
- (void)setConservativeTravelTime:(double)arg1;
- (void)setCreationDate:(id)arg1;
- (void)setCurrentTrafficDensity:(unsigned long long)arg1;
- (void)setEstimatedTravelTime:(double)arg1;
- (void)setRouteName:(id)arg1;
- (void)setSuggestedDepartureDate:(id)arg1;
- (void)setSupportsLiveTraffic:(bool)arg1;
- (void)setTrafficDensityDescription:(id)arg1;
- (void)setTransportType:(int)arg1;
- (void)setTravelState:(long long)arg1;

@end
