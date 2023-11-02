
@interface GEOActiveTileGroupReserved : PBCodable <NSCopying> {
    NSString * _authToken;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSString *authToken;
@property (nonatomic, readonly) bool hasAuthToken;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (id)authToken;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAuthToken;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAuthToken:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
