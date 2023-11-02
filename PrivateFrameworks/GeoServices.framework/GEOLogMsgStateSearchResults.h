
@interface GEOLogMsgStateSearchResults : PBCodable <NSCopying> {
    struct { 
        unsigned int has_includesEnrichedResult : 1; 
        unsigned int read_searchQuery : 1; 
        unsigned int read_searchResults : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    bool  _includesEnrichedResult;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    NSString * _searchQuery;
    NSMutableArray * _searchResults;
}

@property (nonatomic) bool hasIncludesEnrichedResult;
@property (nonatomic, readonly) bool hasSearchQuery;
@property (nonatomic) bool includesEnrichedResult;
@property (nonatomic, retain) NSString *searchQuery;
@property (nonatomic, retain) NSMutableArray *searchResults;

+ (bool)isValid:(id)arg1;
+ (Class)searchResultsType;

- (void).cxx_destruct;
- (void)addSearchResults:(id)arg1;
- (void)clearSearchResults;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIncludesEnrichedResult;
- (bool)hasSearchQuery;
- (unsigned long long)hash;
- (bool)includesEnrichedResult;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (id)searchQuery;
- (id)searchResults;
- (id)searchResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)searchResultsCount;
- (void)setHasIncludesEnrichedResult:(bool)arg1;
- (void)setIncludesEnrichedResult:(bool)arg1;
- (void)setSearchQuery:(id)arg1;
- (void)setSearchResults:(id)arg1;
- (void)writeTo:(id)arg1;

@end
