
@interface GEOWaypointID : PBCodable <NSCopying> {
    int  _addressGeocodeAccuracyHint;
    GEOStructuredAddress * _addressHint;
    struct { 
        unsigned int has_muid : 1; 
        unsigned int has_resultProviderId : 1; 
        unsigned int has_addressGeocodeAccuracyHint : 1; 
        unsigned int has_placeTypeHint : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_addressHint : 1; 
        unsigned int read_formattedAddressLineHints : 1; 
        unsigned int read_locationHint : 1; 
        unsigned int read_placeNameHint : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSMutableArray * _formattedAddressLineHints;
    GEOLatLng * _locationHint;
    unsigned long long  _muid;
    NSString * _placeNameHint;
    int  _placeTypeHint;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    unsigned long long  _resultProviderId;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) int addressGeocodeAccuracyHint;
@property (nonatomic, retain) GEOStructuredAddress *addressHint;
@property (nonatomic, retain) NSMutableArray *formattedAddressLineHints;
@property (nonatomic) bool hasAddressGeocodeAccuracyHint;
@property (nonatomic, readonly) bool hasAddressHint;
@property (nonatomic, readonly) bool hasLocationHint;
@property (nonatomic) bool hasMuid;
@property (nonatomic, readonly) bool hasPlaceNameHint;
@property (nonatomic) bool hasPlaceTypeHint;
@property (nonatomic) bool hasResultProviderId;
@property (nonatomic, retain) GEOLatLng *locationHint;
@property (nonatomic) unsigned long long muid;
@property (nonatomic, retain) NSString *placeNameHint;
@property (nonatomic) int placeTypeHint;
@property (nonatomic) unsigned long long resultProviderId;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)formattedAddressLineHintType;
+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsAddressGeocodeAccuracyHint:(id)arg1;
- (int)StringAsPlaceTypeHint:(id)arg1;
- (void)addFormattedAddressLineHint:(id)arg1;
- (int)addressGeocodeAccuracyHint;
- (id)addressGeocodeAccuracyHintAsString:(int)arg1;
- (id)addressHint;
- (void)clearFormattedAddressLineHints;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)formattedAddressLineHintAtIndex:(unsigned long long)arg1;
- (id)formattedAddressLineHints;
- (unsigned long long)formattedAddressLineHintsCount;
- (bool)hasAddressGeocodeAccuracyHint;
- (bool)hasAddressHint;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (bool)hasLocationHint;
- (bool)hasMuid;
- (bool)hasPlaceNameHint;
- (bool)hasPlaceTypeHint;
- (bool)hasResultProviderId;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (id)locationHint;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)muid;
- (id)placeNameHint;
- (int)placeTypeHint;
- (id)placeTypeHintAsString:(int)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned long long)resultProviderId;
- (void)setAddressGeocodeAccuracyHint:(int)arg1;
- (void)setAddressHint:(id)arg1;
- (void)setFormattedAddressLineHints:(id)arg1;
- (void)setHasAddressGeocodeAccuracyHint:(bool)arg1;
- (void)setHasMuid:(bool)arg1;
- (void)setHasPlaceTypeHint:(bool)arg1;
- (void)setHasResultProviderId:(bool)arg1;
- (void)setLocationHint:(id)arg1;
- (void)setMuid:(unsigned long long)arg1;
- (void)setPlaceNameHint:(id)arg1;
- (void)setPlaceTypeHint:(int)arg1;
- (void)setResultProviderId:(unsigned long long)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
