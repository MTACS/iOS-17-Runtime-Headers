
@interface TTMSchemaTTMNeuralCombinerRequestEnded : SISchemaInstrumentationMessage {
    SISchemaAsset * _asset;
    struct { 
        unsigned int neuralCombinerThreshold : 1; 
    }  _has;
    bool  _hasAsset;
    float  _neuralCombinerThreshold;
    NSArray * _results;
}

@property (nonatomic, retain) SISchemaAsset *asset;
@property (nonatomic) bool hasAsset;
@property (nonatomic) bool hasNeuralCombinerThreshold;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) float neuralCombinerThreshold;
@property (nonatomic, copy) NSArray *results;

- (void).cxx_destruct;
- (void)addResults:(id)arg1;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (id)asset;
- (void)clearResults;
- (void)deleteAsset;
- (void)deleteNeuralCombinerThreshold;
- (void)deleteResults;
- (id)dictionaryRepresentation;
- (bool)hasAsset;
- (bool)hasNeuralCombinerThreshold;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (float)neuralCombinerThreshold;
- (bool)readFrom:(id)arg1;
- (id)results;
- (id)resultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)resultsCount;
- (void)setAsset:(id)arg1;
- (void)setHasAsset:(bool)arg1;
- (void)setHasNeuralCombinerThreshold:(bool)arg1;
- (void)setNeuralCombinerThreshold:(float)arg1;
- (void)setResults:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
