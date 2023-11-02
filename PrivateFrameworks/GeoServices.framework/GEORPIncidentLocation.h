
@interface GEORPIncidentLocation : PBCodable <NSCopying> {
    struct { 
        unsigned int has_zoomLevel : 1; 
    }  _flags;
    GEOLatLng * _latLng;
    unsigned int  _zoomLevel;
}

@property (nonatomic, readonly) bool hasLatLng;
@property (nonatomic) bool hasZoomLevel;
@property (nonatomic, retain) GEOLatLng *latLng;
@property (nonatomic) unsigned int zoomLevel;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (bool)hasLatLng;
- (bool)hasZoomLevel;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (id)latLng;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasZoomLevel:(bool)arg1;
- (void)setLatLng:(id)arg1;
- (void)setZoomLevel:(unsigned int)arg1;
- (void)writeTo:(id)arg1;
- (unsigned int)zoomLevel;

@end
