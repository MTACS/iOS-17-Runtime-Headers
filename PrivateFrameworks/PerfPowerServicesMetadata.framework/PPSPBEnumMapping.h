
@interface PPSPBEnumMapping : PBCodable <NSCopying> {
    NSMutableArray * _enumMaps;
}

@property (nonatomic, retain) NSMutableArray *enumMaps;

+ (Class)enumMapType;

- (void).cxx_destruct;
- (void)addEnumMap:(id)arg1;
- (void)clearEnumMaps;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)enumMapAtIndex:(unsigned long long)arg1;
- (id)enumMaps;
- (unsigned long long)enumMapsCount;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setEnumMaps:(id)arg1;
- (void)writeTo:(id)arg1;

@end
