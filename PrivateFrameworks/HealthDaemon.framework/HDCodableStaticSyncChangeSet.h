
@interface HDCodableStaticSyncChangeSet : PBCodable <NSCopying> {
    NSMutableArray * _changes;
}

@property (nonatomic, retain) NSMutableArray *changes;

+ (id)changeSetWithChanges:(id)arg1;
+ (Class)changesType;

- (void).cxx_destruct;
- (void)addChanges:(id)arg1;
- (id)changes;
- (id)changesAtIndex:(unsigned long long)arg1;
- (unsigned long long)changesCount;
- (void)clearChanges;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setChanges:(id)arg1;
- (void)writeTo:(id)arg1;

@end
