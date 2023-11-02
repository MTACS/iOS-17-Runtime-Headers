
@interface GEOPDAutocompleteEntryBusiness : PBCodable <NSCopying> {
    double  _distance;
    struct { 
        unsigned int has_distance : 1; 
        unsigned int has_muid : 1; 
        unsigned int has_resultProviderId : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_mapsId : 1; 
        unsigned int read_place : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    GEOPDMapsIdentifier * _mapsId;
    unsigned long long  _muid;
    GEOPDPlace * _place;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    int  _resultProviderId;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) double distance;
@property (nonatomic) bool hasDistance;
@property (nonatomic, readonly) bool hasMapsId;
@property (nonatomic) bool hasMuid;
@property (nonatomic, readonly) bool hasPlace;
@property (nonatomic) bool hasResultProviderId;
@property (nonatomic, retain) GEOPDMapsIdentifier *mapsId;
@property (nonatomic) unsigned long long muid;
@property (nonatomic, retain) GEOPDPlace *place;
@property (nonatomic) int resultProviderId;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)clearSensitiveFields:(unsigned long long)arg1;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (double)distance;
- (bool)hasDistance;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (bool)hasMapsId;
- (bool)hasMuid;
- (bool)hasPlace;
- (bool)hasResultProviderId;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (id)mapsId;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)muid;
- (id)place;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (int)resultProviderId;
- (void)setDistance:(double)arg1;
- (void)setHasDistance:(bool)arg1;
- (void)setHasMuid:(bool)arg1;
- (void)setHasResultProviderId:(bool)arg1;
- (void)setMapsId:(id)arg1;
- (void)setMuid:(unsigned long long)arg1;
- (void)setPlace:(id)arg1;
- (void)setResultProviderId:(int)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
