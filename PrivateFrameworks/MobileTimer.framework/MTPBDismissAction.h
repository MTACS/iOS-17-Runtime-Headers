
@interface MTPBDismissAction : PBCodable <NSCopying> {
    double  _dismissDate;
}

@property (nonatomic) double dismissDate;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (double)dismissDate;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDismissDate:(double)arg1;
- (void)writeTo:(id)arg1;

@end
