
@interface NLXSchemaCDMMatchingSpan : SISchemaInstrumentationMessage {
    unsigned int  _endTokenIndex;
    struct { 
        unsigned int startTokenIndex : 1; 
        unsigned int endTokenIndex : 1; 
    }  _has;
    bool  _hasInternalSpanData;
    bool  _hasLabel;
    bool  _hasLinkId;
    bool  _hasUsoGraph;
    NLXSchemaCDMInternalSpanData * _internalSpanData;
    NSString * _label;
    SISchemaUUID * _linkId;
    NSArray * _matcherNames;
    unsigned int  _startTokenIndex;
    USOSchemaUSOGraph * _usoGraph;
}

@property (nonatomic) unsigned int endTokenIndex;
@property (nonatomic) bool hasEndTokenIndex;
@property (nonatomic) bool hasInternalSpanData;
@property (nonatomic) bool hasLabel;
@property (nonatomic) bool hasLinkId;
@property (nonatomic) bool hasStartTokenIndex;
@property (nonatomic) bool hasUsoGraph;
@property (nonatomic, retain) NLXSchemaCDMInternalSpanData *internalSpanData;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *label;
@property (nonatomic, retain) SISchemaUUID *linkId;
@property (nonatomic, copy) NSArray *matcherNames;
@property (nonatomic) unsigned int startTokenIndex;
@property (nonatomic, retain) USOSchemaUSOGraph *usoGraph;

- (void).cxx_destruct;
- (void)addMatcherNames:(int)arg1;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)clearMatcherNames;
- (void)deleteEndTokenIndex;
- (void)deleteInternalSpanData;
- (void)deleteLabel;
- (void)deleteLinkId;
- (void)deleteMatcherNames;
- (void)deleteStartTokenIndex;
- (void)deleteUsoGraph;
- (id)dictionaryRepresentation;
- (unsigned int)endTokenIndex;
- (bool)hasEndTokenIndex;
- (bool)hasInternalSpanData;
- (bool)hasLabel;
- (bool)hasLinkId;
- (bool)hasStartTokenIndex;
- (bool)hasUsoGraph;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (id)internalSpanData;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)label;
- (id)linkId;
- (id)matcherNames;
- (int)matcherNamesAtIndex:(unsigned long long)arg1;
- (unsigned long long)matcherNamesCount;
- (bool)readFrom:(id)arg1;
- (void)setEndTokenIndex:(unsigned int)arg1;
- (void)setHasEndTokenIndex:(bool)arg1;
- (void)setHasInternalSpanData:(bool)arg1;
- (void)setHasLabel:(bool)arg1;
- (void)setHasLinkId:(bool)arg1;
- (void)setHasStartTokenIndex:(bool)arg1;
- (void)setHasUsoGraph:(bool)arg1;
- (void)setInternalSpanData:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setLinkId:(id)arg1;
- (void)setMatcherNames:(id)arg1;
- (void)setStartTokenIndex:(unsigned int)arg1;
- (void)setUsoGraph:(id)arg1;
- (unsigned int)startTokenIndex;
- (id)suppressMessageUnderConditions;
- (id)usoGraph;
- (void)writeTo:(id)arg1;

@end
