
@interface INFERENCESchemaINFERENCEVideoPlayOnThirdPartyAppGroundTruthGenerated : SISchemaInstrumentationMessage {
    NSArray * _dependentSignals;
    bool  _hasIndependentSignal;
    INFERENCESchemaINFERENCEVideoPlayOnThirdPartyAppIndependentSignals * _independentSignal;
}

@property (nonatomic, copy) NSArray *dependentSignals;
@property (nonatomic) bool hasIndependentSignal;
@property (nonatomic, retain) INFERENCESchemaINFERENCEVideoPlayOnThirdPartyAppIndependentSignals *independentSignal;
@property (nonatomic, readonly) NSData *jsonData;

- (void).cxx_destruct;
- (void)addDependentSignals:(id)arg1;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)clearDependentSignals;
- (void)deleteDependentSignals;
- (void)deleteIndependentSignal;
- (id)dependentSignals;
- (id)dependentSignalsAtIndex:(unsigned long long)arg1;
- (unsigned long long)dependentSignalsCount;
- (id)dictionaryRepresentation;
- (bool)hasIndependentSignal;
- (unsigned long long)hash;
- (id)independentSignal;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setDependentSignals:(id)arg1;
- (void)setHasIndependentSignal:(bool)arg1;
- (void)setIndependentSignal:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
