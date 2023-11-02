
@interface GEORPFilter : PBCodable <NSCopying> {
    struct { 
        unsigned int has_placeMuid : 1; 
    }  _flags;
    unsigned long long  _placeMuid;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) bool hasPlaceMuid;
@property (nonatomic) unsigned long long placeMuid;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasPlaceMuid;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)placeMuid;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasPlaceMuid:(bool)arg1;
- (void)setPlaceMuid:(unsigned long long)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
