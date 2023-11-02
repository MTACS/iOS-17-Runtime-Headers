
@interface ACTVSchemaACTVClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer> {
    ACTVSchemaACTVButtonInteractionDetected * _buttonInteractionDetected;
    ACTVSchemaACTVClientEventMetadata * _eventMetadata;
    bool  _hasButtonInteractionDetected;
    bool  _hasEventMetadata;
    bool  _hasTurnActivated;
    ACTVSchemaACTVTurnActivated * _turnActivated;
    unsigned long long  _whichEvent_Type;
}

@property (nonatomic, retain) ACTVSchemaACTVButtonInteractionDetected *buttonInteractionDetected;
@property (nonatomic, retain) ACTVSchemaACTVClientEventMetadata *eventMetadata;
@property (nonatomic) bool hasButtonInteractionDetected;
@property (nonatomic) bool hasEventMetadata;
@property (nonatomic) bool hasTurnActivated;
@property (nonatomic, readonly) SISchemaInstrumentationMessage *innerEvent;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) ACTVSchemaACTVTurnActivated *turnActivated;
@property (nonatomic, readonly) unsigned long long whichEvent_Type;

+ (int)joinability;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (id)buttonInteractionDetected;
- (int)componentName;
- (void)deleteButtonInteractionDetected;
- (void)deleteEventMetadata;
- (void)deleteTurnActivated;
- (id)dictionaryRepresentation;
- (id)eventMetadata;
- (int)getAnyEventType;
- (id)getComponentId;
- (bool)hasButtonInteractionDetected;
- (bool)hasEventMetadata;
- (bool)hasTurnActivated;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (id)innerEvent;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)qualifiedMessageName;
- (bool)readFrom:(id)arg1;
- (void)setButtonInteractionDetected:(id)arg1;
- (void)setEventMetadata:(id)arg1;
- (void)setHasButtonInteractionDetected:(bool)arg1;
- (void)setHasEventMetadata:(bool)arg1;
- (void)setHasTurnActivated:(bool)arg1;
- (void)setTurnActivated:(id)arg1;
- (id)suppressMessageUnderConditions;
- (id)turnActivated;
- (unsigned long long)whichEvent_Type;
- (void)writeTo:(id)arg1;

@end
