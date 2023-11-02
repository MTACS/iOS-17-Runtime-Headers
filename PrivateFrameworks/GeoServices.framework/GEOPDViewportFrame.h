
@interface GEOPDViewportFrame : PBCodable <NSCopying> {
    float  _distance;
    struct { 
        unsigned int has_distance : 1; 
        unsigned int has_heading : 1; 
        unsigned int has_pitch : 1; 
    }  _flags;
    float  _heading;
    float  _pitch;
    GEOPDGeographicCoordinate * _targetPoint;
    PBUnknownFields * _unknownFields;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
