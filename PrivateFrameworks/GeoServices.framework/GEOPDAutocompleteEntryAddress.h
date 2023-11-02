
@interface GEOPDAutocompleteEntryAddress : PBCodable <NSCopying> {
    GEOLatLng * _center;
    double  _disambiguationRadiusMeters;
    double  _distance;
    struct { 
        unsigned int has_disambiguationRadiusMeters : 1; 
        unsigned int has_distance : 1; 
        unsigned int has_opaqueGeoId : 1; 
        unsigned int has_placeType : 1; 
        unsigned int has_shouldCallPlacesForClientization : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_center : 1; 
        unsigned int read_mapsId : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    GEOPDMapsIdentifier * _mapsId;
    unsigned long long  _opaqueGeoId;
    int  _placeType;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    bool  _shouldCallPlacesForClientization;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) GEOLatLng *center;
@property (nonatomic) double disambiguationRadiusMeters;
@property (nonatomic) double distance;
@property (nonatomic, readonly) bool hasCenter;
@property (nonatomic) bool hasDisambiguationRadiusMeters;
@property (nonatomic) bool hasDistance;
@property (nonatomic, readonly) bool hasMapsId;
@property (nonatomic) bool hasOpaqueGeoId;
@property (nonatomic) bool hasPlaceType;
@property (nonatomic) bool hasShouldCallPlacesForClientization;
@property (nonatomic, retain) GEOPDMapsIdentifier *mapsId;
@property (nonatomic) unsigned long long opaqueGeoId;
@property (nonatomic) int placeType;
@property (nonatomic) bool shouldCallPlacesForClientization;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsPlaceType:(id)arg1;
- (id)center;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (double)disambiguationRadiusMeters;
- (double)distance;
- (bool)hasCenter;
- (bool)hasDisambiguationRadiusMeters;
- (bool)hasDistance;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (bool)hasMapsId;
- (bool)hasOpaqueGeoId;
- (bool)hasPlaceType;
- (bool)hasShouldCallPlacesForClientization;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (id)mapsId;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)opaqueGeoId;
- (int)placeType;
- (id)placeTypeAsString:(int)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCenter:(id)arg1;
- (void)setDisambiguationRadiusMeters:(double)arg1;
- (void)setDistance:(double)arg1;
- (void)setHasDisambiguationRadiusMeters:(bool)arg1;
- (void)setHasDistance:(bool)arg1;
- (void)setHasOpaqueGeoId:(bool)arg1;
- (void)setHasPlaceType:(bool)arg1;
- (void)setHasShouldCallPlacesForClientization:(bool)arg1;
- (void)setMapsId:(id)arg1;
- (void)setOpaqueGeoId:(unsigned long long)arg1;
- (void)setPlaceType:(int)arg1;
- (void)setShouldCallPlacesForClientization:(bool)arg1;
- (bool)shouldCallPlacesForClientization;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
