
@interface CKDPBundlesForContainerResponse : PBCodable <NSCopying> {
    NSMutableArray * _bundleIDs;
}

@property (nonatomic, retain) NSMutableArray *bundleIDs;

+ (Class)bundleIDType;

- (void).cxx_destruct;
- (void)addBundleID:(id)arg1;
- (id)bundleIDAtIndex:(unsigned long long)arg1;
- (id)bundleIDs;
- (unsigned long long)bundleIDsCount;
- (void)clearBundleIDs;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBundleIDs:(id)arg1;
- (void)writeTo:(id)arg1;

@end
