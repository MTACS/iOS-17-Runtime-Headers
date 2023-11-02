
@interface GEOCoarseLocationTileData : PBCodable <NSCopying> {
    NSMutableArray * _territorys;
}

@property (nonatomic, retain) NSMutableArray *territorys;

+ (bool)isValid:(id)arg1;
+ (Class)territoryType;

- (void).cxx_destruct;
- (void)addTerritory:(id)arg1;
- (void)clearTerritorys;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setTerritorys:(id)arg1;
- (id)territoryAtIndex:(unsigned long long)arg1;
- (id)territorys;
- (unsigned long long)territorysCount;
- (void)writeTo:(id)arg1;

@end
