
@interface GEORPUserSearchInput : PBCodable <NSCopying> {
    GEOPDAutocompleteEntry * _autocompleteEntry;
    GEOLatLng * _coordinate;
    struct { 
        unsigned int has_origin : 1; 
        unsigned int read_autocompleteEntry : 1; 
        unsigned int read_coordinate : 1; 
        unsigned int read_place : 1; 
        unsigned int read_searchString : 1; 
        unsigned int read_singleLineAddressString : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    int  _origin;
    GEOPDPlace * _place;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    NSString * _searchString;
    NSString * _singleLineAddressString;
}

@property (nonatomic, retain) GEOPDAutocompleteEntry *autocompleteEntry;
@property (nonatomic, retain) GEOLatLng *coordinate;
@property (nonatomic, readonly) bool hasAutocompleteEntry;
@property (nonatomic, readonly) bool hasCoordinate;
@property (nonatomic) bool hasOrigin;
@property (nonatomic, readonly) bool hasPlace;
@property (nonatomic, readonly) bool hasSearchString;
@property (nonatomic, readonly) bool hasSingleLineAddressString;
@property (nonatomic) int origin;
@property (nonatomic, retain) GEOPDPlace *place;
@property (nonatomic, retain) NSString *searchString;
@property (nonatomic, retain) NSString *singleLineAddressString;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsOrigin:(id)arg1;
- (id)autocompleteEntry;
- (id)coordinate;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAutocompleteEntry;
- (bool)hasCoordinate;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (bool)hasOrigin;
- (bool)hasPlace;
- (bool)hasSearchString;
- (bool)hasSingleLineAddressString;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (int)origin;
- (id)originAsString:(int)arg1;
- (id)place;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (id)searchString;
- (void)setAutocompleteEntry:(id)arg1;
- (void)setCoordinate:(id)arg1;
- (void)setHasOrigin:(bool)arg1;
- (void)setOrigin:(int)arg1;
- (void)setPlace:(id)arg1;
- (void)setSearchString:(id)arg1;
- (void)setSingleLineAddressString:(id)arg1;
- (id)singleLineAddressString;
- (void)writeTo:(id)arg1;

@end
