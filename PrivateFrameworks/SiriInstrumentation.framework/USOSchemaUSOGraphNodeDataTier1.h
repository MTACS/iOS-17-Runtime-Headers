
@interface USOSchemaUSOGraphNodeDataTier1 : SISchemaInstrumentationMessage {
    bool  _hasLinkedUsoNodeData;
    NSArray * _linkedUsoEntityIdentifiers;
    NSArray * _linkedUsoEntitySpans;
    USOSchemaUSONodeDataTier1 * _linkedUsoNodeData;
}

@property (nonatomic) bool hasLinkedUsoNodeData;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSArray *linkedUsoEntityIdentifiers;
@property (nonatomic, copy) NSArray *linkedUsoEntitySpans;
@property (nonatomic, retain) USOSchemaUSONodeDataTier1 *linkedUsoNodeData;

- (void).cxx_destruct;
- (void)addLinkedUsoEntityIdentifiers:(id)arg1;
- (void)addLinkedUsoEntitySpans:(id)arg1;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)clearLinkedUsoEntityIdentifiers;
- (void)clearLinkedUsoEntitySpans;
- (void)deleteLinkedUsoEntityIdentifiers;
- (void)deleteLinkedUsoEntitySpans;
- (void)deleteLinkedUsoNodeData;
- (id)dictionaryRepresentation;
- (bool)hasLinkedUsoNodeData;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)linkedUsoEntityIdentifiers;
- (id)linkedUsoEntityIdentifiersAtIndex:(unsigned long long)arg1;
- (unsigned long long)linkedUsoEntityIdentifiersCount;
- (id)linkedUsoEntitySpans;
- (id)linkedUsoEntitySpansAtIndex:(unsigned long long)arg1;
- (unsigned long long)linkedUsoEntitySpansCount;
- (id)linkedUsoNodeData;
- (bool)readFrom:(id)arg1;
- (void)setHasLinkedUsoNodeData:(bool)arg1;
- (void)setLinkedUsoEntityIdentifiers:(id)arg1;
- (void)setLinkedUsoEntitySpans:(id)arg1;
- (void)setLinkedUsoNodeData:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
