
@interface WFNextHourPrecipitationMinute : NSObject <NSCopying, NSSecureCoding> {
    double  _chance;
    NSDate * _date;
    double  _intensity;
    double  _perceivedIntensity;
}

@property (nonatomic, readonly) double chance;
@property (nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly) double intensity;
@property (nonatomic, readonly) double perceivedIntensity;

// Image: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (double)chance;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIntensity:(double)arg1 chance:(double)arg2 perceivedIntensity:(double)arg3 date:(id)arg4;
- (double)intensity;
- (double)perceivedIntensity;

// Image: /System/Library/PrivateFrameworks/Weather.framework/Weather

- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)arg1;

@end
