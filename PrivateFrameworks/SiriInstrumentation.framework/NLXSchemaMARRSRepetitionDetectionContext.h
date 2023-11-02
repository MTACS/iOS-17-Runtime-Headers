
@interface NLXSchemaMARRSRepetitionDetectionContext : SISchemaInstrumentationMessage {
    NLXSchemaMARRSRepetitionDetectionEvaluated * _ended;
    NLXSchemaMARRSRepetitionDetectionEvaluated * _evaluated;
    NLXSchemaMARRSRepetitionDetectionFailed * _failed;
    bool  _hasEnded;
    bool  _hasEvaluated;
    bool  _hasFailed;
    bool  _hasStarted;
    bool  _hasStartedOrChanged;
    NLXSchemaMARRSRepetitionDetectionStarted * _started;
    NLXSchemaMARRSRepetitionDetectionStarted * _startedOrChanged;
    unsigned long long  _whichContextevent;
}

@property (nonatomic, retain) NLXSchemaMARRSRepetitionDetectionEvaluated *ended;
@property (nonatomic, retain) NLXSchemaMARRSRepetitionDetectionEvaluated *evaluated;
@property (nonatomic, retain) NLXSchemaMARRSRepetitionDetectionFailed *failed;
@property (nonatomic) bool hasEnded;
@property (nonatomic) bool hasEvaluated;
@property (nonatomic) bool hasFailed;
@property (nonatomic) bool hasStarted;
@property (nonatomic) bool hasStartedOrChanged;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) NLXSchemaMARRSRepetitionDetectionStarted *started;
@property (nonatomic, retain) NLXSchemaMARRSRepetitionDetectionStarted *startedOrChanged;
@property (nonatomic, readonly) unsigned long long whichContextevent;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteEnded;
- (void)deleteEvaluated;
- (void)deleteFailed;
- (void)deleteStarted;
- (void)deleteStartedOrChanged;
- (id)dictionaryRepresentation;
- (id)ended;
- (id)evaluated;
- (id)failed;
- (bool)hasEnded;
- (bool)hasEvaluated;
- (bool)hasFailed;
- (bool)hasStarted;
- (bool)hasStartedOrChanged;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setEnded:(id)arg1;
- (void)setEvaluated:(id)arg1;
- (void)setFailed:(id)arg1;
- (void)setHasEnded:(bool)arg1;
- (void)setHasEvaluated:(bool)arg1;
- (void)setHasFailed:(bool)arg1;
- (void)setHasStarted:(bool)arg1;
- (void)setHasStartedOrChanged:(bool)arg1;
- (void)setStarted:(id)arg1;
- (void)setStartedOrChanged:(id)arg1;
- (id)started;
- (id)startedOrChanged;
- (id)suppressMessageUnderConditions;
- (unsigned long long)whichContextevent;
- (void)writeTo:(id)arg1;

@end
