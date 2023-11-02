
@interface SICSchemaProvisionalSICClientEvent : SISchemaTopLevelUnionType {
    SICSchemaProvisionalSICClientEventMetadata * _eventMetadata;
    bool  _hasEventMetadata;
    bool  _hasSiriInCallInvocationContext;
    SICSchemaProvisionalSICInvocationContext * _siriInCallInvocationContext;
    unsigned long long  _whichEvent_Type;
}

@property (nonatomic, retain) SICSchemaProvisionalSICClientEventMetadata *eventMetadata;
@property (nonatomic) bool hasEventMetadata;
@property (nonatomic) bool hasSiriInCallInvocationContext;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SICSchemaProvisionalSICInvocationContext *siriInCallInvocationContext;
@property (nonatomic, readonly) unsigned long long whichEvent_Type;

- (void).cxx_destruct;
- (void)deleteEventMetadata;
- (void)deleteSiriInCallInvocationContext;
- (id)dictionaryRepresentation;
- (id)eventMetadata;
- (int)getAnyEventType;
- (id)getTypeId;
- (id)getVersion;
- (bool)hasEventMetadata;
- (bool)hasSiriInCallInvocationContext;
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
- (void)setHasSiriInCallInvocationContext:(bool)arg1;
- (void)setSiriInCallInvocationContext:(id)arg1;
- (id)siriInCallInvocationContext;
- (unsigned long long)whichEvent_Type;
- (void)writeTo:(id)arg1;

@end
