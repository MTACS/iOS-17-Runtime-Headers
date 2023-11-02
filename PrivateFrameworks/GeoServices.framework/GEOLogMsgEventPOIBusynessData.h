
@interface GEOLogMsgEventPOIBusynessData : PBCodable <NSCopying> {
    double  _altitude;
    struct { 
        unsigned int has_altitude : 1; 
        unsigned int has_horizontalAccuracy : 1; 
        unsigned int has_timestamp : 1; 
        unsigned int has_verticalAccuracy : 1; 
        unsigned int read_location : 1; 
        unsigned int read_poiPredictions : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    double  _horizontalAccuracy;
    GEOLatLng * _location;
    NSMutableArray * _poiPredictions;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    double  _timestamp;
    double  _verticalAccuracy;
}

@property (nonatomic) double altitude;
@property (nonatomic) bool hasAltitude;
@property (nonatomic) bool hasHorizontalAccuracy;
@property (nonatomic, readonly) bool hasLocation;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool hasVerticalAccuracy;
@property (nonatomic) double horizontalAccuracy;
@property (nonatomic, retain) GEOLatLng *location;
@property (nonatomic, retain) NSMutableArray *poiPredictions;
@property (nonatomic) double timestamp;
@property (nonatomic) double verticalAccuracy;

+ (bool)isValid:(id)arg1;
+ (Class)poiPredictionsType;

- (void).cxx_destruct;
- (void)addPoiPredictions:(id)arg1;
- (double)altitude;
- (void)clearPoiPredictions;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAltitude;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (bool)hasHorizontalAccuracy;
- (bool)hasLocation;
- (bool)hasTimestamp;
- (bool)hasVerticalAccuracy;
- (unsigned long long)hash;
- (double)horizontalAccuracy;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (id)location;
- (void)mergeFrom:(id)arg1;
- (id)poiPredictions;
- (id)poiPredictionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)poiPredictionsCount;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAltitude:(double)arg1;
- (void)setHasAltitude:(bool)arg1;
- (void)setHasHorizontalAccuracy:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasVerticalAccuracy:(bool)arg1;
- (void)setHorizontalAccuracy:(double)arg1;
- (void)setLocation:(id)arg1;
- (void)setPoiPredictions:(id)arg1;
- (void)setTimestamp:(double)arg1;
- (void)setVerticalAccuracy:(double)arg1;
- (double)timestamp;
- (double)verticalAccuracy;
- (void)writeTo:(id)arg1;

@end
