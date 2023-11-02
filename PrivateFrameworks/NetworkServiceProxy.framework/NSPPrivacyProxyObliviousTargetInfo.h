
@interface NSPPrivacyProxyObliviousTargetInfo : PBCodable <NSCopying> {
    struct { 
        unsigned int proxyIndex : 1; 
    }  _has;
    unsigned int  _proxyIndex;
    NSString * _proxyURLPath;
    NSString * _targetHost;
}

@property (nonatomic) bool hasProxyIndex;
@property (nonatomic) unsigned int proxyIndex;
@property (nonatomic, retain) NSString *proxyURLPath;
@property (nonatomic, retain) NSString *targetHost;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasProxyIndex;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)proxyIndex;
- (id)proxyURLPath;
- (bool)readFrom:(id)arg1;
- (void)setHasProxyIndex:(bool)arg1;
- (void)setProxyIndex:(unsigned int)arg1;
- (void)setProxyURLPath:(id)arg1;
- (void)setTargetHost:(id)arg1;
- (id)targetHost;
- (void)writeTo:(id)arg1;

@end
