
@interface GEORPSuggestionList : PBCodable <NSCopying> {
    GEOPDPlaceRequest * _autocompleteRequest;
    GEOPDPlaceResponse * _autocompleteResponse;
    NSMutableArray * _entrys;
    struct { 
        unsigned int read_autocompleteRequest : 1; 
        unsigned int read_autocompleteResponse : 1; 
        unsigned int read_entrys : 1; 
        unsigned int read_query : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSString * _query;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
}

@property (nonatomic, retain) GEOPDPlaceRequest *autocompleteRequest;
@property (nonatomic, retain) GEOPDPlaceResponse *autocompleteResponse;
@property (nonatomic, retain) NSMutableArray *entrys;
@property (nonatomic, readonly) bool hasAutocompleteRequest;
@property (nonatomic, readonly) bool hasAutocompleteResponse;
@property (nonatomic, readonly) bool hasQuery;
@property (nonatomic, retain) NSString *query;

+ (Class)entryType;
+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)addEntry:(id)arg1;
- (id)autocompleteRequest;
- (id)autocompleteResponse;
- (void)clearEntrys;
- (void)clearSensitiveFields:(unsigned long long)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)entryAtIndex:(unsigned long long)arg1;
- (id)entrys;
- (unsigned long long)entrysCount;
- (bool)hasAutocompleteRequest;
- (bool)hasAutocompleteResponse;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (bool)hasQuery;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (id)query;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAutocompleteRequest:(id)arg1;
- (void)setAutocompleteResponse:(id)arg1;
- (void)setEntrys:(id)arg1;
- (void)setQuery:(id)arg1;
- (void)writeTo:(id)arg1;

@end
