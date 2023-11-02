
@interface HKCodableClosedRange : PBCodable <NSCopying> {
    double  _lowerBound;
    double  _upperBound;
}

@property (nonatomic) double lowerBound;
@property (nonatomic) double upperBound;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (double)lowerBound;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setLowerBound:(double)arg1;
- (void)setUpperBound:(double)arg1;
- (double)upperBound;
- (void)writeTo:(id)arg1;

@end
