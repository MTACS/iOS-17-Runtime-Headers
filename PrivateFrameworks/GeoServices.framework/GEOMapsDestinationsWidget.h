
@interface GEOMapsDestinationsWidget : PBCodable <NSCopying> {
    bool  _everExpanded;
    struct { 
        unsigned int has_tappedItemIndex : 1; 
        unsigned int has_everExpanded : 1; 
        unsigned int has_initiallyExpanded : 1; 
    }  _flags;
    bool  _initiallyExpanded;
    NSMutableArray * _proactiveItems;
    int  _tappedItemIndex;
}

@property (nonatomic) bool everExpanded;
@property (nonatomic) bool hasEverExpanded;
@property (nonatomic) bool hasInitiallyExpanded;
@property (nonatomic) bool hasTappedItemIndex;
@property (nonatomic) bool initiallyExpanded;
@property (nonatomic, retain) NSMutableArray *proactiveItems;
@property (nonatomic) int tappedItemIndex;

+ (bool)isValid:(id)arg1;
+ (Class)proactiveItemType;

- (void).cxx_destruct;
- (void)addProactiveItem:(id)arg1;
- (void)clearProactiveItems;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)everExpanded;
- (bool)hasEverExpanded;
- (bool)hasInitiallyExpanded;
- (bool)hasTappedItemIndex;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)initiallyExpanded;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (id)proactiveItemAtIndex:(unsigned long long)arg1;
- (id)proactiveItems;
- (unsigned long long)proactiveItemsCount;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setEverExpanded:(bool)arg1;
- (void)setHasEverExpanded:(bool)arg1;
- (void)setHasInitiallyExpanded:(bool)arg1;
- (void)setHasTappedItemIndex:(bool)arg1;
- (void)setInitiallyExpanded:(bool)arg1;
- (void)setProactiveItems:(id)arg1;
- (void)setTappedItemIndex:(int)arg1;
- (int)tappedItemIndex;
- (void)writeTo:(id)arg1;

@end
