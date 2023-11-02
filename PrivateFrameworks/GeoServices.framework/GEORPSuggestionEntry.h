
@interface GEORPSuggestionEntry : PBCodable <NSCopying> {
    NSMutableArray * _displayLines;
    struct { 
        unsigned int has_serverSearchCompletionEntryIndex : 1; 
        unsigned int has_serverSearchCompletionSectionIndex : 1; 
        unsigned int has_type : 1; 
    }  _flags;
    unsigned int  _serverSearchCompletionEntryIndex;
    unsigned int  _serverSearchCompletionSectionIndex;
    int  _type;
}

@property (nonatomic, retain) NSMutableArray *displayLines;
@property (nonatomic) bool hasServerSearchCompletionEntryIndex;
@property (nonatomic) bool hasServerSearchCompletionSectionIndex;
@property (nonatomic) bool hasType;
@property (nonatomic) unsigned int serverSearchCompletionEntryIndex;
@property (nonatomic) unsigned int serverSearchCompletionSectionIndex;
@property (nonatomic) int type;

+ (Class)displayLineType;
+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsType:(id)arg1;
- (void)addDisplayLine:(id)arg1;
- (void)clearDisplayLines;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)displayLineAtIndex:(unsigned long long)arg1;
- (id)displayLines;
- (unsigned long long)displayLinesCount;
- (bool)hasServerSearchCompletionEntryIndex;
- (bool)hasServerSearchCompletionSectionIndex;
- (bool)hasType;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned int)serverSearchCompletionEntryIndex;
- (unsigned int)serverSearchCompletionSectionIndex;
- (void)setDisplayLines:(id)arg1;
- (void)setHasServerSearchCompletionEntryIndex:(bool)arg1;
- (void)setHasServerSearchCompletionSectionIndex:(bool)arg1;
- (void)setHasType:(bool)arg1;
- (void)setServerSearchCompletionEntryIndex:(unsigned int)arg1;
- (void)setServerSearchCompletionSectionIndex:(unsigned int)arg1;
- (void)setType:(int)arg1;
- (int)type;
- (id)typeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
