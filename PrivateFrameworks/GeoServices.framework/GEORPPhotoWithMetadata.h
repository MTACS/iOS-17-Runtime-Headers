
@interface GEORPPhotoWithMetadata : PBCodable <NSCopying> {
    double  _creationDate;
    struct { 
        unsigned int has_creationDate : 1; 
        unsigned int has_geotagHorizontalAccuracy : 1; 
        unsigned int has_geotagTimestamp : 1; 
        unsigned int read_imageData : 1; 
        unsigned int read_geotagCoordinate : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    GEOLatLng * _geotagCoordinate;
    double  _geotagHorizontalAccuracy;
    double  _geotagTimestamp;
    NSData * _imageData;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
}

@property (nonatomic) double creationDate;
@property (nonatomic, retain) GEOLatLng *geotagCoordinate;
@property (nonatomic) double geotagHorizontalAccuracy;
@property (nonatomic) double geotagTimestamp;
@property (nonatomic) bool hasCreationDate;
@property (nonatomic, readonly) bool hasGeotagCoordinate;
@property (nonatomic) bool hasGeotagHorizontalAccuracy;
@property (nonatomic) bool hasGeotagTimestamp;
@property (nonatomic, readonly) bool hasImageData;
@property (nonatomic, retain) NSData *imageData;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)creationDate;
- (id)description;
- (id)dictionaryRepresentation;
- (id)geotagCoordinate;
- (double)geotagHorizontalAccuracy;
- (double)geotagTimestamp;
- (bool)hasCreationDate;
- (bool)hasGeotagCoordinate;
- (bool)hasGeotagHorizontalAccuracy;
- (bool)hasGeotagTimestamp;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (bool)hasImageData;
- (unsigned long long)hash;
- (id)imageData;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCreationDate:(double)arg1;
- (void)setGeotagCoordinate:(id)arg1;
- (void)setGeotagHorizontalAccuracy:(double)arg1;
- (void)setGeotagTimestamp:(double)arg1;
- (void)setHasCreationDate:(bool)arg1;
- (void)setHasGeotagHorizontalAccuracy:(bool)arg1;
- (void)setHasGeotagTimestamp:(bool)arg1;
- (void)setImageData:(id)arg1;
- (void)writeTo:(id)arg1;

@end
