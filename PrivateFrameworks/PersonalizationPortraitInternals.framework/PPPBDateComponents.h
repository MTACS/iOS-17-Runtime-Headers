
@interface PPPBDateComponents : PBCodable <NSCopying> {
    NSString * _calendarIdentifier;
    int  _day;
    struct { 
        unsigned int day : 1; 
        unsigned int month : 1; 
        unsigned int year : 1; 
    }  _has;
    int  _month;
    NSString * _timeZoneName;
    int  _year;
}

@property (nonatomic, retain) NSString *calendarIdentifier;
@property (nonatomic) int day;
@property (nonatomic, readonly) bool hasCalendarIdentifier;
@property (nonatomic) bool hasDay;
@property (nonatomic) bool hasMonth;
@property (nonatomic, readonly) bool hasTimeZoneName;
@property (nonatomic) bool hasYear;
@property (nonatomic) int month;
@property (nonatomic, retain) NSString *timeZoneName;
@property (nonatomic) int year;

- (void).cxx_destruct;
- (id)calendarIdentifier;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)day;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCalendarIdentifier;
- (bool)hasDay;
- (bool)hasMonth;
- (bool)hasTimeZoneName;
- (bool)hasYear;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)month;
- (bool)readFrom:(id)arg1;
- (void)setCalendarIdentifier:(id)arg1;
- (void)setDay:(int)arg1;
- (void)setHasDay:(bool)arg1;
- (void)setHasMonth:(bool)arg1;
- (void)setHasYear:(bool)arg1;
- (void)setMonth:(int)arg1;
- (void)setTimeZoneName:(id)arg1;
- (void)setYear:(int)arg1;
- (id)timeZoneName;
- (void)writeTo:(id)arg1;
- (int)year;

@end
