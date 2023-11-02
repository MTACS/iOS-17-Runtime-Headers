
@interface SAWeatherAbstractObject : SADomainObject

@property (nonatomic, retain) SAWeatherAirQualityObject *airQuality;
@property (nonatomic, retain) SAWeatherCurrentConditions *currentConditions;
@property (nonatomic, copy) NSArray *dailyForecasts;
@property (nonatomic, copy) NSString *extendedForecastUrl;
@property (nonatomic, copy) NSArray *hourlyForecasts;
@property (nonatomic, retain) SAWeatherUnits *units;
@property (nonatomic, retain) SAWeatherLocation *weatherLocation;
@property (nonatomic, copy) NSString *weatherRequest;

+ (id)abstractObject;
+ (id)abstractObjectWithDictionary:(id)arg1 context:(id)arg2;

- (id)airQuality;
- (id)currentConditions;
- (id)dailyForecasts;
- (id)encodedClassName;
- (id)extendedForecastUrl;
- (id)groupIdentifier;
- (id)hourlyForecasts;
- (void)setAirQuality:(id)arg1;
- (void)setCurrentConditions:(id)arg1;
- (void)setDailyForecasts:(id)arg1;
- (void)setExtendedForecastUrl:(id)arg1;
- (void)setHourlyForecasts:(id)arg1;
- (void)setUnits:(id)arg1;
- (void)setWeatherLocation:(id)arg1;
- (void)setWeatherRequest:(id)arg1;
- (id)units;
- (id)weatherLocation;
- (id)weatherRequest;

@end
