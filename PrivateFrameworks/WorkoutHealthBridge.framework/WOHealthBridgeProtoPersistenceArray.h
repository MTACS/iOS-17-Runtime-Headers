
@interface WOHealthBridgeProtoPersistenceArray : PBCodable <NSCopying> {
    NSMutableArray * _persistences;
}

@property (nonatomic, retain) NSMutableArray *persistences;

+ (Class)persistencesType;

- (void).cxx_destruct;
- (void)addPersistences:(id)arg1;
- (void)clearPersistences;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)persistences;
- (id)persistencesAtIndex:(unsigned long long)arg1;
- (unsigned long long)persistencesCount;
- (bool)readFrom:(id)arg1;
- (void)setPersistences:(id)arg1;
- (void)writeTo:(id)arg1;

@end
