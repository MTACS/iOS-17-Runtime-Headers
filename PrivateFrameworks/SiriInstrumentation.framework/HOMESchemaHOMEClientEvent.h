
@interface HOMESchemaHOMEClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer> {
    HOMESchemaHOMEAssistantDeviceBirthday * _assistantDeviceBirthday;
    HOMESchemaHOMEAssistantInfoReported * _assistantInfoReported;
    HOMESchemaHOMEClientEventMetadata * _eventMetadata;
    bool  _hasAssistantDeviceBirthday;
    bool  _hasAssistantInfoReported;
    bool  _hasEventMetadata;
    unsigned long long  _whichEvent_Type;
}

@property (nonatomic, retain) HOMESchemaHOMEAssistantDeviceBirthday *assistantDeviceBirthday;
@property (nonatomic, retain) HOMESchemaHOMEAssistantInfoReported *assistantInfoReported;
@property (nonatomic, retain) HOMESchemaHOMEClientEventMetadata *eventMetadata;
@property (nonatomic) bool hasAssistantDeviceBirthday;
@property (nonatomic) bool hasAssistantInfoReported;
@property (nonatomic) bool hasEventMetadata;
@property (nonatomic, readonly) SISchemaInstrumentationMessage *innerEvent;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, readonly) unsigned long long whichEvent_Type;

+ (int)joinability;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (id)assistantDeviceBirthday;
- (id)assistantInfoReported;
- (void)deleteAssistantDeviceBirthday;
- (void)deleteAssistantInfoReported;
- (void)deleteEventMetadata;
- (id)dictionaryRepresentation;
- (id)eventMetadata;
- (int)getAnyEventType;
- (id)getComponentId;
- (bool)hasAssistantDeviceBirthday;
- (bool)hasAssistantInfoReported;
- (bool)hasEventMetadata;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (id)innerEvent;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)qualifiedMessageName;
- (bool)readFrom:(id)arg1;
- (void)setAssistantDeviceBirthday:(id)arg1;
- (void)setAssistantInfoReported:(id)arg1;
- (void)setEventMetadata:(id)arg1;
- (void)setHasAssistantDeviceBirthday:(bool)arg1;
- (void)setHasAssistantInfoReported:(bool)arg1;
- (void)setHasEventMetadata:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (unsigned long long)whichEvent_Type;
- (void)writeTo:(id)arg1;

@end
