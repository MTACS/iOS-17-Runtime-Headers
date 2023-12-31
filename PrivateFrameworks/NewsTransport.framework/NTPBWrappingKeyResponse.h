
@interface NTPBWrappingKeyResponse : PBCodable <NSCopying> {
    NSMutableArray * _wrappingKeyMapEntries;
}

@property (nonatomic, retain) NSMutableArray *wrappingKeyMapEntries;

+ (Class)wrappingKeyMapEntriesType;

- (void).cxx_destruct;
- (void)addWrappingKeyMapEntries:(id)arg1;
- (void)clearWrappingKeyMapEntries;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setWrappingKeyMapEntries:(id)arg1;
- (id)wrappingKeyMapEntries;
- (id)wrappingKeyMapEntriesAtIndex:(unsigned long long)arg1;
- (unsigned long long)wrappingKeyMapEntriesCount;
- (void)writeTo:(id)arg1;

@end
