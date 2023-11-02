
@interface FCCPercentageOfDayRuleProtobuf : PBCodable <NSCopying> {
    struct { 
        unsigned int minimumDayDuration : 1; 
        unsigned int percentOfDay : 1; 
    }  _has;
    double  _minimumDayDuration;
    double  _percentOfDay;
}

@property (nonatomic) bool hasMinimumDayDuration;
@property (nonatomic) bool hasPercentOfDay;
@property (nonatomic) double minimumDayDuration;
@property (nonatomic) double percentOfDay;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasMinimumDayDuration;
- (bool)hasPercentOfDay;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (double)minimumDayDuration;
- (double)percentOfDay;
- (bool)readFrom:(id)arg1;
- (void)setHasMinimumDayDuration:(bool)arg1;
- (void)setHasPercentOfDay:(bool)arg1;
- (void)setMinimumDayDuration:(double)arg1;
- (void)setPercentOfDay:(double)arg1;
- (void)writeTo:(id)arg1;

@end
