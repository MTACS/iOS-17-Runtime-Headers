
@interface ANCSchemaANCClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer> {
    ANCSchemaANCClientEventMetadata * _eventMetadata;
    bool  _hasEventMetadata;
    bool  _hasNotificationReceived;
    bool  _hasNotificationReceivedTier1;
    bool  _hasUserResponseEvaluated;
    ANCSchemaANCNotificationReceived * _notificationReceived;
    ANCSchemaANCNotificationReceivedTier1 * _notificationReceivedTier1;
    ANCSchemaANCUserResponseEvaluated * _userResponseEvaluated;
    unsigned long long  _whichEvent_Type;
}

@property (nonatomic, retain) ANCSchemaANCClientEventMetadata *eventMetadata;
@property (nonatomic) bool hasEventMetadata;
@property (nonatomic) bool hasNotificationReceived;
@property (nonatomic) bool hasNotificationReceivedTier1;
@property (nonatomic) bool hasUserResponseEvaluated;
@property (nonatomic, readonly) SISchemaInstrumentationMessage *innerEvent;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) ANCSchemaANCNotificationReceived *notificationReceived;
@property (nonatomic, retain) ANCSchemaANCNotificationReceivedTier1 *notificationReceivedTier1;
@property (nonatomic, retain) ANCSchemaANCUserResponseEvaluated *userResponseEvaluated;
@property (nonatomic, readonly) unsigned long long whichEvent_Type;

+ (int)joinability;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (int)componentName;
- (void)deleteEventMetadata;
- (void)deleteNotificationReceived;
- (void)deleteNotificationReceivedTier1;
- (void)deleteUserResponseEvaluated;
- (id)dictionaryRepresentation;
- (id)eventMetadata;
- (int)getAnyEventType;
- (id)getComponentId;
- (bool)hasEventMetadata;
- (bool)hasNotificationReceived;
- (bool)hasNotificationReceivedTier1;
- (bool)hasUserResponseEvaluated;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (id)innerEvent;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)notificationReceived;
- (id)notificationReceivedTier1;
- (id)qualifiedMessageName;
- (bool)readFrom:(id)arg1;
- (void)setEventMetadata:(id)arg1;
- (void)setHasEventMetadata:(bool)arg1;
- (void)setHasNotificationReceived:(bool)arg1;
- (void)setHasNotificationReceivedTier1:(bool)arg1;
- (void)setHasUserResponseEvaluated:(bool)arg1;
- (void)setNotificationReceived:(id)arg1;
- (void)setNotificationReceivedTier1:(id)arg1;
- (void)setUserResponseEvaluated:(id)arg1;
- (id)suppressMessageUnderConditions;
- (id)userResponseEvaluated;
- (unsigned long long)whichEvent_Type;
- (void)writeTo:(id)arg1;

@end
