
@interface TTMSchemaTTMNeuralCombinerTCUResult : SISchemaInstrumentationMessage {
    struct { 
        unsigned int neuralCombinerScore : 1; 
        unsigned int recommendation : 1; 
    }  _has;
    bool  _hasTcuId;
    float  _neuralCombinerScore;
    int  _recommendation;
    SISchemaUUID * _tcuId;
}

@property (nonatomic) bool hasNeuralCombinerScore;
@property (nonatomic) bool hasRecommendation;
@property (nonatomic) bool hasTcuId;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) float neuralCombinerScore;
@property (nonatomic) int recommendation;
@property (nonatomic, retain) SISchemaUUID *tcuId;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteNeuralCombinerScore;
- (void)deleteRecommendation;
- (void)deleteTcuId;
- (id)dictionaryRepresentation;
- (bool)hasNeuralCombinerScore;
- (bool)hasRecommendation;
- (bool)hasTcuId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (float)neuralCombinerScore;
- (bool)readFrom:(id)arg1;
- (int)recommendation;
- (void)setHasNeuralCombinerScore:(bool)arg1;
- (void)setHasRecommendation:(bool)arg1;
- (void)setHasTcuId:(bool)arg1;
- (void)setNeuralCombinerScore:(float)arg1;
- (void)setRecommendation:(int)arg1;
- (void)setTcuId:(id)arg1;
- (id)suppressMessageUnderConditions;
- (id)tcuId;
- (void)writeTo:(id)arg1;

@end
