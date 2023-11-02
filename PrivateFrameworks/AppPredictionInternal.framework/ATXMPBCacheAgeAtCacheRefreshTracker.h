
@interface ATXMPBCacheAgeAtCacheRefreshTracker : PBCodable <NSCopying> {
    NSString * _abGroup;
    unsigned int  _cacheAge;
    NSString * _cacheName;
    struct { 
        unsigned int cacheAge : 1; 
    }  _has;
}

@property (nonatomic, retain) NSString *abGroup;
@property (nonatomic) unsigned int cacheAge;
@property (nonatomic, retain) NSString *cacheName;
@property (nonatomic, readonly) bool hasAbGroup;
@property (nonatomic) bool hasCacheAge;
@property (nonatomic, readonly) bool hasCacheName;

- (void).cxx_destruct;
- (id)abGroup;
- (unsigned int)cacheAge;
- (id)cacheName;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAbGroup;
- (bool)hasCacheAge;
- (bool)hasCacheName;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAbGroup:(id)arg1;
- (void)setCacheAge:(unsigned int)arg1;
- (void)setCacheName:(id)arg1;
- (void)setHasCacheAge:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
