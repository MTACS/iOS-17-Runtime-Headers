
@interface SetupSchemaProvisionalSiriSetupEvent : SISchemaTopLevelUnionType {
    SetupSchemaProvisionalSiriSetupEventMetadata * _eventMetadata;
    bool  _hasEventMetadata;
    bool  _hasSiriSetupContext;
    SetupSchemaProvisionalSiriSetupContext * _siriSetupContext;
    unsigned long long  _whichEvent_Type;
}

@property (nonatomic, retain) SetupSchemaProvisionalSiriSetupEventMetadata *eventMetadata;
@property (nonatomic) bool hasEventMetadata;
@property (nonatomic) bool hasSiriSetupContext;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SetupSchemaProvisionalSiriSetupContext *siriSetupContext;
@property (nonatomic, readonly) unsigned long long whichEvent_Type;

- (void).cxx_destruct;
- (void)deleteEventMetadata;
- (void)deleteSiriSetupContext;
- (id)dictionaryRepresentation;
- (id)eventMetadata;
- (int)getAnyEventType;
- (id)getTypeId;
- (id)getVersion;
- (bool)hasEventMetadata;
- (bool)hasSiriSetupContext;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isProvisional;
- (id)jsonData;
- (id)qualifiedMessageName;
- (bool)readFrom:(id)arg1;
- (void)setEventMetadata:(id)arg1;
- (void)setHasEventMetadata:(bool)arg1;
- (void)setHasSiriSetupContext:(bool)arg1;
- (void)setSiriSetupContext:(id)arg1;
- (id)siriSetupContext;
- (unsigned long long)whichEvent_Type;
- (void)writeTo:(id)arg1;

@end
