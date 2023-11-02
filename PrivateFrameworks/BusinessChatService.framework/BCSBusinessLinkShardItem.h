
@interface BCSBusinessLinkShardItem : PBCodable <NSCopying> {
    long long  _count;
    NSData * _filter;
    struct { 
        unsigned int count : 1; 
        unsigned int index : 1; 
        unsigned int ttl : 1; 
    }  _has;
    long long  _index;
    long long  _ttl;
}

@property (nonatomic) long long count;
@property (nonatomic, retain) NSData *filter;
@property (nonatomic) bool hasCount;
@property (nonatomic, readonly) bool hasFilter;
@property (nonatomic) bool hasIndex;
@property (nonatomic) bool hasTtl;
@property (nonatomic) long long index;
@property (nonatomic) long long ttl;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)count;
- (id)description;
- (id)dictionaryRepresentation;
- (id)filter;
- (bool)hasCount;
- (bool)hasFilter;
- (bool)hasIndex;
- (bool)hasTtl;
- (unsigned long long)hash;
- (long long)index;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCount:(long long)arg1;
- (void)setFilter:(id)arg1;
- (void)setHasCount:(bool)arg1;
- (void)setHasIndex:(bool)arg1;
- (void)setHasTtl:(bool)arg1;
- (void)setIndex:(long long)arg1;
- (void)setTtl:(long long)arg1;
- (long long)ttl;
- (void)writeTo:(id)arg1;

@end
