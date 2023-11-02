
@interface EXPSearchSchemaEXPSearchSessionExperiments : SISchemaInstrumentationMessage {
    NSArray * _activeExperiments;
    bool  _hasSearchSessionId;
    SISchemaUUID * _searchSessionId;
}

@property (nonatomic, copy) NSArray *activeExperiments;
@property (nonatomic) bool hasSearchSessionId;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaUUID *searchSessionId;

- (void).cxx_destruct;
- (id)activeExperiments;
- (id)activeExperimentsAtIndex:(unsigned long long)arg1;
- (unsigned long long)activeExperimentsCount;
- (void)addActiveExperiments:(id)arg1;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)clearActiveExperiments;
- (void)deleteActiveExperiments;
- (void)deleteSearchSessionId;
- (id)dictionaryRepresentation;
- (bool)hasSearchSessionId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (id)searchSessionId;
- (void)setActiveExperiments:(id)arg1;
- (void)setHasSearchSessionId:(bool)arg1;
- (void)setSearchSessionId:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
