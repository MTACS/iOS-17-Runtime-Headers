
@interface SRSTSchemaSRSTClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer> {
    SRSTSchemaSRSTClientEventMetadata * _eventMetadata;
    bool  _hasEventMetadata;
    bool  _hasStateTransitionEvent;
    SRSTSchemaSRSTStateTransitionEvent * _stateTransitionEvent;
    unsigned long long  _whichEvent_Type;
}

@property (nonatomic, retain) SRSTSchemaSRSTClientEventMetadata *eventMetadata;
@property (nonatomic) bool hasEventMetadata;
@property (nonatomic) bool hasStateTransitionEvent;
@property (nonatomic, readonly) SISchemaInstrumentationMessage *innerEvent;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SRSTSchemaSRSTStateTransitionEvent *stateTransitionEvent;
@property (nonatomic, readonly) unsigned long long whichEvent_Type;

+ (int)joinability;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (int)componentName;
- (void)deleteEventMetadata;
- (void)deleteStateTransitionEvent;
- (id)dictionaryRepresentation;
- (id)eventMetadata;
- (int)getAnyEventType;
- (id)getComponentId;
- (bool)hasEventMetadata;
- (bool)hasStateTransitionEvent;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (id)innerEvent;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)qualifiedMessageName;
- (bool)readFrom:(id)arg1;
- (void)setEventMetadata:(id)arg1;
- (void)setHasEventMetadata:(bool)arg1;
- (void)setHasStateTransitionEvent:(bool)arg1;
- (void)setStateTransitionEvent:(id)arg1;
- (id)stateTransitionEvent;
- (id)suppressMessageUnderConditions;
- (unsigned long long)whichEvent_Type;
- (void)writeTo:(id)arg1;

@end
