
@interface BCSDomainBundleIdPatterns : PBCodable <NSCopying> {
    NSMutableArray * _bundleIdPatterns;
    NSString * _domain;
}

@property (nonatomic, retain) NSMutableArray *bundleIdPatterns;
@property (nonatomic, retain) NSString *domain;
@property (nonatomic, readonly) bool hasDomain;

+ (Class)bundleIdPatternsType;

- (void).cxx_destruct;
- (void)addBundleIdPatterns:(id)arg1;
- (id)bundleIdPatterns;
- (id)bundleIdPatternsAtIndex:(unsigned long long)arg1;
- (unsigned long long)bundleIdPatternsCount;
- (void)clearBundleIdPatterns;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)domain;
- (bool)hasDomain;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBundleIdPatterns:(id)arg1;
- (void)setDomain:(id)arg1;
- (void)writeTo:(id)arg1;

@end
