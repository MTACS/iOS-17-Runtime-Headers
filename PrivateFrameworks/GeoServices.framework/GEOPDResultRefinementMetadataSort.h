
@interface GEOPDResultRefinementMetadataSort : PBCodable <NSCopying> {
    NSString * _customSortFunctionIdentifier;
    bool  _enableServerOverriddenPositioning;
    struct { 
        unsigned int has_selectionFromQuerySequenceNumber : 1; 
        unsigned int has_serverOverriddenPosition : 1; 
        unsigned int has_sortType : 1; 
        unsigned int has_enableServerOverriddenPositioning : 1; 
        unsigned int has_selectionFromQuery : 1; 
    }  _flags;
    bool  _selectionFromQuery;
    unsigned int  _selectionFromQuerySequenceNumber;
    unsigned int  _serverOverriddenPosition;
    int  _sortType;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSString *customSortFunctionIdentifier;
@property (nonatomic) bool enableServerOverriddenPositioning;
@property (nonatomic, readonly) bool hasCustomSortFunctionIdentifier;
@property (nonatomic) bool hasEnableServerOverriddenPositioning;
@property (nonatomic) bool hasSelectionFromQuery;
@property (nonatomic) bool hasSelectionFromQuerySequenceNumber;
@property (nonatomic) bool hasServerOverriddenPosition;
@property (nonatomic) bool hasSortType;
@property (nonatomic) bool selectionFromQuery;
@property (nonatomic) unsigned int selectionFromQuerySequenceNumber;
@property (nonatomic) unsigned int serverOverriddenPosition;
@property (nonatomic) int sortType;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsSortType:(id)arg1;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)customSortFunctionIdentifier;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)enableServerOverriddenPositioning;
- (bool)hasCustomSortFunctionIdentifier;
- (bool)hasEnableServerOverriddenPositioning;
- (bool)hasSelectionFromQuery;
- (bool)hasSelectionFromQuerySequenceNumber;
- (bool)hasServerOverriddenPosition;
- (bool)hasSortType;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (bool)selectionFromQuery;
- (unsigned int)selectionFromQuerySequenceNumber;
- (unsigned int)serverOverriddenPosition;
- (void)setCustomSortFunctionIdentifier:(id)arg1;
- (void)setEnableServerOverriddenPositioning:(bool)arg1;
- (void)setHasEnableServerOverriddenPositioning:(bool)arg1;
- (void)setHasSelectionFromQuery:(bool)arg1;
- (void)setHasSelectionFromQuerySequenceNumber:(bool)arg1;
- (void)setHasServerOverriddenPosition:(bool)arg1;
- (void)setHasSortType:(bool)arg1;
- (void)setSelectionFromQuery:(bool)arg1;
- (void)setSelectionFromQuerySequenceNumber:(unsigned int)arg1;
- (void)setServerOverriddenPosition:(unsigned int)arg1;
- (void)setSortType:(int)arg1;
- (int)sortType;
- (id)sortTypeAsString:(int)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
