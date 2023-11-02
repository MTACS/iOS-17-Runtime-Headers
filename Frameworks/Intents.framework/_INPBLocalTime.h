
@interface _INPBLocalTime : PBCodable <NSCopying, NSSecureCoding, _INPBLocalTime> {
    struct { 
        unsigned int hourOfDay : 1; 
        unsigned int millisOfSecond : 1; 
        unsigned int minuteOfHour : 1; 
        unsigned int secondOfMinute : 1; 
    }  _has;
    long long  _hourOfDay;
    long long  _millisOfSecond;
    long long  _minuteOfHour;
    long long  _secondOfMinute;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasHourOfDay;
@property (nonatomic) bool hasMillisOfSecond;
@property (nonatomic) bool hasMinuteOfHour;
@property (nonatomic) bool hasSecondOfMinute;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long hourOfDay;
@property (nonatomic) long long millisOfSecond;
@property (nonatomic) long long minuteOfHour;
@property (nonatomic) long long secondOfMinute;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasHourOfDay;
- (bool)hasMillisOfSecond;
- (bool)hasMinuteOfHour;
- (bool)hasSecondOfMinute;
- (unsigned long long)hash;
- (long long)hourOfDay;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (long long)millisOfSecond;
- (long long)minuteOfHour;
- (bool)readFrom:(id)arg1;
- (long long)secondOfMinute;
- (void)setHasHourOfDay:(bool)arg1;
- (void)setHasMillisOfSecond:(bool)arg1;
- (void)setHasMinuteOfHour:(bool)arg1;
- (void)setHasSecondOfMinute:(bool)arg1;
- (void)setHourOfDay:(long long)arg1;
- (void)setMillisOfSecond:(long long)arg1;
- (void)setMinuteOfHour:(long long)arg1;
- (void)setSecondOfMinute:(long long)arg1;
- (void)writeTo:(id)arg1;

@end
