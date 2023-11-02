
@interface HKCodableDayIndexRange : PBCodable <NSCopying> {
    long long  _dayIndex;
    long long  _duration;
    struct APPLE_HKCodableDayIndexRange_1 { 
        unsigned int dayIndex : 1; 
        unsigned int duration : 1; 
    }  _has;
}

@property (nonatomic) long long dayIndex;
@property (nonatomic) long long duration;
@property (nonatomic) bool hasDayIndex;
@property (nonatomic) bool hasDuration;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)dayIndex;
- (id)description;
- (id)dictionaryRepresentation;
- (long long)duration;
- (bool)hasDayIndex;
- (bool)hasDuration;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDayIndex:(long long)arg1;
- (void)setDuration:(long long)arg1;
- (void)setHasDayIndex:(bool)arg1;
- (void)setHasDuration:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
