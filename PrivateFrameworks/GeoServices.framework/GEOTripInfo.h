
@interface GEOTripInfo : PBCodable <NSCopying> {
    struct { 
        unsigned int has_hasVisitedFirstStop : 1; 
    }  _flags;
    bool  _hasVisitedFirstStop;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) bool hasHasVisitedFirstStop;
@property (nonatomic) bool hasVisitedFirstStop;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasHasVisitedFirstStop;
- (bool)hasVisitedFirstStop;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasHasVisitedFirstStop:(bool)arg1;
- (void)setHasVisitedFirstStop:(bool)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
