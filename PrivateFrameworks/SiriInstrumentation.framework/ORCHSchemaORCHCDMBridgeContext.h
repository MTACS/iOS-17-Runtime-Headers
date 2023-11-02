
@interface ORCHSchemaORCHCDMBridgeContext : SISchemaInstrumentationMessage {
    ORCHSchemaORCHCDMRequestEnded * _ended;
    ORCHSchemaORCHCDMRequestFailed * _failed;
    bool  _hasEnded;
    bool  _hasFailed;
    bool  _hasStartedOrChanged;
    bool  _hasTrpId;
    ORCHSchemaORCHCDMRequestStarted * _startedOrChanged;
    SISchemaUUID * _trpId;
    unsigned long long  _whichContextevent;
}

@property (nonatomic, retain) ORCHSchemaORCHCDMRequestEnded *ended;
@property (nonatomic, retain) ORCHSchemaORCHCDMRequestFailed *failed;
@property (nonatomic) bool hasEnded;
@property (nonatomic) bool hasFailed;
@property (nonatomic) bool hasStartedOrChanged;
@property (nonatomic) bool hasTrpId;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) ORCHSchemaORCHCDMRequestStarted *startedOrChanged;
@property (nonatomic, retain) SISchemaUUID *trpId;
@property (nonatomic, readonly) unsigned long long whichContextevent;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteEnded;
- (void)deleteFailed;
- (void)deleteStartedOrChanged;
- (void)deleteTrpId;
- (id)dictionaryRepresentation;
- (id)ended;
- (id)failed;
- (bool)hasEnded;
- (bool)hasFailed;
- (bool)hasStartedOrChanged;
- (bool)hasTrpId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setEnded:(id)arg1;
- (void)setFailed:(id)arg1;
- (void)setHasEnded:(bool)arg1;
- (void)setHasFailed:(bool)arg1;
- (void)setHasStartedOrChanged:(bool)arg1;
- (void)setHasTrpId:(bool)arg1;
- (void)setStartedOrChanged:(id)arg1;
- (void)setTrpId:(id)arg1;
- (id)startedOrChanged;
- (id)suppressMessageUnderConditions;
- (id)trpId;
- (unsigned long long)whichContextevent;
- (void)writeTo:(id)arg1;

@end
