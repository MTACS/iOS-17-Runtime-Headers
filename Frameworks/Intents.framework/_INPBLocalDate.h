
@interface _INPBLocalDate : PBCodable <NSCopying, NSSecureCoding, _INPBLocalDate> {
    long long  _dayOfMonth;
    int  _dayOfWeek;
    struct { 
        unsigned int dayOfMonth : 1; 
        unsigned int dayOfWeek : 1; 
        unsigned int month : 1; 
        unsigned int year : 1; 
    }  _has;
    long long  _month;
    long long  _year;
}

@property (nonatomic) long long dayOfMonth;
@property (nonatomic) int dayOfWeek;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasDayOfMonth;
@property (nonatomic) bool hasDayOfWeek;
@property (nonatomic) bool hasMonth;
@property (nonatomic) bool hasYear;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long month;
@property (readonly) Class superclass;
@property (nonatomic) long long year;

+ (bool)supportsSecureCoding;

- (int)StringAsDayOfWeek:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)dayOfMonth;
- (int)dayOfWeek;
- (id)dayOfWeekAsString:(int)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasDayOfMonth;
- (bool)hasDayOfWeek;
- (bool)hasMonth;
- (bool)hasYear;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (long long)month;
- (bool)readFrom:(id)arg1;
- (void)setDayOfMonth:(long long)arg1;
- (void)setDayOfWeek:(int)arg1;
- (void)setHasDayOfMonth:(bool)arg1;
- (void)setHasDayOfWeek:(bool)arg1;
- (void)setHasMonth:(bool)arg1;
- (void)setHasYear:(bool)arg1;
- (void)setMonth:(long long)arg1;
- (void)setYear:(long long)arg1;
- (void)writeTo:(id)arg1;
- (long long)year;

@end
