
@interface SYChangeMessage : PBCodable <NSCopying> {
    NSMutableArray * _changes;
    SYMessageHeader * _header;
}

@property (nonatomic, retain) NSMutableArray *changes;
@property (nonatomic, retain) SYMessageHeader *header;

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
- (id)header;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setChanges:(id)arg1;
- (void)setHeader:(id)arg1;
- (void)writeTo:(id)arg1;

@end
