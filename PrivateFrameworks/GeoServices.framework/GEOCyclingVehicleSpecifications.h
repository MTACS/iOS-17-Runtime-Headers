
@interface GEOCyclingVehicleSpecifications : PBCodable <NSCopying> {
    struct { 
        unsigned int has_isEbike : 1; 
    }  _flags;
    bool  _isEbike;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) bool hasIsEbike;
@property (nonatomic) bool isEbike;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIsEbike;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEbike;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasIsEbike:(bool)arg1;
- (void)setIsEbike:(bool)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
