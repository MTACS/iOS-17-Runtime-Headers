
@interface INFERENCESchemaINFERENCEWorkoutsAppSelectionGroundTruthGenerated : SISchemaInstrumentationMessage {
    bool  _hasInferenceWorkoutsAppSelectionTrainingIndependentSignals;
    NSArray * _inferenceWorkoutsAppSelectionTrainingDependentSignals;
    INFERENCESchemaINFERENCEWorkoutsAppSelectionTrainingIndependentSignals * _inferenceWorkoutsAppSelectionTrainingIndependentSignals;
}

@property (nonatomic) bool hasInferenceWorkoutsAppSelectionTrainingIndependentSignals;
@property (nonatomic, copy) NSArray *inferenceWorkoutsAppSelectionTrainingDependentSignals;
@property (nonatomic, retain) INFERENCESchemaINFERENCEWorkoutsAppSelectionTrainingIndependentSignals *inferenceWorkoutsAppSelectionTrainingIndependentSignals;
@property (nonatomic, readonly) NSData *jsonData;

- (void).cxx_destruct;
- (void)addInferenceWorkoutsAppSelectionTrainingDependentSignals:(id)arg1;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)clearInferenceWorkoutsAppSelectionTrainingDependentSignals;
- (void)deleteInferenceWorkoutsAppSelectionTrainingDependentSignals;
- (void)deleteInferenceWorkoutsAppSelectionTrainingIndependentSignals;
- (id)dictionaryRepresentation;
- (bool)hasInferenceWorkoutsAppSelectionTrainingIndependentSignals;
- (unsigned long long)hash;
- (id)inferenceWorkoutsAppSelectionTrainingDependentSignals;
- (id)inferenceWorkoutsAppSelectionTrainingDependentSignalsAtIndex:(unsigned long long)arg1;
- (unsigned long long)inferenceWorkoutsAppSelectionTrainingDependentSignalsCount;
- (id)inferenceWorkoutsAppSelectionTrainingIndependentSignals;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setHasInferenceWorkoutsAppSelectionTrainingIndependentSignals:(bool)arg1;
- (void)setInferenceWorkoutsAppSelectionTrainingDependentSignals:(id)arg1;
- (void)setInferenceWorkoutsAppSelectionTrainingIndependentSignals:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
