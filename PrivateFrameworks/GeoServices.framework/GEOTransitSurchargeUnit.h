
@interface GEOTransitSurchargeUnit : PBCodable <NSCopying> {
    GEOTransitPrice * _price;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) bool hasPrice;
@property (nonatomic, retain) GEOTransitPrice *price;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasPrice;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (id)price;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setPrice:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
