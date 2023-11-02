
@interface GRPSchemaGroupedMessagesServerEvent : SISchemaTopLevelUnionType {
    NSArray * _anyEvents;
    NSArray * _orderedAnyEvents;
}

@property (nonatomic, copy) NSArray *anyEvents;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSArray *orderedAnyEvents;

- (void).cxx_destruct;
- (void)addAnyEvents:(id)arg1;
- (void)addOrderedAnyEvents:(id)arg1;
- (id)anyEvents;
- (id)anyEventsAtIndex:(unsigned long long)arg1;
- (unsigned long long)anyEventsCount;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)clearAnyEvents;
- (void)clearOrderedAnyEvents;
- (void)deleteAnyEvents;
- (void)deleteOrderedAnyEvents;
- (id)dictionaryRepresentation;
- (int)getAnyEventType;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)orderedAnyEvents;
- (id)orderedAnyEventsAtIndex:(unsigned long long)arg1;
- (unsigned long long)orderedAnyEventsCount;
- (id)qualifiedMessageName;
- (bool)readFrom:(id)arg1;
- (void)setAnyEvents:(id)arg1;
- (void)setOrderedAnyEvents:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
