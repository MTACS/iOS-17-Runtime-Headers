
@interface GEOLatLng : PBCodable <NSCopying> {
    double  _elevationM;
    struct { 
        unsigned int has_elevationM : 1; 
        unsigned int has_gtLog : 1; 
    }  _flags;
    bool  _gtLog;
    double  _lat;
    double  _lng;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) struct { double x1; double x2; } coordinate;
@property (nonatomic) double elevationM;
@property (nonatomic) bool gtLog;
@property (nonatomic) bool hasElevationM;
@property (nonatomic) bool hasGtLog;
@property (nonatomic) double lat;
@property (nonatomic) double lng;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)clearUnknownFields:(bool)arg1;
- (struct { double x1; double x2; })coordinate;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (double)elevationM;
- (bool)gtLog;
- (bool)hasElevationM;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (bool)hasGtLog;
- (unsigned long long)hash;
- (id)initWithCoordinate:(struct { double x1; double x2; })arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (id)initWithLatitude:(double)arg1 longitude:(double)arg2;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (double)lat;
- (double)lng;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setElevationM:(double)arg1;
- (void)setGtLog:(bool)arg1;
- (void)setHasElevationM:(bool)arg1;
- (void)setHasGtLog:(bool)arg1;
- (void)setLat:(double)arg1;
- (void)setLng:(double)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
