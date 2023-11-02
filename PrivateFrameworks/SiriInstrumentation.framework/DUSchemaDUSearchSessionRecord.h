
@interface DUSchemaDUSearchSessionRecord : SISchemaInstrumentationMessage {
    struct { 
        unsigned int sessionStartTimestampMs : 1; 
    }  _has;
    bool  _hasSessionId;
    SISchemaUUID * _sessionId;
    unsigned long long  _sessionStartTimestampMs;
}

@property (nonatomic) bool hasSessionId;
@property (nonatomic) bool hasSessionStartTimestampMs;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaUUID *sessionId;
@property (nonatomic) unsigned long long sessionStartTimestampMs;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteSessionId;
- (void)deleteSessionStartTimestampMs;
- (id)dictionaryRepresentation;
- (bool)hasSessionId;
- (bool)hasSessionStartTimestampMs;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (id)sessionId;
- (unsigned long long)sessionStartTimestampMs;
- (void)setHasSessionId:(bool)arg1;
- (void)setHasSessionStartTimestampMs:(bool)arg1;
- (void)setSessionId:(id)arg1;
- (void)setSessionStartTimestampMs:(unsigned long long)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
