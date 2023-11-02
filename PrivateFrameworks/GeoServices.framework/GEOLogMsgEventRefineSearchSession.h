
@interface GEOLogMsgEventRefineSearchSession : PBCodable <NSCopying> {
    struct { 
        unsigned int has_refineSearchType : 1; 
        unsigned int has_searchType : 1; 
        unsigned int read_searchString : 1; 
        unsigned int read_suggestionItems : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    int  _refineSearchType;
    NSString * _searchString;
    int  _searchType;
    NSMutableArray * _suggestionItems;
}

@property (nonatomic) bool hasRefineSearchType;
@property (nonatomic, readonly) bool hasSearchString;
@property (nonatomic) bool hasSearchType;
@property (nonatomic) int refineSearchType;
@property (nonatomic, retain) NSString *searchString;
@property (nonatomic) int searchType;
@property (nonatomic, retain) NSMutableArray *suggestionItems;

+ (bool)isValid:(id)arg1;
+ (Class)suggestionItemType;

- (void).cxx_destruct;
- (int)StringAsRefineSearchType:(id)arg1;
- (int)StringAsSearchType:(id)arg1;
- (void)addSuggestionItem:(id)arg1;
- (void)clearSuggestionItems;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasRefineSearchType;
- (bool)hasSearchString;
- (bool)hasSearchType;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (int)refineSearchType;
- (id)refineSearchTypeAsString:(int)arg1;
- (id)searchString;
- (int)searchType;
- (id)searchTypeAsString:(int)arg1;
- (void)setHasRefineSearchType:(bool)arg1;
- (void)setHasSearchType:(bool)arg1;
- (void)setRefineSearchType:(int)arg1;
- (void)setSearchString:(id)arg1;
- (void)setSearchType:(int)arg1;
- (void)setSuggestionItems:(id)arg1;
- (id)suggestionItemAtIndex:(unsigned long long)arg1;
- (id)suggestionItems;
- (unsigned long long)suggestionItemsCount;
- (void)writeTo:(id)arg1;

@end
