
@interface CAMSchemaCAMClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer> {
    CAMSchemaCAMAutoSendFeaturesGenerated * _autoSendFeaturesGenerated;
    CAMSchemaCAMClientEventMetadata * _eventMetadata;
    bool  _hasAutoSendFeaturesGenerated;
    bool  _hasEventMetadata;
    bool  _hasModelExecuted;
    bool  _hasRequestReceived;
    bool  _hasResponseGenerated;
    CAMSchemaCAMModelExecuted * _modelExecuted;
    CAMSchemaCAMRequestReceived * _requestReceived;
    CAMSchemaCAMResponseGenerated * _responseGenerated;
    unsigned long long  _whichEvent_Type;
}

@property (nonatomic, retain) CAMSchemaCAMAutoSendFeaturesGenerated *autoSendFeaturesGenerated;
@property (nonatomic, retain) CAMSchemaCAMClientEventMetadata *eventMetadata;
@property (nonatomic) bool hasAutoSendFeaturesGenerated;
@property (nonatomic) bool hasEventMetadata;
@property (nonatomic) bool hasModelExecuted;
@property (nonatomic) bool hasRequestReceived;
@property (nonatomic) bool hasResponseGenerated;
@property (nonatomic, readonly) SISchemaInstrumentationMessage *innerEvent;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) CAMSchemaCAMModelExecuted *modelExecuted;
@property (nonatomic, retain) CAMSchemaCAMRequestReceived *requestReceived;
@property (nonatomic, retain) CAMSchemaCAMResponseGenerated *responseGenerated;
@property (nonatomic, readonly) unsigned long long whichEvent_Type;

+ (int)joinability;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (id)autoSendFeaturesGenerated;
- (int)componentName;
- (void)deleteAutoSendFeaturesGenerated;
- (void)deleteEventMetadata;
- (void)deleteModelExecuted;
- (void)deleteRequestReceived;
- (void)deleteResponseGenerated;
- (id)dictionaryRepresentation;
- (id)eventMetadata;
- (int)getAnyEventType;
- (id)getComponentId;
- (bool)hasAutoSendFeaturesGenerated;
- (bool)hasEventMetadata;
- (bool)hasModelExecuted;
- (bool)hasRequestReceived;
- (bool)hasResponseGenerated;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (id)innerEvent;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)modelExecuted;
- (id)qualifiedMessageName;
- (bool)readFrom:(id)arg1;
- (id)requestReceived;
- (id)responseGenerated;
- (void)setAutoSendFeaturesGenerated:(id)arg1;
- (void)setEventMetadata:(id)arg1;
- (void)setHasAutoSendFeaturesGenerated:(bool)arg1;
- (void)setHasEventMetadata:(bool)arg1;
- (void)setHasModelExecuted:(bool)arg1;
- (void)setHasRequestReceived:(bool)arg1;
- (void)setHasResponseGenerated:(bool)arg1;
- (void)setModelExecuted:(id)arg1;
- (void)setRequestReceived:(id)arg1;
- (void)setResponseGenerated:(id)arg1;
- (id)suppressMessageUnderConditions;
- (unsigned long long)whichEvent_Type;
- (void)writeTo:(id)arg1;

@end
