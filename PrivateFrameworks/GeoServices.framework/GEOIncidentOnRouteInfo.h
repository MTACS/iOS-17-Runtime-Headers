
@interface GEOIncidentOnRouteInfo : PBCodable <NSCopying> {
    NSMutableArray * _indexAndOffsets;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSMutableArray *indexAndOffsets;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)indexAndOffsetType;
+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)addIndexAndOffset:(id)arg1;
- (void)clearIndexAndOffsets;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)indexAndOffsetAtIndex:(unsigned long long)arg1;
- (id)indexAndOffsets;
- (unsigned long long)indexAndOffsetsCount;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setIndexAndOffsets:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
