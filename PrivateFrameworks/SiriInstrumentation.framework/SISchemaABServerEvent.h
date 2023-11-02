
@interface SISchemaABServerEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer> {
    SISchemaABSeverEventMetadata * _eventMetadata;
    bool  _hasEventMetadata;
    bool  _hasServerFeatureTriggered;
    SISchemaABExperimentServerFeatureTriggered * _serverFeatureTriggered;
    unsigned long long  _whichEvent_Type;
}

@property (nonatomic, retain) SISchemaABSeverEventMetadata *eventMetadata;
@property (nonatomic) bool hasEventMetadata;
@property (nonatomic) bool hasServerFeatureTriggered;
@property (nonatomic, readonly) SISchemaInstrumentationMessage *innerEvent;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaABExperimentServerFeatureTriggered *serverFeatureTriggered;
@property (nonatomic, readonly) unsigned long long whichEvent_Type;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteEventMetadata;
- (void)deleteServerFeatureTriggered;
- (id)dictionaryRepresentation;
- (id)eventMetadata;
- (int)getAnyEventType;
- (bool)hasEventMetadata;
- (bool)hasServerFeatureTriggered;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (id)innerEvent;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)qualifiedMessageName;
- (bool)readFrom:(id)arg1;
- (id)serverFeatureTriggered;
- (void)setEventMetadata:(id)arg1;
- (void)setHasEventMetadata:(bool)arg1;
- (void)setHasServerFeatureTriggered:(bool)arg1;
- (void)setServerFeatureTriggered:(id)arg1;
- (id)suppressMessageUnderConditions;
- (unsigned long long)whichEvent_Type;
- (void)writeTo:(id)arg1;

@end
