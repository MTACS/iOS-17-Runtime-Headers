
@interface NTKProtoFacePigmentSet : PBCodable <NSCopying> {
    NSMutableArray * _collectionBySlots;
    NSString * _domain;
}

@property (nonatomic, retain) NSMutableArray *collectionBySlots;
@property (nonatomic, retain) NSString *domain;
@property (nonatomic, readonly) bool hasDomain;

+ (Class)collectionBySlotsType;

- (void).cxx_destruct;
- (void)addCollectionBySlots:(id)arg1;
- (void)clearCollectionBySlots;
- (id)collectionBySlots;
- (id)collectionBySlotsAtIndex:(unsigned long long)arg1;
- (unsigned long long)collectionBySlotsCount;
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
- (void)setCollectionBySlots:(id)arg1;
- (void)setDomain:(id)arg1;
- (void)writeTo:(id)arg1;

@end
