
@interface FCCTimeOfDayRuleProtobuf : PBCodable <NSCopying> {
    struct { 
        unsigned int minimumDayDuration : 1; 
        unsigned int secondsBeforeEndOfDay : 1; 
    }  _has;
    double  _minimumDayDuration;
    double  _secondsBeforeEndOfDay;
}

@property (nonatomic) bool hasMinimumDayDuration;
@property (nonatomic) bool hasSecondsBeforeEndOfDay;
@property (nonatomic) double minimumDayDuration;
@property (nonatomic) double secondsBeforeEndOfDay;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasMinimumDayDuration;
- (bool)hasSecondsBeforeEndOfDay;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (double)minimumDayDuration;
- (bool)readFrom:(id)arg1;
- (double)secondsBeforeEndOfDay;
- (void)setHasMinimumDayDuration:(bool)arg1;
- (void)setHasSecondsBeforeEndOfDay:(bool)arg1;
- (void)setMinimumDayDuration:(double)arg1;
- (void)setSecondsBeforeEndOfDay:(double)arg1;
- (void)writeTo:(id)arg1;

@end
