
@interface PETAggregatedMessage : PBCodable <NSCopying> {
    unsigned int  _count;
    PETDistribution * _distribution;
    struct { 
        unsigned int count : 1; 
    }  _has;
    PETAggregationKey * _key;
}

@property (nonatomic) unsigned int count;
@property (nonatomic, retain) PETDistribution *distribution;
@property (nonatomic) bool hasCount;
@property (nonatomic, readonly) bool hasDistribution;
@property (nonatomic, readonly) bool hasKey;
@property (nonatomic, retain) PETAggregationKey *key;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)count;
- (id)description;
- (id)dictionaryRepresentation;
- (id)distribution;
- (bool)hasCount;
- (bool)hasDistribution;
- (bool)hasKey;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)key;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCount:(unsigned int)arg1;
- (void)setDistribution:(id)arg1;
- (void)setHasCount:(bool)arg1;
- (void)setKey:(id)arg1;
- (void)writeTo:(id)arg1;

@end
