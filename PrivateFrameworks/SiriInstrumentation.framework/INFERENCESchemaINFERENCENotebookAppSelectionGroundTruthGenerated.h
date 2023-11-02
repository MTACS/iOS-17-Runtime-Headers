
@interface INFERENCESchemaINFERENCENotebookAppSelectionGroundTruthGenerated : SISchemaInstrumentationMessage {
    bool  _hasInferenceNotebookAppSelectionTrainingAppIndependentSignals;
    NSArray * _inferenceNotebookAppSelectionTrainingAppDependentSignals;
    INFERENCESchemaINFERENCENotebookAppSelectionTrainingIndependentSignals * _inferenceNotebookAppSelectionTrainingAppIndependentSignals;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic) bool hasInferenceNotebookAppSelectionTrainingAppIndependentSignals;
@property (nonatomic, copy) NSArray *inferenceNotebookAppSelectionTrainingAppDependentSignals;
@property (nonatomic, retain) INFERENCESchemaINFERENCENotebookAppSelectionTrainingIndependentSignals *inferenceNotebookAppSelectionTrainingAppIndependentSignals;
@property (nonatomic, readonly) NSData *jsonData;

// Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation

- (void).cxx_destruct;
- (void)addInferenceNotebookAppSelectionTrainingAppDependentSignals:(id)arg1;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)clearInferenceNotebookAppSelectionTrainingAppDependentSignals;
- (void)deleteInferenceNotebookAppSelectionTrainingAppDependentSignals;
- (void)deleteInferenceNotebookAppSelectionTrainingAppIndependentSignals;
- (id)dictionaryRepresentation;
- (bool)hasInferenceNotebookAppSelectionTrainingAppIndependentSignals;
- (unsigned long long)hash;
- (id)inferenceNotebookAppSelectionTrainingAppDependentSignals;
- (id)inferenceNotebookAppSelectionTrainingAppDependentSignalsAtIndex:(unsigned long long)arg1;
- (unsigned long long)inferenceNotebookAppSelectionTrainingAppDependentSignalsCount;
- (id)inferenceNotebookAppSelectionTrainingAppIndependentSignals;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setHasInferenceNotebookAppSelectionTrainingAppIndependentSignals:(bool)arg1;
- (void)setInferenceNotebookAppSelectionTrainingAppDependentSignals:(id)arg1;
- (void)setInferenceNotebookAppSelectionTrainingAppIndependentSignals:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/SiriNotebook.framework/SiriNotebook

- (id)description;

@end
