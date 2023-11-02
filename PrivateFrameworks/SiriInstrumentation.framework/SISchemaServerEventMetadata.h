
@interface SISchemaServerEventMetadata : SISchemaInstrumentationMessage {
    struct { 
        unsigned int timestampNs : 1; 
    }  _has;
    bool  _hasServerPod;
    bool  _hasSiriDeviceID;
    bool  _hasTurnID;
    NSString * _serverPod;
    NSData * _siriDeviceID;
    long long  _timestampNs;
    NSData * _turnID;
}

@property (nonatomic) bool hasServerPod;
@property (nonatomic) bool hasSiriDeviceID;
@property (nonatomic) bool hasTimestampNs;
@property (nonatomic) bool hasTurnID;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *serverPod;
@property (nonatomic, copy) NSData *siriDeviceID;
@property (nonatomic) long long timestampNs;
@property (nonatomic, copy) NSData *turnID;

- (void).cxx_destruct;
- (void)deleteServerPod;
- (void)deleteSiriDeviceID;
- (void)deleteTimestampNs;
- (void)deleteTurnID;
- (id)dictionaryRepresentation;
- (bool)hasServerPod;
- (bool)hasSiriDeviceID;
- (bool)hasTimestampNs;
- (bool)hasTurnID;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (id)serverPod;
- (void)setHasServerPod:(bool)arg1;
- (void)setHasSiriDeviceID:(bool)arg1;
- (void)setHasTimestampNs:(bool)arg1;
- (void)setHasTurnID:(bool)arg1;
- (void)setServerPod:(id)arg1;
- (void)setSiriDeviceID:(id)arg1;
- (void)setTimestampNs:(long long)arg1;
- (void)setTurnID:(id)arg1;
- (id)siriDeviceID;
- (id)suppressMessageUnderConditions;
- (long long)timestampNs;
- (id)turnID;
- (void)writeTo:(id)arg1;

@end
