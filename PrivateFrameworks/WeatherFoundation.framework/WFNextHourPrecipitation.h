
@interface WFNextHourPrecipitation : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _conditions;
    NSDate * _expirationDate;
    NSArray * _minutes;
    NSArray * _precipitationDescriptions;
    NSDate * _readDate;
    NSDate * _startDate;
}

@property (nonatomic, readonly) NSArray *activeMinutes;
@property (nonatomic, readonly, copy) NSArray *conditions;
@property (nonatomic, readonly) WFNextHourPrecipitationDescription *currentDescription;
@property (nonatomic, readonly, copy) NSDate *expirationDate;
@property (nonatomic, readonly) bool isRelevant;
@property (nonatomic, readonly, copy) NSArray *minutes;
@property (nonatomic, readonly, copy) NSArray *precipitationDescriptions;
@property (nonatomic, readonly, copy) NSDate *readDate;
@property (nonatomic, readonly, copy) NSDate *startDate;

// Image: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)activeMinutes;
- (id)conditions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currentDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)expirationDate;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithReadDate:(id)arg1 startDate:(id)arg2 expirationDate:(id)arg3 minutes:(id)arg4 conditions:(id)arg5 descriptions:(id)arg6;
- (bool)isEqual:(id)arg1;
- (bool)isRelevant;
- (id)minutes;
- (id)precipitationDescriptions;
- (id)readDate;
- (id)startDate;

// Image: /System/Library/PrivateFrameworks/NanoWeatherComplicationsCompanion.framework/NanoWeatherComplicationsCompanion

- (id)conditionsForDate:(id)arg1;
- (bool)isRelevantForDate:(id)arg1;

// Image: /System/Library/PrivateFrameworks/Weather.framework/Weather

- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)arg1;

@end
