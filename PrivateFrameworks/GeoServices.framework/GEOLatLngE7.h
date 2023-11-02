
@interface GEOLatLngE7 : PBCodable <NSCopying> {
    int  _latE7;
    int  _lngE7;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) struct { double x1; double x2; } coordinate;
@property (nonatomic) int latE7;
@property (nonatomic, readonly) GEOLatLng *latLng;
@property (nonatomic) int lngE7;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (double)fromE7Coordinate:(int)arg1;
+ (bool)isValid:(id)arg1;
+ (int)toE7Coordinate:(double)arg1;

- (void).cxx_destruct;
- (void)clearUnknownFields:(bool)arg1;
- (struct { double x1; double x2; })coordinate;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithCoordinate:(struct { double x1; double x2; })arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithE7Latitude:(int)arg1 longitude:(int)arg2;
- (id)initWithJSON:(id)arg1;
- (id)initWithLatLng:(id)arg1;
- (id)initWithLatitude:(double)arg1 longitude:(double)arg2;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (int)latE7;
- (id)latLng;
- (int)lngE7;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setLatE7:(int)arg1;
- (void)setLngE7:(int)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
