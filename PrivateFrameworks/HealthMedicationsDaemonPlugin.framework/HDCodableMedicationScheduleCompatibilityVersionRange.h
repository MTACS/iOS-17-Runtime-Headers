
@interface HDCodableMedicationScheduleCompatibilityVersionRange : PBCodable <NSCopying> {
    struct { 
        unsigned int minimum : 1; 
        unsigned int origin : 1; 
    }  _has;
    long long  _minimum;
    long long  _origin;
}

@property (nonatomic) bool hasMinimum;
@property (nonatomic) bool hasOrigin;
@property (nonatomic) long long minimum;
@property (nonatomic) long long origin;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasMinimum;
- (bool)hasOrigin;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (long long)minimum;
- (long long)origin;
- (bool)readFrom:(id)arg1;
- (void)setHasMinimum:(bool)arg1;
- (void)setHasOrigin:(bool)arg1;
- (void)setMinimum:(long long)arg1;
- (void)setOrigin:(long long)arg1;
- (void)writeTo:(id)arg1;

@end
