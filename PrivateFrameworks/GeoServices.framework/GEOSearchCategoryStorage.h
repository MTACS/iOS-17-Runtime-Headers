
@interface GEOSearchCategoryStorage : PBCodable <NSCopying> {
    GEOPDAutocompleteEntry * _autocompleteEntry;
    GEOPDBrowseCategory * _browseCategory;
    struct { 
        unsigned int read_unknownFields : 1; 
        unsigned int read_autocompleteEntry : 1; 
        unsigned int read_browseCategory : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) GEOPDAutocompleteEntry *autocompleteEntry;
@property (nonatomic, retain) GEOPDBrowseCategory *browseCategory;
@property (nonatomic, readonly) bool hasAutocompleteEntry;
@property (nonatomic, readonly) bool hasBrowseCategory;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (id)autocompleteEntry;
- (id)browseCategory;
- (void)clearSensitiveFields:(unsigned long long)arg1;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAutocompleteEntry;
- (bool)hasBrowseCategory;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (id)initWithSearchCategory:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAutocompleteEntry:(id)arg1;
- (void)setBrowseCategory:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
