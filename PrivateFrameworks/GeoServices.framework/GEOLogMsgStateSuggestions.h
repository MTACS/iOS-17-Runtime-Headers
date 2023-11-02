
@interface GEOLogMsgStateSuggestions : PBCodable <NSCopying> {
    int  _acSequenceNumber;
    NSMutableArray * _displayedResults;
    struct { 
        unsigned int has_acSequenceNumber : 1; 
        unsigned int has_searchFieldType : 1; 
        unsigned int has_selectedIndex : 1; 
        unsigned int read_displayedResults : 1; 
        unsigned int read_searchString : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    int  _searchFieldType;
    NSString * _searchString;
    int  _selectedIndex;
}

@property (nonatomic) int acSequenceNumber;
@property (nonatomic, retain) NSMutableArray *displayedResults;
@property (nonatomic) bool hasAcSequenceNumber;
@property (nonatomic) bool hasSearchFieldType;
@property (nonatomic, readonly) bool hasSearchString;
@property (nonatomic) bool hasSelectedIndex;
@property (nonatomic) int searchFieldType;
@property (nonatomic, retain) NSString *searchString;
@property (nonatomic) int selectedIndex;

+ (Class)displayedResultType;
+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsSearchFieldType:(id)arg1;
- (int)acSequenceNumber;
- (void)addDisplayedResult:(id)arg1;
- (void)clearDisplayedResults;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)displayedResultAtIndex:(unsigned long long)arg1;
- (id)displayedResults;
- (unsigned long long)displayedResultsCount;
- (bool)hasAcSequenceNumber;
- (bool)hasSearchFieldType;
- (bool)hasSearchString;
- (bool)hasSelectedIndex;
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
- (int)searchFieldType;
- (id)searchFieldTypeAsString:(int)arg1;
- (id)searchString;
- (int)selectedIndex;
- (void)setAcSequenceNumber:(int)arg1;
- (void)setDisplayedResults:(id)arg1;
- (void)setHasAcSequenceNumber:(bool)arg1;
- (void)setHasSearchFieldType:(bool)arg1;
- (void)setHasSelectedIndex:(bool)arg1;
- (void)setSearchFieldType:(int)arg1;
- (void)setSearchString:(id)arg1;
- (void)setSelectedIndex:(int)arg1;
- (void)writeTo:(id)arg1;

@end
