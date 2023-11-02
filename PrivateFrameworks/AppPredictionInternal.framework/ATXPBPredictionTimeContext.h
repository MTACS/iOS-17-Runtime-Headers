
@interface ATXPBPredictionTimeContext : PBCodable <NSCopying> {
    double  _date;
    struct { 
        unsigned int date : 1; 
    }  _has;
}

@property (nonatomic) double date;
@property (nonatomic) bool hasDate;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)date;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasDate;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDate:(double)arg1;
- (void)setHasDate:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
