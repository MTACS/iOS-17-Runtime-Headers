
@interface NTPBBundleIDMapping : PBCodable <NSCopying> {
    NSMutableArray * _bundleIds;
}

@property (nonatomic, retain) NSMutableArray *bundleIds;

+ (Class)bundleIdsType;

- (void).cxx_destruct;
- (void)addBundleIds:(id)arg1;
- (id)bundleIds;
- (id)bundleIdsAtIndex:(unsigned long long)arg1;
- (unsigned long long)bundleIdsCount;
- (void)clearBundleIds;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBundleIds:(id)arg1;
- (void)writeTo:(id)arg1;

@end
