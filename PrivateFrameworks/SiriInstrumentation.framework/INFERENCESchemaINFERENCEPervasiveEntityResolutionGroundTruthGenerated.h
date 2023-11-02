
@interface INFERENCESchemaINFERENCEPervasiveEntityResolutionGroundTruthGenerated : SISchemaInstrumentationMessage {
    NSArray * _choiceDependentSignals;
    INFERENCESchemaINFERENCEPervasiveEntityResolutionCommonSignals * _commonSignals;
    bool  _hasCommonSignals;
}

@property (nonatomic, copy) NSArray *choiceDependentSignals;
@property (nonatomic, retain) INFERENCESchemaINFERENCEPervasiveEntityResolutionCommonSignals *commonSignals;
@property (nonatomic) bool hasCommonSignals;
@property (nonatomic, readonly) NSData *jsonData;

- (void).cxx_destruct;
- (void)addChoiceDependentSignals:(id)arg1;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (id)choiceDependentSignals;
- (id)choiceDependentSignalsAtIndex:(unsigned long long)arg1;
- (unsigned long long)choiceDependentSignalsCount;
- (void)clearChoiceDependentSignals;
- (id)commonSignals;
- (void)deleteChoiceDependentSignals;
- (void)deleteCommonSignals;
- (id)dictionaryRepresentation;
- (bool)hasCommonSignals;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setChoiceDependentSignals:(id)arg1;
- (void)setCommonSignals:(id)arg1;
- (void)setHasCommonSignals:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
