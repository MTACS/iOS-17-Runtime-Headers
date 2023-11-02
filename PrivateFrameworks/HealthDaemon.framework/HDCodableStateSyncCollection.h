
@interface HDCodableStateSyncCollection : PBCodable <NSCopying> {
    NSMutableArray * _deletedSampleCollections;
    NSMutableArray * _sampleCollections;
}

@property (nonatomic, retain) NSMutableArray *deletedSampleCollections;
@property (nonatomic, retain) NSMutableArray *sampleCollections;

+ (Class)deletedSampleCollectionsType;
+ (Class)sampleCollectionsType;

- (void).cxx_destruct;
- (void)addDeletedSampleCollections:(id)arg1;
- (void)addSampleCollections:(id)arg1;
- (void)clearDeletedSampleCollections;
- (void)clearSampleCollections;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)deletedSampleCollections;
- (id)deletedSampleCollectionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)deletedSampleCollectionsCount;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)sampleCollections;
- (id)sampleCollectionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)sampleCollectionsCount;
- (void)setDeletedSampleCollections:(id)arg1;
- (void)setSampleCollections:(id)arg1;
- (void)writeTo:(id)arg1;

@end
