
@interface FLOWSchemaFLOWMediaPlayerPlaybackContextTier1 : SISchemaInstrumentationMessage {
    unsigned int  _adamId;
    NSString * _adamIdString;
    NSString * _contentTitle;
    struct { 
        unsigned int adamId : 1; 
    }  _has;
    bool  _hasAdamIdString;
    bool  _hasContentTitle;
    bool  _hasLinkId;
    bool  _hasU2UsoGraph;
    bool  _hasU2UsoGraphTier1;
    SISchemaUUID * _linkId;
    NSArray * _searchResults;
    USOSchemaUSOGraph * _u2UsoGraph;
    USOSchemaUSOGraphTier1 * _u2UsoGraphTier1;
}

@property (nonatomic) unsigned int adamId;
@property (nonatomic, copy) NSString *adamIdString;
@property (nonatomic, copy) NSString *contentTitle;
@property (nonatomic) bool hasAdamId;
@property (nonatomic) bool hasAdamIdString;
@property (nonatomic) bool hasContentTitle;
@property (nonatomic) bool hasLinkId;
@property (nonatomic) bool hasU2UsoGraph;
@property (nonatomic) bool hasU2UsoGraphTier1;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaUUID *linkId;
@property (nonatomic, copy) NSArray *searchResults;
@property (nonatomic, retain) USOSchemaUSOGraph *u2UsoGraph;
@property (nonatomic, retain) USOSchemaUSOGraphTier1 *u2UsoGraphTier1;

- (void).cxx_destruct;
- (unsigned int)adamId;
- (id)adamIdString;
- (void)addSearchResults:(id)arg1;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)clearSearchResults;
- (id)contentTitle;
- (void)deleteAdamId;
- (void)deleteAdamIdString;
- (void)deleteContentTitle;
- (void)deleteLinkId;
- (void)deleteSearchResults;
- (void)deleteU2UsoGraph;
- (void)deleteU2UsoGraphTier1;
- (id)dictionaryRepresentation;
- (bool)hasAdamId;
- (bool)hasAdamIdString;
- (bool)hasContentTitle;
- (bool)hasLinkId;
- (bool)hasU2UsoGraph;
- (bool)hasU2UsoGraphTier1;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)linkId;
- (bool)readFrom:(id)arg1;
- (id)searchResults;
- (id)searchResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)searchResultsCount;
- (void)setAdamId:(unsigned int)arg1;
- (void)setAdamIdString:(id)arg1;
- (void)setContentTitle:(id)arg1;
- (void)setHasAdamId:(bool)arg1;
- (void)setHasAdamIdString:(bool)arg1;
- (void)setHasContentTitle:(bool)arg1;
- (void)setHasLinkId:(bool)arg1;
- (void)setHasU2UsoGraph:(bool)arg1;
- (void)setHasU2UsoGraphTier1:(bool)arg1;
- (void)setLinkId:(id)arg1;
- (void)setSearchResults:(id)arg1;
- (void)setU2UsoGraph:(id)arg1;
- (void)setU2UsoGraphTier1:(id)arg1;
- (id)suppressMessageUnderConditions;
- (id)u2UsoGraph;
- (id)u2UsoGraphTier1;
- (void)writeTo:(id)arg1;

@end
