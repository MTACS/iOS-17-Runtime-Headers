
@interface DHTSchemaDHTServerEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer> {
    DHTSchemaDHTDeleteTrigger * _deleteTrigger;
    bool  _hasDeleteTrigger;
    unsigned long long  _whichEvent_Type;
}

@property (nonatomic, retain) DHTSchemaDHTDeleteTrigger *deleteTrigger;
@property (nonatomic) bool hasDeleteTrigger;
@property (nonatomic, readonly) SISchemaInstrumentationMessage *innerEvent;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, readonly) unsigned long long whichEvent_Type;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteDeleteTrigger;
- (id)deleteTrigger;
- (id)dictionaryRepresentation;
- (int)getAnyEventType;
- (bool)hasDeleteTrigger;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (id)innerEvent;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)qualifiedMessageName;
- (bool)readFrom:(id)arg1;
- (void)setDeleteTrigger:(id)arg1;
- (void)setHasDeleteTrigger:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (unsigned long long)whichEvent_Type;
- (void)writeTo:(id)arg1;

@end
