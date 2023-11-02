
@interface USOSchemaUSOGraphTier1 : SISchemaInstrumentationMessage {
    bool  _hasLinkId;
    SISchemaUUID * _linkId;
    NSArray * _linkedUsoEntityIdentifiers;
    NSArray * _linkedUsoGraphNodeDatas;
    NSArray * _linkedUsoNodeDatas;
}

@property (nonatomic) bool hasLinkId;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaUUID *linkId;
@property (nonatomic, copy) NSArray *linkedUsoEntityIdentifiers;
@property (nonatomic, copy) NSArray *linkedUsoGraphNodeDatas;
@property (nonatomic, copy) NSArray *linkedUsoNodeDatas;

- (void).cxx_destruct;
- (void)addLinkedUsoEntityIdentifiers:(id)arg1;
- (void)addLinkedUsoGraphNodeData:(id)arg1;
- (void)addLinkedUsoNodeData:(id)arg1;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)clearLinkedUsoEntityIdentifiers;
- (void)clearLinkedUsoGraphNodeData;
- (void)clearLinkedUsoNodeData;
- (void)deleteLinkId;
- (void)deleteLinkedUsoEntityIdentifiers;
- (void)deleteLinkedUsoGraphNodeData;
- (void)deleteLinkedUsoNodeData;
- (id)dictionaryRepresentation;
- (bool)hasLinkId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)linkId;
- (id)linkedUsoEntityIdentifiers;
- (id)linkedUsoEntityIdentifiersAtIndex:(unsigned long long)arg1;
- (unsigned long long)linkedUsoEntityIdentifiersCount;
- (id)linkedUsoGraphNodeDataAtIndex:(unsigned long long)arg1;
- (unsigned long long)linkedUsoGraphNodeDataCount;
- (id)linkedUsoGraphNodeDatas;
- (id)linkedUsoNodeDataAtIndex:(unsigned long long)arg1;
- (unsigned long long)linkedUsoNodeDataCount;
- (id)linkedUsoNodeDatas;
- (bool)readFrom:(id)arg1;
- (void)setHasLinkId:(bool)arg1;
- (void)setLinkId:(id)arg1;
- (void)setLinkedUsoEntityIdentifiers:(id)arg1;
- (void)setLinkedUsoGraphNodeDatas:(id)arg1;
- (void)setLinkedUsoNodeDatas:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
