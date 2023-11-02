
@interface GRPSchemaGroupedMessagesClientEvent : SISchemaTopLevelUnionType {
    GRPSchemaGroupedMessagesGrouping * _groupedBy;
    bool  _hasGroupedBy;
    bool  _hasProducerMetadata;
    NSArray * _orderedMessages;
    GRPSchemaProducerMetadata * _producerMetadata;
}

@property (nonatomic, retain) GRPSchemaGroupedMessagesGrouping *groupedBy;
@property (nonatomic) bool hasGroupedBy;
@property (nonatomic) bool hasProducerMetadata;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSArray *orderedMessages;
@property (nonatomic, retain) GRPSchemaProducerMetadata *producerMetadata;

- (void).cxx_destruct;
- (void)addOrderedMessages:(id)arg1;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)clearOrderedMessages;
- (void)deleteGroupedBy;
- (void)deleteOrderedMessages;
- (void)deleteProducerMetadata;
- (id)dictionaryRepresentation;
- (int)getAnyEventType;
- (id)groupedBy;
- (bool)hasGroupedBy;
- (bool)hasProducerMetadata;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)orderedMessages;
- (id)orderedMessagesAtIndex:(unsigned long long)arg1;
- (unsigned long long)orderedMessagesCount;
- (id)producerMetadata;
- (id)qualifiedMessageName;
- (bool)readFrom:(id)arg1;
- (void)setGroupedBy:(id)arg1;
- (void)setHasGroupedBy:(bool)arg1;
- (void)setHasProducerMetadata:(bool)arg1;
- (void)setOrderedMessages:(id)arg1;
- (void)setProducerMetadata:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
