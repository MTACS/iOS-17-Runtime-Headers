
@interface MHSchemaMHAssistantDaemonAudioTwoShotTransitionEnded : SISchemaInstrumentationMessage {
    struct { 
        unsigned int suppresedAlert : 1; 
        unsigned int timedOut : 1; 
    }  _has;
    bool  _suppresedAlert;
    bool  _timedOut;
}

@property (nonatomic) bool hasSuppresedAlert;
@property (nonatomic) bool hasTimedOut;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) bool suppresedAlert;
@property (nonatomic) bool timedOut;

- (void)deleteSuppresedAlert;
- (void)deleteTimedOut;
- (id)dictionaryRepresentation;
- (bool)hasSuppresedAlert;
- (bool)hasTimedOut;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setHasSuppresedAlert:(bool)arg1;
- (void)setHasTimedOut:(bool)arg1;
- (void)setSuppresedAlert:(bool)arg1;
- (void)setTimedOut:(bool)arg1;
- (bool)suppresedAlert;
- (id)suppressMessageUnderConditions;
- (bool)timedOut;
- (void)writeTo:(id)arg1;

@end
