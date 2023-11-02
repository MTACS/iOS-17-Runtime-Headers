
@interface ASCodableCloudKitDateComponents : PBCodable <NSCopying> {
    long long  _day;
    long long  _era;
    struct { 
        unsigned int day : 1; 
        unsigned int era : 1; 
        unsigned int hour : 1; 
        unsigned int month : 1; 
        unsigned int year : 1; 
    }  _has;
    long long  _hour;
    long long  _month;
    long long  _year;
}

@property (nonatomic) long long day;
@property (nonatomic) long long era;
@property (nonatomic) bool hasDay;
@property (nonatomic) bool hasEra;
@property (nonatomic) bool hasHour;
@property (nonatomic) bool hasMonth;
@property (nonatomic) bool hasYear;
@property (nonatomic) long long hour;
@property (nonatomic) long long month;
@property (nonatomic) long long year;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)day;
- (id)description;
- (id)dictionaryRepresentation;
- (long long)era;
- (bool)hasDay;
- (bool)hasEra;
- (bool)hasHour;
- (bool)hasMonth;
- (bool)hasYear;
- (unsigned long long)hash;
- (long long)hour;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (long long)month;
- (bool)readFrom:(id)arg1;
- (void)setDay:(long long)arg1;
- (void)setEra:(long long)arg1;
- (void)setHasDay:(bool)arg1;
- (void)setHasEra:(bool)arg1;
- (void)setHasHour:(bool)arg1;
- (void)setHasMonth:(bool)arg1;
- (void)setHasYear:(bool)arg1;
- (void)setHour:(long long)arg1;
- (void)setMonth:(long long)arg1;
- (void)setYear:(long long)arg1;
- (void)writeTo:(id)arg1;
- (long long)year;

@end
