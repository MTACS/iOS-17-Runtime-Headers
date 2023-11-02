
@interface NSPPrivacyProxyProxyPathWeight : PBCodable <NSCopying> {
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _proxies;
    unsigned int  _weight;
}

@property (nonatomic, readonly) unsigned int*proxies;
@property (nonatomic, readonly) unsigned long long proxiesCount;
@property (nonatomic) unsigned int weight;

- (void)addProxies:(unsigned int)arg1;
- (void)clearProxies;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int*)proxies;
- (unsigned int)proxiesAtIndex:(unsigned long long)arg1;
- (unsigned long long)proxiesCount;
- (bool)readFrom:(id)arg1;
- (void)setProxies:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)setWeight:(unsigned int)arg1;
- (unsigned int)weight;
- (void)writeTo:(id)arg1;

@end
