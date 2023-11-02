
@interface HomeKitSchemaHKClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer> {
    HomeKitSchemaHomeKitEventMetadata * _eventMetadata;
    bool  _hasEventMetadata;
    bool  _hasHomeKitAccessoryOperationReported;
    HomeKitSchemaHKAccessoryOperationReported * _homeKitAccessoryOperationReported;
    unsigned long long  _whichEvent_Type;
}

@property (nonatomic, retain) HomeKitSchemaHomeKitEventMetadata *eventMetadata;
@property (nonatomic) bool hasEventMetadata;
@property (nonatomic) bool hasHomeKitAccessoryOperationReported;
@property (nonatomic, retain) HomeKitSchemaHKAccessoryOperationReported *homeKitAccessoryOperationReported;
@property (nonatomic, readonly) SISchemaInstrumentationMessage *innerEvent;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, readonly) unsigned long long whichEvent_Type;

+ (int)joinability;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (int)componentName;
- (void)deleteEventMetadata;
- (void)deleteHomeKitAccessoryOperationReported;
- (id)dictionaryRepresentation;
- (id)eventMetadata;
- (int)getAnyEventType;
- (id)getComponentId;
- (bool)hasEventMetadata;
- (bool)hasHomeKitAccessoryOperationReported;
- (unsigned long long)hash;
- (id)homeKitAccessoryOperationReported;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (id)innerEvent;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)qualifiedMessageName;
- (bool)readFrom:(id)arg1;
- (void)setEventMetadata:(id)arg1;
- (void)setHasEventMetadata:(bool)arg1;
- (void)setHasHomeKitAccessoryOperationReported:(bool)arg1;
- (void)setHomeKitAccessoryOperationReported:(id)arg1;
- (id)suppressMessageUnderConditions;
- (unsigned long long)whichEvent_Type;
- (void)writeTo:(id)arg1;

@end
