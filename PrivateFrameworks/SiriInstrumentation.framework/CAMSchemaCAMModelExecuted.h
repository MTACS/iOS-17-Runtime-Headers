
@interface CAMSchemaCAMModelExecuted : SISchemaInstrumentationMessage {
    SISchemaAsset * _asset;
    struct { 
        unsigned int prediction : 1; 
        unsigned int predictionScore : 1; 
        unsigned int predictionThreshold : 1; 
        unsigned int isShadowLog : 1; 
    }  _has;
    bool  _hasAsset;
    bool  _hasModelId;
    bool  _isShadowLog;
    CAMSchemaCAMModelId * _modelId;
    unsigned int  _prediction;
    float  _predictionScore;
    float  _predictionThreshold;
}

@property (nonatomic, retain) SISchemaAsset *asset;
@property (nonatomic) bool hasAsset;
@property (nonatomic) bool hasIsShadowLog;
@property (nonatomic) bool hasModelId;
@property (nonatomic) bool hasPrediction;
@property (nonatomic) bool hasPredictionScore;
@property (nonatomic) bool hasPredictionThreshold;
@property (nonatomic) bool isShadowLog;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) CAMSchemaCAMModelId *modelId;
@property (nonatomic) unsigned int prediction;
@property (nonatomic) float predictionScore;
@property (nonatomic) float predictionThreshold;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (id)asset;
- (void)deleteAsset;
- (void)deleteIsShadowLog;
- (void)deleteModelId;
- (void)deletePrediction;
- (void)deletePredictionScore;
- (void)deletePredictionThreshold;
- (id)dictionaryRepresentation;
- (bool)hasAsset;
- (bool)hasIsShadowLog;
- (bool)hasModelId;
- (bool)hasPrediction;
- (bool)hasPredictionScore;
- (bool)hasPredictionThreshold;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isShadowLog;
- (id)jsonData;
- (id)modelId;
- (unsigned int)prediction;
- (float)predictionScore;
- (float)predictionThreshold;
- (bool)readFrom:(id)arg1;
- (void)setAsset:(id)arg1;
- (void)setHasAsset:(bool)arg1;
- (void)setHasIsShadowLog:(bool)arg1;
- (void)setHasModelId:(bool)arg1;
- (void)setHasPrediction:(bool)arg1;
- (void)setHasPredictionScore:(bool)arg1;
- (void)setHasPredictionThreshold:(bool)arg1;
- (void)setIsShadowLog:(bool)arg1;
- (void)setModelId:(id)arg1;
- (void)setPrediction:(unsigned int)arg1;
- (void)setPredictionScore:(float)arg1;
- (void)setPredictionThreshold:(float)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
