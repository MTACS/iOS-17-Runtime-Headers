
@interface INFERENCESchemaINFERENCECommsAppSelectionGroundTruthGenerated : SISchemaInstrumentationMessage {
    bool  _hasInferenceCommsAppSelectionTrainingAppIndependentSignals;
    NSArray * _inferenceCommsAppSelectionTrainingAppDependentSignals;
    INFERENCESchemaINFERENCECommsAppSelectionTrainingAppIndependentSignals * _inferenceCommsAppSelectionTrainingAppIndependentSignals;
}

@property (nonatomic) bool hasInferenceCommsAppSelectionTrainingAppIndependentSignals;
@property (nonatomic, copy) NSArray *inferenceCommsAppSelectionTrainingAppDependentSignals;
@property (nonatomic, retain) INFERENCESchemaINFERENCECommsAppSelectionTrainingAppIndependentSignals *inferenceCommsAppSelectionTrainingAppIndependentSignals;
@property (nonatomic, readonly) NSData *jsonData;

- (void).cxx_destruct;
- (void)addInferenceCommsAppSelectionTrainingAppDependentSignals:(id)arg1;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)clearInferenceCommsAppSelectionTrainingAppDependentSignals;
- (void)deleteInferenceCommsAppSelectionTrainingAppDependentSignals;
- (void)deleteInferenceCommsAppSelectionTrainingAppIndependentSignals;
- (id)dictionaryRepresentation;
- (bool)hasInferenceCommsAppSelectionTrainingAppIndependentSignals;
- (unsigned long long)hash;
- (id)inferenceCommsAppSelectionTrainingAppDependentSignals;
- (id)inferenceCommsAppSelectionTrainingAppDependentSignalsAtIndex:(unsigned long long)arg1;
- (unsigned long long)inferenceCommsAppSelectionTrainingAppDependentSignalsCount;
- (id)inferenceCommsAppSelectionTrainingAppIndependentSignals;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setHasInferenceCommsAppSelectionTrainingAppIndependentSignals:(bool)arg1;
- (void)setInferenceCommsAppSelectionTrainingAppDependentSignals:(id)arg1;
- (void)setInferenceCommsAppSelectionTrainingAppIndependentSignals:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
