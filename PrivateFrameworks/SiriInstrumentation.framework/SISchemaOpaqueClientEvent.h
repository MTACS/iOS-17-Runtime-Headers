
@interface SISchemaOpaqueClientEvent : SISchemaTopLevelUnionType {
    NSData * _anyEventPayload;
    SISchemaComponentIdentifier * _componentId;
    bool  _hasAnyEventPayload;
    bool  _hasComponentId;
}

@property (nonatomic, copy) NSData *anyEventPayload;
@property (nonatomic, retain) SISchemaComponentIdentifier *componentId;
@property (nonatomic, readonly) int componentName;
@property (nonatomic) bool hasAnyEventPayload;
@property (nonatomic) bool hasComponentId;
@property (nonatomic, readonly) NSData *jsonData;

- (void).cxx_destruct;
- (id)anyEventPayload;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (id)componentId;
- (int)componentName;
- (void)deleteAnyEventPayload;
- (void)deleteComponentId;
- (id)dictionaryRepresentation;
- (int)getAnyEventType;
- (id)getComponentId;
- (bool)hasAnyEventPayload;
- (bool)hasComponentId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)qualifiedMessageName;
- (bool)readFrom:(id)arg1;
- (void)setAnyEventPayload:(id)arg1;
- (void)setComponentId:(id)arg1;
- (void)setHasAnyEventPayload:(bool)arg1;
- (void)setHasComponentId:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
