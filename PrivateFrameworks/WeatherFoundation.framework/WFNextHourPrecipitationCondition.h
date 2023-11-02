
@interface WFNextHourPrecipitationCondition : NSObject <NSCopying, NSSecureCoding> {
    double  _intensity;
    double  _probability;
    unsigned long long  _type;
    NSDate * _validUntil;
}

@property (nonatomic, readonly) double intensity;
@property (nonatomic, readonly) double probability;
@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, readonly) NSDate *validUntil;

// Image: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_stringForType:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(id)arg1 intensity:(double)arg2 probability:(double)arg3 validUntil:(id)arg4;
- (double)intensity;
- (double)probability;
- (unsigned long long)type;
- (unsigned long long)typeForString:(id)arg1;
- (id)validUntil;

// Image: /System/Library/PrivateFrameworks/Weather.framework/Weather

- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)arg1;
- (id)stringForType:(unsigned long long)arg1;

@end
