
@interface GEORPFeedbackLayoutConfigParameters : PBCodable <NSCopying> {
    GEOLatLng * _coordinate;
    struct { 
        unsigned int has_formType : 1; 
        unsigned int read_coordinate : 1; 
        unsigned int read_mapRegion : 1; 
        unsigned int read_mapsId : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    int  _formType;
    GEOMapRegion * _mapRegion;
    GEOPDMapsIdentifier * _mapsId;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
}

@property (nonatomic, retain) GEOLatLng *coordinate;
@property (nonatomic) int formType;
@property (nonatomic, readonly) bool hasCoordinate;
@property (nonatomic) bool hasFormType;
@property (nonatomic, readonly) bool hasMapRegion;
@property (nonatomic, readonly) bool hasMapsId;
@property (nonatomic, retain) GEOMapRegion *mapRegion;
@property (nonatomic, retain) GEOPDMapsIdentifier *mapsId;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsFormType:(id)arg1;
- (id)coordinate;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)formType;
- (id)formTypeAsString:(int)arg1;
- (bool)hasCoordinate;
- (bool)hasFormType;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (bool)hasMapRegion;
- (bool)hasMapsId;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (id)mapRegion;
- (id)mapsId;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCoordinate:(id)arg1;
- (void)setFormType:(int)arg1;
- (void)setHasFormType:(bool)arg1;
- (void)setMapRegion:(id)arg1;
- (void)setMapsId:(id)arg1;
- (void)writeTo:(id)arg1;

@end
