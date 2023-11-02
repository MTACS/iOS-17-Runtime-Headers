
@interface CKDPDistributedTimestamps : PBCodable <NSCopying> {
    NSMutableArray * _siteIdentifiers;
    NSMutableArray * _siteVersionVectors;
}

@property (nonatomic, retain) NSMutableArray *siteIdentifiers;
@property (nonatomic, retain) NSMutableArray *siteVersionVectors;

+ (Class)siteIdentifiersType;
+ (Class)siteVersionVectorsType;

- (void).cxx_destruct;
- (void)addSiteIdentifiers:(id)arg1;
- (void)addSiteVersionVectors:(id)arg1;
- (void)clearSiteIdentifiers;
- (void)clearSiteVersionVectors;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setSiteIdentifiers:(id)arg1;
- (void)setSiteVersionVectors:(id)arg1;
- (id)siteIdentifiers;
- (id)siteIdentifiersAtIndex:(unsigned long long)arg1;
- (unsigned long long)siteIdentifiersCount;
- (id)siteVersionVectors;
- (id)siteVersionVectorsAtIndex:(unsigned long long)arg1;
- (unsigned long long)siteVersionVectorsCount;
- (void)writeTo:(id)arg1;

@end
