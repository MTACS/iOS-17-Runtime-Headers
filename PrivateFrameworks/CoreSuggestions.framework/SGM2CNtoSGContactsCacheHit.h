
@interface SGM2CNtoSGContactsCacheHit : PBCodable <NSCopying> {
    bool  _cacheHit;
    struct { 
        unsigned int cacheHit : 1; 
    }  _has;
    NSString * _key;
}

@property (nonatomic) bool cacheHit;
@property (nonatomic) bool hasCacheHit;
@property (nonatomic, readonly) bool hasKey;
@property (nonatomic, retain) NSString *key;

- (void).cxx_destruct;
- (bool)cacheHit;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCacheHit;
- (bool)hasKey;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)key;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCacheHit:(bool)arg1;
- (void)setHasCacheHit:(bool)arg1;
- (void)setKey:(id)arg1;
- (void)writeTo:(id)arg1;

@end
