
@interface GEOPlaceDataAmendment : PBCodable <NSCopying> {
    struct { 
        unsigned int has_suppressSiriRating : 1; 
    }  _flags;
    bool  _suppressSiriRating;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) bool hasSuppressSiriRating;
@property (nonatomic) bool suppressSiriRating;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasSuppressSiriRating;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasSuppressSiriRating:(bool)arg1;
- (void)setSuppressSiriRating:(bool)arg1;
- (bool)suppressSiriRating;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
