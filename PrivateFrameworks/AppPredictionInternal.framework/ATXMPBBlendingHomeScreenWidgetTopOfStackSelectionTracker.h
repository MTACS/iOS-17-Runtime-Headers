
@interface ATXMPBBlendingHomeScreenWidgetTopOfStackSelectionTracker : PBCodable <NSCopying> {
    NSString * _abGroup;
    NSString * _clientModelABGroup;
    NSString * _clientModelIdOfHighestRankingSuggestion;
    NSString * _execuableTypeOfHighestRankingSuggestion;
    struct { 
        unsigned int selectionType : 1; 
        unsigned int widgetsInStack : 1; 
    }  _has;
    NSString * _highestConfidenceCategory;
    NSString * _layoutType;
    int  _selectionType;
    unsigned int  _widgetsInStack;
}

@property (nonatomic, retain) NSString *abGroup;
@property (nonatomic, retain) NSString *clientModelABGroup;
@property (nonatomic, retain) NSString *clientModelIdOfHighestRankingSuggestion;
@property (nonatomic, retain) NSString *execuableTypeOfHighestRankingSuggestion;
@property (nonatomic, readonly) bool hasAbGroup;
@property (nonatomic, readonly) bool hasClientModelABGroup;
@property (nonatomic, readonly) bool hasClientModelIdOfHighestRankingSuggestion;
@property (nonatomic, readonly) bool hasExecuableTypeOfHighestRankingSuggestion;
@property (nonatomic, readonly) bool hasHighestConfidenceCategory;
@property (nonatomic, readonly) bool hasLayoutType;
@property (nonatomic) bool hasSelectionType;
@property (nonatomic) bool hasWidgetsInStack;
@property (nonatomic, retain) NSString *highestConfidenceCategory;
@property (nonatomic, retain) NSString *layoutType;
@property (nonatomic) int selectionType;
@property (nonatomic) unsigned int widgetsInStack;

- (void).cxx_destruct;
- (int)StringAsSelectionType:(id)arg1;
- (id)abGroup;
- (id)clientModelABGroup;
- (id)clientModelIdOfHighestRankingSuggestion;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)execuableTypeOfHighestRankingSuggestion;
- (bool)hasAbGroup;
- (bool)hasClientModelABGroup;
- (bool)hasClientModelIdOfHighestRankingSuggestion;
- (bool)hasExecuableTypeOfHighestRankingSuggestion;
- (bool)hasHighestConfidenceCategory;
- (bool)hasLayoutType;
- (bool)hasSelectionType;
- (bool)hasWidgetsInStack;
- (unsigned long long)hash;
- (id)highestConfidenceCategory;
- (bool)isEqual:(id)arg1;
- (id)layoutType;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (int)selectionType;
- (id)selectionTypeAsString:(int)arg1;
- (void)setAbGroup:(id)arg1;
- (void)setClientModelABGroup:(id)arg1;
- (void)setClientModelIdOfHighestRankingSuggestion:(id)arg1;
- (void)setExecuableTypeOfHighestRankingSuggestion:(id)arg1;
- (void)setHasSelectionType:(bool)arg1;
- (void)setHasWidgetsInStack:(bool)arg1;
- (void)setHighestConfidenceCategory:(id)arg1;
- (void)setLayoutType:(id)arg1;
- (void)setSelectionType:(int)arg1;
- (void)setWidgetsInStack:(unsigned int)arg1;
- (unsigned int)widgetsInStack;
- (void)writeTo:(id)arg1;

@end
