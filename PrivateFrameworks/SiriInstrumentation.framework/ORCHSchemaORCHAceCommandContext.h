
@interface ORCHSchemaORCHAceCommandContext : SISchemaInstrumentationMessage {
    SISchemaUUID * _aceId;
    ORCHSchemaORCHAceCommandEnded * _ended;
    ORCHSchemaORCHAceCommandFailed * _failed;
    bool  _hasAceId;
    bool  _hasEnded;
    bool  _hasFailed;
    bool  _hasStartedOrChanged;
    ORCHSchemaORCHAceCommandStarted * _startedOrChanged;
    unsigned long long  _whichCommandevent;
}

@property (nonatomic, retain) SISchemaUUID *aceId;
@property (nonatomic, retain) ORCHSchemaORCHAceCommandEnded *ended;
@property (nonatomic, retain) ORCHSchemaORCHAceCommandFailed *failed;
@property (nonatomic) bool hasAceId;
@property (nonatomic) bool hasEnded;
@property (nonatomic) bool hasFailed;
@property (nonatomic) bool hasStartedOrChanged;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) ORCHSchemaORCHAceCommandStarted *startedOrChanged;
@property (nonatomic, readonly) unsigned long long whichCommandevent;

- (void).cxx_destruct;
- (id)aceId;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteAceId;
- (void)deleteEnded;
- (void)deleteFailed;
- (void)deleteStartedOrChanged;
- (id)dictionaryRepresentation;
- (id)ended;
- (id)failed;
- (bool)hasAceId;
- (bool)hasEnded;
- (bool)hasFailed;
- (bool)hasStartedOrChanged;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setAceId:(id)arg1;
- (void)setEnded:(id)arg1;
- (void)setFailed:(id)arg1;
- (void)setHasAceId:(bool)arg1;
- (void)setHasEnded:(bool)arg1;
- (void)setHasFailed:(bool)arg1;
- (void)setHasStartedOrChanged:(bool)arg1;
- (void)setStartedOrChanged:(id)arg1;
- (id)startedOrChanged;
- (id)suppressMessageUnderConditions;
- (unsigned long long)whichCommandevent;
- (void)writeTo:(id)arg1;

@end
