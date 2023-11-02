
@interface INFERENCESchemaINFERENCEVideoSmartAppSelectionDisambiguationSignalsGenerated : SISchemaInstrumentationMessage {
    NSArray * _dependentSignals;
    bool  _hasIndependentSignal;
    bool  _hasPlayOnThirdPartyAppSignals;
    INFERENCESchemaINFERENCEVideoSmartAppSelectionDisambiguationIndependentSignals * _independentSignal;
    INFERENCESchemaINFERENCEVideoPlayOnThirdPartyAppGroundTruthGenerated * _playOnThirdPartyAppSignals;
}

@property (nonatomic, copy) NSArray *dependentSignals;
@property (nonatomic) bool hasIndependentSignal;
@property (nonatomic) bool hasPlayOnThirdPartyAppSignals;
@property (nonatomic, retain) INFERENCESchemaINFERENCEVideoSmartAppSelectionDisambiguationIndependentSignals *independentSignal;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) INFERENCESchemaINFERENCEVideoPlayOnThirdPartyAppGroundTruthGenerated *playOnThirdPartyAppSignals;

- (void).cxx_destruct;
- (void)addDependentSignals:(id)arg1;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)clearDependentSignals;
- (void)deleteDependentSignals;
- (void)deleteIndependentSignal;
- (void)deletePlayOnThirdPartyAppSignals;
- (id)dependentSignals;
- (id)dependentSignalsAtIndex:(unsigned long long)arg1;
- (unsigned long long)dependentSignalsCount;
- (id)dictionaryRepresentation;
- (bool)hasIndependentSignal;
- (bool)hasPlayOnThirdPartyAppSignals;
- (unsigned long long)hash;
- (id)independentSignal;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)playOnThirdPartyAppSignals;
- (bool)readFrom:(id)arg1;
- (void)setDependentSignals:(id)arg1;
- (void)setHasIndependentSignal:(bool)arg1;
- (void)setHasPlayOnThirdPartyAppSignals:(bool)arg1;
- (void)setIndependentSignal:(id)arg1;
- (void)setPlayOnThirdPartyAppSignals:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
