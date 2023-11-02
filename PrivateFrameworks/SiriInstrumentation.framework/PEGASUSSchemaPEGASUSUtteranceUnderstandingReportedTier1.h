
@interface PEGASUSSchemaPEGASUSUtteranceUnderstandingReportedTier1 : SISchemaInstrumentationMessage {
    bool  _hasLinkId;
    SISchemaUUID * _linkId;
    NSArray * _topKGSAIntents;
    NSArray * _topU2Intents;
}

@property (nonatomic) bool hasLinkId;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaUUID *linkId;
@property (nonatomic, copy) NSArray *topKGSAIntents;
@property (nonatomic, copy) NSArray *topU2Intents;

- (void).cxx_destruct;
- (void)addTopKGSAIntents:(id)arg1;
- (void)addTopU2Intents:(id)arg1;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)clearTopKGSAIntents;
- (void)clearTopU2Intents;
- (void)deleteLinkId;
- (void)deleteTopKGSAIntents;
- (void)deleteTopU2Intents;
- (id)dictionaryRepresentation;
- (bool)hasLinkId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)linkId;
- (bool)readFrom:(id)arg1;
- (void)setHasLinkId:(bool)arg1;
- (void)setLinkId:(id)arg1;
- (void)setTopKGSAIntents:(id)arg1;
- (void)setTopU2Intents:(id)arg1;
- (id)suppressMessageUnderConditions;
- (id)topKGSAIntents;
- (id)topKGSAIntentsAtIndex:(unsigned long long)arg1;
- (unsigned long long)topKGSAIntentsCount;
- (id)topU2Intents;
- (id)topU2IntentsAtIndex:(unsigned long long)arg1;
- (unsigned long long)topU2IntentsCount;
- (void)writeTo:(id)arg1;

@end
