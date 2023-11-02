
@interface PEGASUSSchemaPEGASUSRewrittenUtterancesReported : SISchemaInstrumentationMessage {
    struct { 
        unsigned int wasRewrittenUtteranceUsed : 1; 
    }  _has;
    bool  _hasLinkId;
    SISchemaUUID * _linkId;
    NSArray * _rewrittenUtterancesMetadatas;
    bool  _wasRewrittenUtteranceUsed;
}

@property (nonatomic) bool hasLinkId;
@property (nonatomic) bool hasWasRewrittenUtteranceUsed;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaUUID *linkId;
@property (nonatomic, copy) NSArray *rewrittenUtterancesMetadatas;
@property (nonatomic) bool wasRewrittenUtteranceUsed;

- (void).cxx_destruct;
- (void)addRewrittenUtterancesMetadata:(id)arg1;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)clearRewrittenUtterancesMetadata;
- (void)deleteLinkId;
- (void)deleteRewrittenUtterancesMetadata;
- (void)deleteWasRewrittenUtteranceUsed;
- (id)dictionaryRepresentation;
- (bool)hasLinkId;
- (bool)hasWasRewrittenUtteranceUsed;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)linkId;
- (bool)readFrom:(id)arg1;
- (id)rewrittenUtterancesMetadataAtIndex:(unsigned long long)arg1;
- (unsigned long long)rewrittenUtterancesMetadataCount;
- (id)rewrittenUtterancesMetadatas;
- (void)setHasLinkId:(bool)arg1;
- (void)setHasWasRewrittenUtteranceUsed:(bool)arg1;
- (void)setLinkId:(id)arg1;
- (void)setRewrittenUtterancesMetadatas:(id)arg1;
- (void)setWasRewrittenUtteranceUsed:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (bool)wasRewrittenUtteranceUsed;
- (void)writeTo:(id)arg1;

@end
