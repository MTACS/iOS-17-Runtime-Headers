
@interface PEGASUSSchemaPEGASUSUtteranceUnderstandingReported : SISchemaInstrumentationMessage {
    bool  _hasLinkId;
    SISchemaUUID * _linkId;
    NSArray * _topKGSAIntentsMetadatas;
    NSArray * _topU2IntentsMetadatas;
}

@property (nonatomic) bool hasLinkId;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaUUID *linkId;
@property (nonatomic, copy) NSArray *topKGSAIntentsMetadatas;
@property (nonatomic, copy) NSArray *topU2IntentsMetadatas;

- (void).cxx_destruct;
- (void)addTopKGSAIntentsMetadata:(id)arg1;
- (void)addTopU2IntentsMetadata:(id)arg1;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)clearTopKGSAIntentsMetadata;
- (void)clearTopU2IntentsMetadata;
- (void)deleteLinkId;
- (void)deleteTopKGSAIntentsMetadata;
- (void)deleteTopU2IntentsMetadata;
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
- (void)setTopKGSAIntentsMetadatas:(id)arg1;
- (void)setTopU2IntentsMetadatas:(id)arg1;
- (id)suppressMessageUnderConditions;
- (id)topKGSAIntentsMetadataAtIndex:(unsigned long long)arg1;
- (unsigned long long)topKGSAIntentsMetadataCount;
- (id)topKGSAIntentsMetadatas;
- (id)topU2IntentsMetadataAtIndex:(unsigned long long)arg1;
- (unsigned long long)topU2IntentsMetadataCount;
- (id)topU2IntentsMetadatas;
- (void)writeTo:(id)arg1;

@end
