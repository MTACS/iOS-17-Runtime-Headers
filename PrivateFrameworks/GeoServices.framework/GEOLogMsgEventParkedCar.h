
@interface GEOLogMsgEventParkedCar : PBCodable <NSCopying> {
    struct { 
        unsigned int has_locationUncertainty : 1; 
        unsigned int has_timestamp : 1; 
    }  _flags;
    GEOLatLng * _location;
    double  _locationUncertainty;
    double  _timestamp;
}

@property (nonatomic, readonly) bool hasLocation;
@property (nonatomic) bool hasLocationUncertainty;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic, retain) GEOLatLng *location;
@property (nonatomic) double locationUncertainty;
@property (nonatomic) double timestamp;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (bool)hasLocation;
- (bool)hasLocationUncertainty;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (id)location;
- (double)locationUncertainty;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasLocationUncertainty:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setLocation:(id)arg1;
- (void)setLocationUncertainty:(double)arg1;
- (void)setTimestamp:(double)arg1;
- (double)timestamp;
- (void)writeTo:(id)arg1;

@end
