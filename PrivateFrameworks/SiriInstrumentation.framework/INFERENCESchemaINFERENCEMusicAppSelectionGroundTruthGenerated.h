
@interface INFERENCESchemaINFERENCEMusicAppSelectionGroundTruthGenerated : SISchemaInstrumentationMessage {
    bool  _hasInferenceMusicTrainingIndependentSignals;
    NSArray * _inferenceMusicTrainingDependentSignals;
    INFERENCESchemaINFERENCEMusicTrainingIndependentSignals * _inferenceMusicTrainingIndependentSignals;
}

@property (nonatomic) bool hasInferenceMusicTrainingIndependentSignals;
@property (nonatomic, copy) NSArray *inferenceMusicTrainingDependentSignals;
@property (nonatomic, retain) INFERENCESchemaINFERENCEMusicTrainingIndependentSignals *inferenceMusicTrainingIndependentSignals;
@property (nonatomic, readonly) NSData *jsonData;

- (void).cxx_destruct;
- (void)addInferenceMusicTrainingDependentSignals:(id)arg1;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)clearInferenceMusicTrainingDependentSignals;
- (void)deleteInferenceMusicTrainingDependentSignals;
- (void)deleteInferenceMusicTrainingIndependentSignals;
- (id)dictionaryRepresentation;
- (bool)hasInferenceMusicTrainingIndependentSignals;
- (unsigned long long)hash;
- (id)inferenceMusicTrainingDependentSignals;
- (id)inferenceMusicTrainingDependentSignalsAtIndex:(unsigned long long)arg1;
- (unsigned long long)inferenceMusicTrainingDependentSignalsCount;
- (id)inferenceMusicTrainingIndependentSignals;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setHasInferenceMusicTrainingIndependentSignals:(bool)arg1;
- (void)setInferenceMusicTrainingDependentSignals:(id)arg1;
- (void)setInferenceMusicTrainingIndependentSignals:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
