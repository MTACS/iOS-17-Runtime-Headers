
@interface GEOSubactionMetaData : PBCodable <NSCopying> {
    NSMutableArray * _childItemSubactionTypes;
    NSString * _displayedString;
    NSMutableArray * _displayedTexts;
    struct { 
        unsigned int has_selectedSubactionIndex : 1; 
        unsigned int has_subactionType : 1; 
        unsigned int read_subactions : 1; 
        unsigned int read_childItemSubactionTypes : 1; 
        unsigned int read_displayedString : 1; 
        unsigned int read_displayedTexts : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    int  _selectedSubactionIndex;
    int  _subactionType;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _subactions;
}

@property (nonatomic, retain) NSMutableArray *childItemSubactionTypes;
@property (nonatomic, retain) NSString *displayedString;
@property (nonatomic, retain) NSMutableArray *displayedTexts;
@property (nonatomic, readonly) bool hasDisplayedString;
@property (nonatomic) bool hasSelectedSubactionIndex;
@property (nonatomic) bool hasSubactionType;
@property (nonatomic) int selectedSubactionIndex;
@property (nonatomic) int subactionType;
@property (nonatomic, readonly) int*subactions;
@property (nonatomic, readonly) unsigned long long subactionsCount;

+ (Class)childItemSubactionTypeType;
+ (Class)displayedTextType;
+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsSubactionType:(id)arg1;
- (int)StringAsSubactions:(id)arg1;
- (void)addChildItemSubactionType:(id)arg1;
- (void)addDisplayedText:(id)arg1;
- (void)addSubaction:(int)arg1;
- (id)childItemSubactionTypeAtIndex:(unsigned long long)arg1;
- (id)childItemSubactionTypes;
- (unsigned long long)childItemSubactionTypesCount;
- (void)clearChildItemSubactionTypes;
- (void)clearDisplayedTexts;
- (void)clearSubactions;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)displayedString;
- (id)displayedTextAtIndex:(unsigned long long)arg1;
- (id)displayedTexts;
- (unsigned long long)displayedTextsCount;
- (bool)hasDisplayedString;
- (bool)hasSelectedSubactionIndex;
- (bool)hasSubactionType;
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
- (int)selectedSubactionIndex;
- (void)setChildItemSubactionTypes:(id)arg1;
- (void)setDisplayedString:(id)arg1;
- (void)setDisplayedTexts:(id)arg1;
- (void)setHasSelectedSubactionIndex:(bool)arg1;
- (void)setHasSubactionType:(bool)arg1;
- (void)setSelectedSubactionIndex:(int)arg1;
- (void)setSubactionType:(int)arg1;
- (void)setSubactions:(int*)arg1 count:(unsigned long long)arg2;
- (int)subactionAtIndex:(unsigned long long)arg1;
- (int)subactionType;
- (id)subactionTypeAsString:(int)arg1;
- (int*)subactions;
- (id)subactionsAsString:(int)arg1;
- (unsigned long long)subactionsCount;
- (void)writeTo:(id)arg1;

@end
