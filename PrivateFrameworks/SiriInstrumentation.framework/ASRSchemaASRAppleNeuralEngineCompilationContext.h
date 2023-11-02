
@interface ASRSchemaASRAppleNeuralEngineCompilationContext : SISchemaInstrumentationMessage {
    ASRSchemaASRAppleNeuralEngineCompilationEnded * _ended;
    bool  _hasEnded;
    bool  _hasStarted;
    ASRSchemaASRAppleNeuralEngineCompilationStarted * _started;
    unsigned long long  _whichContextevent;
}

@property (nonatomic, retain) ASRSchemaASRAppleNeuralEngineCompilationEnded *ended;
@property (nonatomic) bool hasEnded;
@property (nonatomic) bool hasStarted;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) ASRSchemaASRAppleNeuralEngineCompilationStarted *started;
@property (nonatomic, readonly) unsigned long long whichContextevent;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteEnded;
- (void)deleteStarted;
- (id)dictionaryRepresentation;
- (id)ended;
- (bool)hasEnded;
- (bool)hasStarted;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setEnded:(id)arg1;
- (void)setHasEnded:(bool)arg1;
- (void)setHasStarted:(bool)arg1;
- (void)setStarted:(id)arg1;
- (id)started;
- (id)suppressMessageUnderConditions;
- (unsigned long long)whichContextevent;
- (void)writeTo:(id)arg1;

@end
