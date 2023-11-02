
@interface GEOTrafficColorInfo : PBCodable <NSCopying> {
    NSMutableArray * _trafficColorAndOffsets;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSMutableArray *trafficColorAndOffsets;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;
+ (Class)trafficColorAndOffsetType;

- (void).cxx_destruct;
- (void)addTrafficColorAndOffset:(id)arg1;
- (void)clearTrafficColorAndOffsets;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setTrafficColorAndOffsets:(id)arg1;
- (id)trafficColorAndOffsetAtIndex:(unsigned long long)arg1;
- (id)trafficColorAndOffsets;
- (unsigned long long)trafficColorAndOffsetsCount;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
