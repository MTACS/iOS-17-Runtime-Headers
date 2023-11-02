
@interface GEOTransitVehicleTime : PBCodable <NSCopying> {
    unsigned int  _absTime;
    struct { 
        unsigned int has_absTime : 1; 
    }  _flags;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) unsigned int absTime;
@property (nonatomic) bool hasAbsTime;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (unsigned int)absTime;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAbsTime;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAbsTime:(unsigned int)arg1;
- (void)setHasAbsTime:(bool)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
