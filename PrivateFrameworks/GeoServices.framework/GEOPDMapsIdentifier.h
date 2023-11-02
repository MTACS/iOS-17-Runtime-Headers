
@interface GEOPDMapsIdentifier : PBCodable <NSCopying> {
    GEOPDShardedId * _shardedId;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) bool hasShardedId;
@property (nonatomic, retain) GEOPDShardedId *shardedId;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (bool)hasShardedId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isValidMapsIdentifier;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setShardedId:(id)arg1;
- (id)shardedId;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
