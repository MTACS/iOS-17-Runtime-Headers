
@interface MXSpeechProfileSourceData : PBCodable <NSCopying> {
    NSMutableArray * _entitiesByCategorys;
}

@property (nonatomic, retain) NSMutableArray *entitiesByCategorys;

+ (Class)entitiesByCategoryType;

- (void).cxx_destruct;
- (void)addEntitiesByCategory:(id)arg1;
- (void)clearEntitiesByCategorys;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)entitiesByCategoryAtIndex:(unsigned long long)arg1;
- (id)entitiesByCategorys;
- (unsigned long long)entitiesByCategorysCount;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setEntitiesByCategorys:(id)arg1;
- (void)writeTo:(id)arg1;

@end
