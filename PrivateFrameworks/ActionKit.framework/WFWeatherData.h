
@interface WFWeatherData : NSObject <NSCopying, NSSecureCoding, WFNaming> {
    NSDate * _date;
    NSMeasurement * _dewpoint;
    NSMeasurement * _feelsLikeTemperature;
    NSMeasurement * _highTemperature;
    NSNumber * _humidity;
    NSString * _localizedAirQualityCategory;
    NSNumber * _localizedAirQualityIndex;
    NSString * _localizedConditionString;
    CLLocation * _location;
    NSMeasurement * _lowTemperature;
    NSArray * _pollutants;
    NSMeasurement * _precipitationAmount;
    NSNumber * _precipitationChance;
    NSMeasurement * _pressure;
    NSDate * _sunriseTime;
    NSDate * _sunsetTime;
    NSMeasurement * _temperature;
    NSNumber * _uvIndex;
    NSMeasurement * _visibility;
    NSNumber * _windDirection;
    NSMeasurement * _windSpeed;
}

@property (nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly) NSMeasurement *dewpoint;
@property (nonatomic, readonly) NSMeasurement *feelsLikeTemperature;
@property (nonatomic, readonly) NSMeasurement *highTemperature;
@property (nonatomic, readonly, copy) NSNumber *humidity;
@property (nonatomic, readonly, copy) NSString *localizedAirQualityCategory;
@property (nonatomic, readonly, copy) NSNumber *localizedAirQualityIndex;
@property (nonatomic, readonly) NSString *localizedConditionString;
@property (nonatomic, readonly, copy) CLLocation *location;
@property (nonatomic, readonly) NSMeasurement *lowTemperature;
@property (nonatomic, readonly, copy) NSArray *pollutants;
@property (nonatomic, readonly) NSMeasurement *precipitationAmount;
@property (nonatomic, readonly, copy) NSNumber *precipitationChance;
@property (nonatomic, readonly) NSMeasurement *pressure;
@property (nonatomic, readonly, copy) NSDate *sunriseTime;
@property (nonatomic, readonly, copy) NSDate *sunsetTime;
@property (nonatomic, readonly) NSMeasurement *temperature;
@property (nonatomic, readonly, copy) NSNumber *uvIndex;
@property (nonatomic, readonly) NSMeasurement *visibility;
@property (nonatomic, readonly, copy) NSString *wfName;
@property (nonatomic, readonly, copy) NSNumber *windDirection;
@property (nonatomic, readonly) NSMeasurement *windSpeed;

+ (id)precipitationAmountUnit;
+ (id)pressureUnit;
+ (bool)supportsSecureCoding;
+ (id)userTemperatureUnitString:(id)arg1;
+ (id)visibilityUnit;
+ (id)windSpeedUnit;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (id)dewpoint;
- (void)encodeWithCoder:(id)arg1;
- (id)feelsLikeTemperature;
- (id)highTemperature;
- (id)humidity;
- (id)initWithCoder:(id)arg1;
- (id)initWithDate:(id)arg1 location:(id)arg2 userTemperatureUnitString:(id)arg3 temperature:(id)arg4 highTemperature:(id)arg5 lowTemperature:(id)arg6 feelsLikeTemperature:(id)arg7 localizedConditionString:(id)arg8 visibility:(id)arg9 dewpoint:(id)arg10 humidity:(id)arg11 pressure:(id)arg12 precipitationAmount:(id)arg13 precipitationChance:(id)arg14 windSpeed:(id)arg15 windDirection:(id)arg16 uvIndex:(id)arg17 sunriseTime:(id)arg18 sunsetTime:(id)arg19 localizedAirQualityIndex:(id)arg20 localizedAirQualityCategory:(id)arg21 pollutants:(id)arg22;
- (id)localizedAirQualityCategory;
- (id)localizedAirQualityIndex;
- (id)localizedConditionString;
- (id)location;
- (id)lowTemperature;
- (id)pollutants;
- (id)precipitationAmount;
- (id)precipitationChance;
- (id)pressure;
- (id)sunriseTime;
- (id)sunsetTime;
- (id)temperature;
- (id)temperatureString;
- (id)uvIndex;
- (id)visibility;
- (id)wfName;
- (id)windDirection;
- (id)windSpeed;

@end
