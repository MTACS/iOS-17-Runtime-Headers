
@interface MXEntities : PBCodable <NSCopying> {
    NSMutableArray * _entities;
}

@property (nonatomic, retain) NSMutableArray *entities;

+ (Class)entitiesType;

- (void).cxx_destruct;
- (void)addEntities:(id)arg1;
- (void)clearEntities;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)entities;
- (id)entitiesAtIndex:(unsigned long long)arg1;
- (unsigned long long)entitiesCount;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setEntities:(id)arg1;
- (void)writeTo:(id)arg1;

@end
