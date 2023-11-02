
@interface DODMLASRSchemaDODMLASRDecodingMetrics : SISchemaInstrumentationMessage {
    float  _averageActiveTokensPerFrame;
    struct { 
        unsigned int wallRealTimeFactor : 1; 
        unsigned int averageActiveTokensPerFrame : 1; 
        unsigned int jitQueryDurationInMs : 1; 
        unsigned int jitLanguageModelEnrollmentDurationInMs : 1; 
    }  _has;
    unsigned long long  _jitLanguageModelEnrollmentDurationInMs;
    unsigned long long  _jitQueryDurationInMs;
    NSArray * _languageModelInterpolationWeights;
    NSArray * _postprocessingEntityCategoryCounts;
    NSArray * _preprocessingEntityCategoryCounts;
    float  _wallRealTimeFactor;
}

@property (nonatomic) float averageActiveTokensPerFrame;
@property (nonatomic) bool hasAverageActiveTokensPerFrame;
@property (nonatomic) bool hasJitLanguageModelEnrollmentDurationInMs;
@property (nonatomic) bool hasJitQueryDurationInMs;
@property (nonatomic) bool hasWallRealTimeFactor;
@property (nonatomic) unsigned long long jitLanguageModelEnrollmentDurationInMs;
@property (nonatomic) unsigned long long jitQueryDurationInMs;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSArray *languageModelInterpolationWeights;
@property (nonatomic, copy) NSArray *postprocessingEntityCategoryCounts;
@property (nonatomic, copy) NSArray *preprocessingEntityCategoryCounts;
@property (nonatomic) float wallRealTimeFactor;

- (void).cxx_destruct;
- (void)addLanguageModelInterpolationWeights:(id)arg1;
- (void)addPostprocessingEntityCategoryCounts:(id)arg1;
- (void)addPreprocessingEntityCategoryCounts:(id)arg1;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (float)averageActiveTokensPerFrame;
- (void)clearLanguageModelInterpolationWeights;
- (void)clearPostprocessingEntityCategoryCounts;
- (void)clearPreprocessingEntityCategoryCounts;
- (void)deleteAverageActiveTokensPerFrame;
- (void)deleteJitLanguageModelEnrollmentDurationInMs;
- (void)deleteJitQueryDurationInMs;
- (void)deleteLanguageModelInterpolationWeights;
- (void)deletePostprocessingEntityCategoryCounts;
- (void)deletePreprocessingEntityCategoryCounts;
- (void)deleteWallRealTimeFactor;
- (id)dictionaryRepresentation;
- (bool)hasAverageActiveTokensPerFrame;
- (bool)hasJitLanguageModelEnrollmentDurationInMs;
- (bool)hasJitQueryDurationInMs;
- (bool)hasWallRealTimeFactor;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)jitLanguageModelEnrollmentDurationInMs;
- (unsigned long long)jitQueryDurationInMs;
- (id)jsonData;
- (id)languageModelInterpolationWeights;
- (id)languageModelInterpolationWeightsAtIndex:(unsigned long long)arg1;
- (unsigned long long)languageModelInterpolationWeightsCount;
- (id)postprocessingEntityCategoryCounts;
- (id)postprocessingEntityCategoryCountsAtIndex:(unsigned long long)arg1;
- (unsigned long long)postprocessingEntityCategoryCountsCount;
- (id)preprocessingEntityCategoryCounts;
- (id)preprocessingEntityCategoryCountsAtIndex:(unsigned long long)arg1;
- (unsigned long long)preprocessingEntityCategoryCountsCount;
- (bool)readFrom:(id)arg1;
- (void)setAverageActiveTokensPerFrame:(float)arg1;
- (void)setHasAverageActiveTokensPerFrame:(bool)arg1;
- (void)setHasJitLanguageModelEnrollmentDurationInMs:(bool)arg1;
- (void)setHasJitQueryDurationInMs:(bool)arg1;
- (void)setHasWallRealTimeFactor:(bool)arg1;
- (void)setJitLanguageModelEnrollmentDurationInMs:(unsigned long long)arg1;
- (void)setJitQueryDurationInMs:(unsigned long long)arg1;
- (void)setLanguageModelInterpolationWeights:(id)arg1;
- (void)setPostprocessingEntityCategoryCounts:(id)arg1;
- (void)setPreprocessingEntityCategoryCounts:(id)arg1;
- (void)setWallRealTimeFactor:(float)arg1;
- (id)suppressMessageUnderConditions;
- (float)wallRealTimeFactor;
- (void)writeTo:(id)arg1;

@end
