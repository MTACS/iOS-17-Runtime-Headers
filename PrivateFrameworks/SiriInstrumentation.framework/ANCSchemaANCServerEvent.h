
@interface ANCSchemaANCServerEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer> {
    ANCSchemaANCServerEventMetadata * _eventMetadata;
    bool  _hasEventMetadata;
    bool  _hasUserResponseEvaluated;
    ANCSchemaANCServerUserResponseEvaluated * _userResponseEvaluated;
    unsigned long long  _whichEvent_Type;
}

@property (nonatomic, retain) ANCSchemaANCServerEventMetadata *eventMetadata;
@property (nonatomic) bool hasEventMetadata;
@property (nonatomic) bool hasUserResponseEvaluated;
@property (nonatomic, readonly) SISchemaInstrumentationMessage *innerEvent;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) ANCSchemaANCServerUserResponseEvaluated *userResponseEvaluated;
@property (nonatomic, readonly) unsigned long long whichEvent_Type;

+ (int)joinability;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (int)componentName;
- (void)deleteEventMetadata;
- (void)deleteUserResponseEvaluated;
- (id)dictionaryRepresentation;
- (id)eventMetadata;
- (int)getAnyEventType;
- (id)getComponentId;
- (bool)hasEventMetadata;
- (bool)hasUserResponseEvaluated;
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
- (void)setHasUserResponseEvaluated:(bool)arg1;
- (void)setUserResponseEvaluated:(id)arg1;
- (id)suppressMessageUnderConditions;
- (id)userResponseEvaluated;
- (unsigned long long)whichEvent_Type;
- (void)writeTo:(id)arg1;

@end
