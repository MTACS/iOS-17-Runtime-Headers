
@interface DODMLASRSchemaDODMLASRUserEditExperimentEndedTier1 : SISchemaInstrumentationMessage {
    NSArray * _confusionPairs;
    bool  _hasLinkId;
    SISchemaUUID * _linkId;
}

@property (nonatomic, copy) NSArray *confusionPairs;
@property (nonatomic) bool hasLinkId;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaUUID *linkId;

- (void).cxx_destruct;
- (void)addConfusionPairs:(id)arg1;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)clearConfusionPairs;
- (id)confusionPairs;
- (id)confusionPairsAtIndex:(unsigned long long)arg1;
- (unsigned long long)confusionPairsCount;
- (void)deleteConfusionPairs;
- (void)deleteLinkId;
- (id)dictionaryRepresentation;
- (bool)hasLinkId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)linkId;
- (bool)readFrom:(id)arg1;
- (void)setConfusionPairs:(id)arg1;
- (void)setHasLinkId:(bool)arg1;
- (void)setLinkId:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
