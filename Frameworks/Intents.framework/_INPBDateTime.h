
@interface _INPBDateTime : PBCodable <NSCopying, NSSecureCoding, _INPBDateTime> {
    int  _calendarSystem;
    _INPBLocalDate * _date;
    struct { 
        unsigned int calendarSystem : 1; 
    }  _has;
    _INPBLocalTime * _time;
    NSString * _timeZoneID;
}

@property (nonatomic) int calendarSystem;
@property (nonatomic, retain) _INPBLocalDate *date;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasCalendarSystem;
@property (nonatomic, readonly) bool hasDate;
@property (nonatomic, readonly) bool hasTime;
@property (nonatomic, readonly) bool hasTimeZoneID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) _INPBLocalTime *time;
@property (nonatomic, copy) NSString *timeZoneID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (int)StringAsCalendarSystem:(id)arg1;
- (int)calendarSystem;
- (id)calendarSystemAsString:(int)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasCalendarSystem;
- (bool)hasDate;
- (bool)hasTime;
- (bool)hasTimeZoneID;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCalendarSystem:(int)arg1;
- (void)setDate:(id)arg1;
- (void)setHasCalendarSystem:(bool)arg1;
- (void)setTime:(id)arg1;
- (void)setTimeZoneID:(id)arg1;
- (id)time;
- (id)timeZoneID;
- (void)writeTo:(id)arg1;

@end
