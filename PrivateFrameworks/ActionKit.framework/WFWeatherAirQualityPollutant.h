
@interface WFWeatherAirQualityPollutant : NSObject <NSCopying, NSSecureCoding, WFNaming> {
    NSMeasurement * _concentration;
    NSString * _localizedDescription;
    NSString * _localizedName;
}

@property (nonatomic, readonly, copy) NSMeasurement *concentration;
@property (nonatomic, readonly, copy) NSString *localizedDescription;
@property (nonatomic, readonly, copy) NSString *localizedName;
@property (nonatomic, readonly, copy) NSString *wfName;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)concentration;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocalizedName:(id)arg1 localizedDescription:(id)arg2 concentration:(id)arg3;
- (id)localizedDescription;
- (id)localizedName;
- (id)wfName;

@end
