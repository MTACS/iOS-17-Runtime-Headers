
@interface NTPBLRUCache : PBCodable <NSCopying> {
    NSMutableArray * _entries;
}

@property (nonatomic, retain) NSMutableArray *entries;

+ (Class)entriesType;

- (void)addEntries:(id)arg1;
- (void)clearEntries;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)entries;
- (id)entriesAtIndex:(unsigned long long)arg1;
- (unsigned long long)entriesCount;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setEntries:(id)arg1;
- (void)writeTo:(id)arg1;

@end
