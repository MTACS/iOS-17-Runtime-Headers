
@interface NTPBCacheHint : PBCodable <NSCopying> {
    unsigned long long  _accessTime;
    struct { 
        unsigned int accessTime : 1; 
        unsigned int lifetime : 1; 
    }  _has;
    NSString * _key;
    int  _lifetime;
}

@property (nonatomic) unsigned long long accessTime;
@property (nonatomic) bool hasAccessTime;
@property (nonatomic, readonly) bool hasKey;
@property (nonatomic) bool hasLifetime;
@property (nonatomic, retain) NSString *key;
@property (nonatomic) int lifetime;

- (unsigned long long)accessTime;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAccessTime;
- (bool)hasKey;
- (bool)hasLifetime;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)key;
- (int)lifetime;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAccessTime:(unsigned long long)arg1;
- (void)setHasAccessTime:(bool)arg1;
- (void)setHasLifetime:(bool)arg1;
- (void)setKey:(id)arg1;
- (void)setLifetime:(int)arg1;
- (void)writeTo:(id)arg1;

@end
