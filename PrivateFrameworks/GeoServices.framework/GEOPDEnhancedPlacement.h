
@interface GEOPDEnhancedPlacement : PBCodable <NSCopying> {
    float  _buildingFaceAzimuth;
    float  _buildingHeight;
    struct { 
        unsigned long long *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _buildingIds;
    double  _elevation;
    struct { 
        unsigned int has_elevation : 1; 
        unsigned int has_buildingFaceAzimuth : 1; 
        unsigned int has_buildingHeight : 1; 
    }  _flags;
    PBUnknownFields * _unknownFields;
}

+ (id)enhancedPlacementWithPlaceData:(id)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
