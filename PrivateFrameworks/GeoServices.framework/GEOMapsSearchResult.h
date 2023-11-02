
@interface GEOMapsSearchResult : PBCodable <NSCopying> {
    GEOAddress * _address;
    struct { 
        unsigned int has_muid : 1; 
        unsigned int read_address : 1; 
        unsigned int read_mapsId : 1; 
        unsigned int read_placeActionDetails : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    GEOPDMapsIdentifier * _mapsId;
    unsigned long long  _muid;
    GEOPlaceActionDetails * _placeActionDetails;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
}

@property (nonatomic, retain) GEOAddress *address;
@property (nonatomic, readonly) bool hasAddress;
@property (nonatomic, readonly) bool hasMapsId;
@property (nonatomic) bool hasMuid;
@property (nonatomic, readonly) bool hasPlaceActionDetails;
@property (nonatomic, retain) GEOPDMapsIdentifier *mapsId;
@property (nonatomic) unsigned long long muid;
@property (nonatomic, retain) GEOPlaceActionDetails *placeActionDetails;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (id)address;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAddress;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (bool)hasMapsId;
- (bool)hasMuid;
- (bool)hasPlaceActionDetails;
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
- (id)placeActionDetails;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAddress:(id)arg1;
- (void)setHasMuid:(bool)arg1;
- (void)setMapsId:(id)arg1;
- (void)setMuid:(unsigned long long)arg1;
- (void)setPlaceActionDetails:(id)arg1;
- (void)writeTo:(id)arg1;

@end
