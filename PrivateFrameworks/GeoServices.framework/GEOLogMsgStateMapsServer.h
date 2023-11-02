
@interface GEOLogMsgStateMapsServer : PBCodable <NSCopying> {
    GEOMapsServerMetadata * _serverMetadata;
}

@property (nonatomic, readonly) bool hasServerMetadata;
@property (nonatomic, retain) GEOMapsServerMetadata *serverMetadata;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (bool)hasServerMetadata;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (id)serverMetadata;
- (void)setServerMetadata:(id)arg1;
- (void)writeTo:(id)arg1;

@end
