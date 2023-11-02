
@interface SISchemaClientEventMetadata : SISchemaInstrumentationMessage {
    long long  _eventGeneratedRelativeToBootTimeTimestampNs;
    NSString * _eventGeneratedTimestampRefId;
    struct { 
        unsigned int eventGeneratedRelativeToBootTimeTimestampNs : 1; 
    }  _has;
    bool  _hasEventGeneratedTimestampRefId;
    bool  _hasSiriDeviceID;
    bool  _hasTurnID;
    NSData * _siriDeviceID;
    NSData * _turnID;
}

@property (nonatomic) long long eventGeneratedRelativeToBootTimeTimestampNs;
@property (nonatomic, copy) NSString *eventGeneratedTimestampRefId;
@property (nonatomic) bool hasEventGeneratedRelativeToBootTimeTimestampNs;
@property (nonatomic) bool hasEventGeneratedTimestampRefId;
@property (nonatomic) bool hasSiriDeviceID;
@property (nonatomic) bool hasTurnID;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSData *siriDeviceID;
@property (nonatomic, copy) NSData *turnID;

- (void).cxx_destruct;
- (void)deleteEventGeneratedRelativeToBootTimeTimestampNs;
- (void)deleteEventGeneratedTimestampRefId;
- (void)deleteSiriDeviceID;
- (void)deleteTurnID;
- (id)dictionaryRepresentation;
- (long long)eventGeneratedRelativeToBootTimeTimestampNs;
- (id)eventGeneratedTimestampRefId;
- (bool)hasEventGeneratedRelativeToBootTimeTimestampNs;
- (bool)hasEventGeneratedTimestampRefId;
- (bool)hasSiriDeviceID;
- (bool)hasTurnID;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setEventGeneratedRelativeToBootTimeTimestampNs:(long long)arg1;
- (void)setEventGeneratedTimestampRefId:(id)arg1;
- (void)setHasEventGeneratedRelativeToBootTimeTimestampNs:(bool)arg1;
- (void)setHasEventGeneratedTimestampRefId:(bool)arg1;
- (void)setHasSiriDeviceID:(bool)arg1;
- (void)setHasTurnID:(bool)arg1;
- (void)setSiriDeviceID:(id)arg1;
- (void)setTurnID:(id)arg1;
- (id)siriDeviceID;
- (id)suppressMessageUnderConditions;
- (id)turnID;
- (void)willProduceDictionaryRepresentation:(id)arg1;
- (void)writeTo:(id)arg1;

@end
