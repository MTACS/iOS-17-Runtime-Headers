
@interface GEOCoarseLocationRing : PBCodable <NSCopying> {
    struct GEOCoarseLocationPoint { int x1; int x2; } * _points;
    unsigned long long  _pointsCount;
    unsigned long long  _pointsSpace;
}

@property (nonatomic, readonly) struct GEOCoarseLocationPoint { int x1; int x2; }*points;
@property (nonatomic, readonly) unsigned long long pointsCount;

+ (bool)isValid:(id)arg1;

- (void)addPoints:(struct GEOCoarseLocationPoint { int x1; int x2; })arg1;
- (void)clearPoints;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (struct GEOCoarseLocationPoint { int x1; int x2; }*)points;
- (struct GEOCoarseLocationPoint { int x1; int x2; })pointsAtIndex:(unsigned long long)arg1;
- (unsigned long long)pointsCount;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setPoints:(struct GEOCoarseLocationPoint { int x1; int x2; }*)arg1 count:(unsigned long long)arg2;
- (void)writeTo:(id)arg1;

@end
