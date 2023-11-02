
@interface NLXSchemaCDMRequestStarted : SISchemaInstrumentationMessage {
    NLXSchemaCDMTurnInput * _currentTurnInput;
    struct { 
        unsigned int serviceGraphName : 1; 
    }  _has;
    bool  _hasCurrentTurnInput;
    bool  _hasLoggableSharedUserId;
    NSString * _loggableSharedUserId;
    int  _serviceGraphName;
}

@property (nonatomic, retain) NLXSchemaCDMTurnInput *currentTurnInput;
@property (nonatomic) bool hasCurrentTurnInput;
@property (nonatomic) bool hasLoggableSharedUserId;
@property (nonatomic) bool hasServiceGraphName;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *loggableSharedUserId;
@property (nonatomic) int serviceGraphName;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (id)currentTurnInput;
- (void)deleteCurrentTurnInput;
- (void)deleteLoggableSharedUserId;
- (void)deleteServiceGraphName;
- (id)dictionaryRepresentation;
- (bool)hasCurrentTurnInput;
- (bool)hasLoggableSharedUserId;
- (bool)hasServiceGraphName;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)loggableSharedUserId;
- (bool)readFrom:(id)arg1;
- (int)serviceGraphName;
- (void)setCurrentTurnInput:(id)arg1;
- (void)setHasCurrentTurnInput:(bool)arg1;
- (void)setHasLoggableSharedUserId:(bool)arg1;
- (void)setHasServiceGraphName:(bool)arg1;
- (void)setLoggableSharedUserId:(id)arg1;
- (void)setServiceGraphName:(int)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
