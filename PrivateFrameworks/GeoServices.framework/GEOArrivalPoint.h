
@interface GEOArrivalPoint : PBCodable <NSCopying> {
    struct { 
        unsigned int has_radius : 1; 
    }  _flags;
    GEOLatLng * _point;
    unsigned int  _radius;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) bool hasPoint;
@property (nonatomic) bool hasRadius;
@property (nonatomic, retain) GEOLatLng *point;
@property (nonatomic) unsigned int radius;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (bool)hasPoint;
- (bool)hasRadius;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (id)point;
- (unsigned int)radius;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasRadius:(bool)arg1;
- (void)setPoint:(id)arg1;
- (void)setRadius:(unsigned int)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
