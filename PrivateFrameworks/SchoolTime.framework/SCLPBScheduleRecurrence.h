
@interface SCLPBScheduleRecurrence : PBCodable <NSCopying> {
    int  _day;
    struct { 
        unsigned int day : 1; 
    }  _has;
    SCLPBTimeInterval * _timeInterval;
}

@property (nonatomic) int day;
@property (nonatomic) bool hasDay;
@property (nonatomic, readonly) bool hasTimeInterval;
@property (nonatomic, retain) SCLPBTimeInterval *timeInterval;

- (void).cxx_destruct;
- (int)StringAsDay:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)day;
- (id)dayAsString:(int)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasDay;
- (bool)hasTimeInterval;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDay:(int)arg1;
- (void)setHasDay:(bool)arg1;
- (void)setTimeInterval:(id)arg1;
- (id)timeInterval;
- (void)writeTo:(id)arg1;

@end
