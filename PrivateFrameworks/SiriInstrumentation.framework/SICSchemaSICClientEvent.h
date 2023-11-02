
@interface SICSchemaSICClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer> {
    SICSchemaSICClientEventMetadata * _eventMetadata;
    bool  _hasEventMetadata;
    bool  _hasSiriInCallInvocationContext;
    SICSchemaSICInvocationContext * _siriInCallInvocationContext;
    unsigned long long  _whichEvent_Type;
}

@property (nonatomic, retain) SICSchemaSICClientEventMetadata *eventMetadata;
@property (nonatomic) bool hasEventMetadata;
@property (nonatomic) bool hasSiriInCallInvocationContext;
@property (nonatomic, readonly) SISchemaInstrumentationMessage *innerEvent;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SICSchemaSICInvocationContext *siriInCallInvocationContext;
@property (nonatomic, readonly) unsigned long long whichEvent_Type;

+ (int)joinability;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (int)componentName;
- (void)deleteEventMetadata;
- (void)deleteSiriInCallInvocationContext;
- (id)dictionaryRepresentation;
- (id)eventMetadata;
- (int)getAnyEventType;
- (id)getComponentId;
- (bool)hasEventMetadata;
- (bool)hasSiriInCallInvocationContext;
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
- (void)setHasSiriInCallInvocationContext:(bool)arg1;
- (void)setSiriInCallInvocationContext:(id)arg1;
- (id)siriInCallInvocationContext;
- (id)suppressMessageUnderConditions;
- (unsigned long long)whichEvent_Type;
- (void)writeTo:(id)arg1;

@end
