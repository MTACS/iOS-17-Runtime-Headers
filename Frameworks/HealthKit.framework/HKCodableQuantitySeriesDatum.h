
@interface HKCodableQuantitySeriesDatum : PBCodable <NSCopying> {
    float  _duration;
    struct { 
        unsigned int timeInterval : 1; 
        unsigned int value : 1; 
        unsigned int duration : 1; 
    }  _has;
    double  _timeInterval;
    double  _value;
}

@property (nonatomic) float duration;
@property (nonatomic) bool hasDuration;
@property (nonatomic) bool hasTimeInterval;
@property (nonatomic) bool hasValue;
@property (nonatomic) double timeInterval;
@property (nonatomic) double value;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (float)duration;
- (bool)hasDuration;
- (bool)hasTimeInterval;
- (bool)hasValue;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDuration:(float)arg1;
- (void)setHasDuration:(bool)arg1;
- (void)setHasTimeInterval:(bool)arg1;
- (void)setHasValue:(bool)arg1;
- (void)setTimeInterval:(double)arg1;
- (void)setValue:(double)arg1;
- (double)timeInterval;
- (double)value;
- (void)writeTo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

+ (id)datumWithStartTime:(double)arg1 value:(double)arg2 endTime:(double)arg3;
+ (id)datumWithTimestamp:(double)arg1 value:(double)arg2 duration:(float)arg3;
+ (id)datumWithValue:(double)arg1 timeInterval:(double)arg2;

@end
