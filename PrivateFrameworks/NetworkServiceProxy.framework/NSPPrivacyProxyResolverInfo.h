
@interface NSPPrivacyProxyResolverInfo : PBCodable <NSCopying> {
    NSString * _dohURL;
    struct { 
        unsigned int proxyIndex : 1; 
        unsigned int weight : 1; 
    }  _has;
    NSData * _obliviousDoHConfig;
    unsigned int  _proxyIndex;
    unsigned int  _weight;
}

@property (nonatomic, retain) NSString *dohURL;
@property (nonatomic, readonly) bool hasDohURL;
@property (nonatomic, readonly) bool hasObliviousDoHConfig;
@property (nonatomic) bool hasProxyIndex;
@property (nonatomic) bool hasWeight;
@property (nonatomic, retain) NSData *obliviousDoHConfig;
@property (nonatomic) unsigned int proxyIndex;
@property (nonatomic) unsigned int weight;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)dohURL;
- (bool)hasDohURL;
- (bool)hasObliviousDoHConfig;
- (bool)hasProxyIndex;
- (bool)hasWeight;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)obliviousDoHConfig;
- (unsigned int)proxyIndex;
- (bool)readFrom:(id)arg1;
- (void)setDohURL:(id)arg1;
- (void)setHasProxyIndex:(bool)arg1;
- (void)setHasWeight:(bool)arg1;
- (void)setObliviousDoHConfig:(id)arg1;
- (void)setProxyIndex:(unsigned int)arg1;
- (void)setWeight:(unsigned int)arg1;
- (unsigned int)weight;
- (void)writeTo:(id)arg1;

@end
