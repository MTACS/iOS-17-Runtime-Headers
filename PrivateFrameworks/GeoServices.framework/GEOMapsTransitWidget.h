
@interface GEOMapsTransitWidget : PBCodable <NSCopying> {
    bool  _everExpanded;
    struct { 
        unsigned int has_tappedItemIndex : 1; 
        unsigned int has_transitMessageType : 1; 
        unsigned int has_everExpanded : 1; 
        unsigned int has_initiallyExpanded : 1; 
    }  _flags;
    bool  _initiallyExpanded;
    int  _tappedItemIndex;
    NSMutableArray * _transitIncidentItems;
    int  _transitMessageType;
}

@property (nonatomic) bool everExpanded;
@property (nonatomic) bool hasEverExpanded;
@property (nonatomic) bool hasInitiallyExpanded;
@property (nonatomic) bool hasTappedItemIndex;
@property (nonatomic) bool hasTransitMessageType;
@property (nonatomic) bool initiallyExpanded;
@property (nonatomic) int tappedItemIndex;
@property (nonatomic, retain) NSMutableArray *transitIncidentItems;
@property (nonatomic) int transitMessageType;

+ (bool)isValid:(id)arg1;
+ (Class)transitIncidentItemType;

- (void).cxx_destruct;
- (int)StringAsTransitMessageType:(id)arg1;
- (void)addTransitIncidentItem:(id)arg1;
- (void)clearTransitIncidentItems;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)everExpanded;
- (bool)hasEverExpanded;
- (bool)hasInitiallyExpanded;
- (bool)hasTappedItemIndex;
- (bool)hasTransitMessageType;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)initiallyExpanded;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setEverExpanded:(bool)arg1;
- (void)setHasEverExpanded:(bool)arg1;
- (void)setHasInitiallyExpanded:(bool)arg1;
- (void)setHasTappedItemIndex:(bool)arg1;
- (void)setHasTransitMessageType:(bool)arg1;
- (void)setInitiallyExpanded:(bool)arg1;
- (void)setTappedItemIndex:(int)arg1;
- (void)setTransitIncidentItems:(id)arg1;
- (void)setTransitMessageType:(int)arg1;
- (int)tappedItemIndex;
- (id)transitIncidentItemAtIndex:(unsigned long long)arg1;
- (id)transitIncidentItems;
- (unsigned long long)transitIncidentItemsCount;
- (int)transitMessageType;
- (id)transitMessageTypeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
