
@interface DODMLASRSchemaDODMLASRPersonalizedLanguageModelMetrics : SISchemaInstrumentationMessage {
    DODMLASRSchemaDODMLASREvaluationMetrics * _evaluationMetrics;
    struct { 
        unsigned int userLocale : 1; 
    }  _has;
    bool  _hasEvaluationMetrics;
    bool  _hasModelMetrics;
    bool  _hasTranscriptionMetrics;
    DODMLASRSchemaDODMLASRModelMetrics * _modelMetrics;
    DODMLASRSchemaDODMLASRTranscriptionMetrics * _transcriptionMetrics;
    int  _userLocale;
}

@property (nonatomic, retain) DODMLASRSchemaDODMLASREvaluationMetrics *evaluationMetrics;
@property (nonatomic) bool hasEvaluationMetrics;
@property (nonatomic) bool hasModelMetrics;
@property (nonatomic) bool hasTranscriptionMetrics;
@property (nonatomic) bool hasUserLocale;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) DODMLASRSchemaDODMLASRModelMetrics *modelMetrics;
@property (nonatomic, retain) DODMLASRSchemaDODMLASRTranscriptionMetrics *transcriptionMetrics;
@property (nonatomic) int userLocale;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteEvaluationMetrics;
- (void)deleteModelMetrics;
- (void)deleteTranscriptionMetrics;
- (void)deleteUserLocale;
- (id)dictionaryRepresentation;
- (id)evaluationMetrics;
- (bool)hasEvaluationMetrics;
- (bool)hasModelMetrics;
- (bool)hasTranscriptionMetrics;
- (bool)hasUserLocale;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)modelMetrics;
- (bool)readFrom:(id)arg1;
- (void)setEvaluationMetrics:(id)arg1;
- (void)setHasEvaluationMetrics:(bool)arg1;
- (void)setHasModelMetrics:(bool)arg1;
- (void)setHasTranscriptionMetrics:(bool)arg1;
- (void)setHasUserLocale:(bool)arg1;
- (void)setModelMetrics:(id)arg1;
- (void)setTranscriptionMetrics:(id)arg1;
- (void)setUserLocale:(int)arg1;
- (id)suppressMessageUnderConditions;
- (id)transcriptionMetrics;
- (int)userLocale;
- (void)writeTo:(id)arg1;

@end
