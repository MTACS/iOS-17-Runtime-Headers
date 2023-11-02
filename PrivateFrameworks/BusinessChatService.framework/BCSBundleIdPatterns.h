
@interface BCSBundleIdPatterns : PBCodable <NSCopying> {
    NSString * _bundleId;
    NSMutableArray * _urlPatterns;
}

@property (nonatomic, retain) NSString *bundleId;
@property (nonatomic, readonly) bool hasBundleId;
@property (nonatomic, retain) NSMutableArray *urlPatterns;

+ (Class)urlPatternsType;

- (void).cxx_destruct;
- (void)addUrlPatterns:(id)arg1;
- (id)bundleId;
- (void)clearUrlPatterns;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBundleId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBundleId:(id)arg1;
- (void)setUrlPatterns:(id)arg1;
- (id)urlPatterns;
- (id)urlPatternsAtIndex:(unsigned long long)arg1;
- (unsigned long long)urlPatternsCount;
- (void)writeTo:(id)arg1;

@end
