
@interface GEOLogMsgEventListInteractionSession : PBCodable <NSCopying> {
    struct { 
        unsigned int has_listType : 1; 
        unsigned int read_listResultItems : 1; 
        unsigned int read_searchString : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSMutableArray * _listResultItems;
    int  _listType;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    NSString * _searchString;
}

@property (nonatomic) bool hasListType;
@property (nonatomic, readonly) bool hasSearchString;
@property (nonatomic, retain) NSMutableArray *listResultItems;
@property (nonatomic) int listType;
@property (nonatomic, retain) NSString *searchString;

+ (bool)isValid:(id)arg1;
+ (Class)listResultItemType;

- (void).cxx_destruct;
- (int)StringAsListType:(id)arg1;
- (void)addListResultItem:(id)arg1;
- (void)clearListResultItems;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasListType;
- (bool)hasSearchString;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (id)listResultItemAtIndex:(unsigned long long)arg1;
- (id)listResultItems;
- (unsigned long long)listResultItemsCount;
- (int)listType;
- (id)listTypeAsString:(int)arg1;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (id)searchString;
- (void)setHasListType:(bool)arg1;
- (void)setListResultItems:(id)arg1;
- (void)setListType:(int)arg1;
- (void)setSearchString:(id)arg1;
- (void)writeTo:(id)arg1;

@end
